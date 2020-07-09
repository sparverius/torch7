// THIS FILE WAS AUTOMATICALLY GENERATED @ 2020-07-09
// DO NOT MODIFY
#include "THGeneral.h"


typedef struct THAllocator {
  void* (*malloc)(void*, ptrdiff_t);
  void* (*realloc)(void*, void*, ptrdiff_t);
  void (*free)(void*, void*);
} THAllocator;

extern THAllocator THDefaultAllocator;

typedef struct THMapAllocatorContext_ THMapAllocatorContext;
THMapAllocatorContext* THMapAllocatorContext_new(const char* filename,
                                                 int flags);
THMapAllocatorContext* THMapAllocatorContext_newWithFd(const char* filename,
                                                       int fd, int flags);
char* THMapAllocatorContext_filename(THMapAllocatorContext* ctx);
int THMapAllocatorContext_fd(THMapAllocatorContext* ctx);
ptrdiff_t THMapAllocatorContext_size(THMapAllocatorContext* ctx);
void THMapAllocatorContext_free(THMapAllocatorContext* ctx);
void THRefcountedMapAllocator_incref(THMapAllocatorContext* ctx, void* data);
int THRefcountedMapAllocator_decref(THMapAllocatorContext* ctx, void* data);

extern THAllocator THMapAllocator;
extern THAllocator THRefcountedMapAllocator;
void THAtomicSet(int volatile* a, int newvalue);

int THAtomicGet(int volatile* a);

int THAtomicAdd(int volatile* a, int value);

int THAtomicCompareAndSwap(int volatile* a, int oldvalue, int newvalue);
void THAtomicIncrementRef(int volatile* a);

int THAtomicDecrementRef(int volatile* a);
void THAtomicSetLong(long volatile* a, long newvalue);

long THAtomicGetLong(long volatile* a);

long THAtomicAddLong(long volatile* a, long value);

long THAtomicCompareAndSwapLong(long volatile* a, long oldvalue, long newvalue);
void THAtomicSetPtrdiff(ptrdiff_t volatile* a, ptrdiff_t newvalue);

ptrdiff_t THAtomicGetPtrdiff(ptrdiff_t volatile* a);

ptrdiff_t THAtomicAddPtrdiff(ptrdiff_t volatile* a, ptrdiff_t value);

ptrdiff_t THAtomicCompareAndSwapPtrdiff(ptrdiff_t volatile* a,
                                        ptrdiff_t oldvalue, ptrdiff_t newvalue);

static void* THDefaultAllocator_alloc(void* ctx, ptrdiff_t size) {
  return THAlloc(size);
}

static void* THDefaultAllocator_realloc(void* ctx, void* ptr, ptrdiff_t size) {
  return THRealloc(ptr, size);
}

static void THDefaultAllocator_free(void* ctx, void* ptr) { THFree(ptr); }

THAllocator THDefaultAllocator = {&THDefaultAllocator_alloc,
                                  &THDefaultAllocator_realloc,
                                  &THDefaultAllocator_free};

struct THMapAllocatorContext_ {
  char* filename;
  int flags;
  ptrdiff_t size;
  int fd;
};

typedef struct {
  int refcount;
} THMapInfo;

char* unknown_filename = "filename not specified";

THMapAllocatorContext* THMapAllocatorContext_new(const char* filename,
                                                 int flags) {
  THMapAllocatorContext* ctx = THAlloc(sizeof(THMapAllocatorContext));

  if (!(flags & 1) && !(flags & 2)) flags &= ~8;
  if ((flags ^ 4) == 0)
    _THError("THAllocator.c", 63,
             "TH_ALLOCATOR_MAPPED_EXCLUSIVE flag requires opening the file "
             "in shared mode")

        ;

  if (filename) {
    ctx->filename = THAlloc(strlen(filename) + 1);
    strcpy(ctx->filename, filename);
  } else {
    ctx->filename = unknown_filename;
  }
  ctx->flags = flags;
  ctx->size = 0;
  ctx->fd = -1;

  return ctx;
}

THMapAllocatorContext* THMapAllocatorContext_newWithFd(const char* filename,
                                                       int fd, int flags) {
  THMapAllocatorContext* ctx = THMapAllocatorContext_new(filename, flags);
  ctx->fd = fd;

  return ctx;
}

char* THMapAllocatorContext_filename(THMapAllocatorContext* ctx) {
  return ctx->filename;
}

int THMapAllocatorContext_fd(THMapAllocatorContext* ctx) { return ctx->fd; }

ptrdiff_t THMapAllocatorContext_size(THMapAllocatorContext* ctx) {
  return ctx->size;
}

void THMapAllocatorContext_free(THMapAllocatorContext* ctx) {
  if (ctx->filename != unknown_filename) THFree(ctx->filename);
  THFree(ctx);
}

static void* _map_alloc(void* ctx_, ptrdiff_t size) {
  THMapAllocatorContext* ctx = ctx_;
  void* data = NULL;
  {
    int fd;
    int flags;
    struct stat file_stat;

    if (ctx->flags & (1 | 2))
      flags = O_RDWR | O_CREAT;
    else
      flags = O_RDONLY;

    if (ctx->flags & 4) flags |= O_EXCL;
    if (ctx->flags & 8) flags &= ~O_CREAT;

    if (!(ctx->flags & 32)) {
      if (ctx->flags & 1) {
        if ((fd = open(ctx->filename, flags, (mode_t)0600)) == -1)
          _THError("THAllocator.c", 219,
                   "unable to open file <%s> in read-write mode",
                   ctx->filename);
      } else if (ctx->flags & 2) {
        _THError(
            "THAllocator.c", 226,
            "unable to open file <%s> in sharedmem mode, shm_open unavailable "
            "on this platform",
            ctx->filename)

            ;

      } else {
        if ((fd = open(ctx->filename, O_RDONLY)) == -1)
          _THError("THAllocator.c", 233,
                   "unable to open file <%s> in read-only mode", ctx->filename);
      }
    } else {
      fd = ctx->fd;
    }

    if (fstat(fd, &file_stat) == -1) {
      if (!(ctx->flags & 32)) close(fd);
      _THError("THAllocator.c", 241, "unable to stat the file <%s>",
               ctx->filename);
    }

    if (size > 0) {
      if (size > file_stat.st_size) {
        if (ctx->flags) {
          if (ftruncate(fd, size) == -1)
            _THError("THAllocator.c", 248,
                     "unable to resize file <%s> to the right size",
                     ctx->filename);
          if (fstat(fd, &file_stat) == -1 || file_stat.st_size < size) {
            close(fd);
            _THError("THAllocator.c", 252,
                     "unable to stretch file <%s> to the right size",
                     ctx->filename);
          }

          if ((write(fd, "", 1)) != 1) {
            close(fd);
            _THError("THAllocator.c", 263, "unable to write to file <%s>",
                     ctx->filename);
          }

        } else {
          close(fd);
          _THError(
              "THAllocator.c", 268,
              "file <%s> size is smaller than the required mapping size <%ld>",
              ctx->filename, size)

              ;
        }
      }
    } else
      size = file_stat.st_size;

    ctx->size = size;

    if (ctx->flags & (1 | 2))
      data = mmap(NULL, ctx->size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    else
      data = mmap(NULL, ctx->size, PROT_READ | PROT_WRITE, MAP_PRIVATE, fd, 0);

    if (ctx->flags & 16) {
      ctx->fd = fd;
    } else {
      if (close(fd) == -1)
        _THError("THAllocator.c", 288, "Error closing file <%s>",
                 ctx->filename);
      ctx->fd = -1;
    }

    if (ctx->flags & 64) {
      if (ctx->flags & 2) {
        _THError("THAllocator.c", 298,
                 "could not unlink the shared memory file %s, shm_unlink not "
                 "available on platform",
                 ctx->filename)

            ;

      } else {
        if (unlink(ctx->filename) == -1)
          _THError("THAllocator.c", 305, "could not unlink file %s",
                   ctx->filename);
      }
    }

    if (data == MAP_FAILED) {
      data = NULL;
      _THError("THAllocator.c", 311,
               "$ Torch: unable to mmap memory: you tried to mmap %dGB.",
               ctx->size / 1073741824);
    }
  }

  return data;
}

static void* THMapAllocator_alloc(void* ctx, ptrdiff_t size) {
  return _map_alloc(ctx, size);
}

static void* THMapAllocator_realloc(void* ctx, void* ptr, ptrdiff_t size) {
  _THError("THAllocator.c", 325, "cannot realloc mapped data");
  return NULL;
}

static void THMapAllocator_free(void* ctx_, void* data) {
  THMapAllocatorContext* ctx = ctx_;

  if (ctx->flags & 16) {
    if (close(ctx->fd) == -1)
      _THError("THAllocator.c", 338, "could not close file descriptor %d",
               ctx->fd);
  }

  if (munmap(data, ctx->size))
    _THError("THAllocator.c", 342, "could not unmap the shared memory file");

  if (!(ctx->flags & (32 | 64))) {
    if (ctx->flags & 2) {
      _THError("THAllocator.c", 351,
               "could not unlink the shared memory file %s, shm_unlink not "
               "available on platform",
               ctx->filename)

          ;
    }
  }

  THMapAllocatorContext_free(ctx);
}
static void* THRefcountedMapAllocator_alloc(void* ctx, ptrdiff_t size) {
  _THError("THAllocator.c", 471,
           "refcounted file mapping not supported on your system");
  return NULL;
}

static void* THRefcountedMapAllocator_realloc(void* ctx, void* ptr,
                                              ptrdiff_t size) {
  _THError("THAllocator.c", 477,
           "refcounted file mapping not supported on your system");
  return NULL;
}

static void THRefcountedMapAllocator_free(void* ctx_, void* data) {
  _THError("THAllocator.c", 482,
           "refcounted file mapping not supported on your system");
}

void THRefcountedMapAllocator_incref(THMapAllocatorContext* ctx, void* data) {
  _THError("THAllocator.c", 486,
           "refcounted file mapping not supported on your system");
}

int THRefcountedMapAllocator_decref(THMapAllocatorContext* ctx, void* data) {
  _THError("THAllocator.c", 490,
           "refcounted file mapping not supported on your system");
  return 0;
}

THAllocator THMapAllocator = {&THMapAllocator_alloc, &THMapAllocator_realloc,
                              &THMapAllocator_free};

THAllocator THRefcountedMapAllocator = {&THRefcountedMapAllocator_alloc,
                                        &THRefcountedMapAllocator_realloc,
                                        &THRefcountedMapAllocator_free};
