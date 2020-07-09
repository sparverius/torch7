// THIS FILE WAS AUTOMATICALLY GENERATED @ 2020-07-09
// DO NOT MODIFY
#include "THGeneral.h"


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

typedef struct THFloatStorage {
  float* data;
  ptrdiff_t size;
  int refcount;
  char flag;
  THAllocator* allocator;
  void* allocatorContext;
  struct THFloatStorage* view;
} THFloatStorage;

float* THFloatStorage_data(const THFloatStorage*);
ptrdiff_t THFloatStorage_size(const THFloatStorage*);
size_t THFloatStorage_elementSize(void);

void THFloatStorage_set(THFloatStorage*, ptrdiff_t, float);
float THFloatStorage_get(const THFloatStorage*, ptrdiff_t);

THFloatStorage* THFloatStorage_new(void);
THFloatStorage* THFloatStorage_newWithSize(ptrdiff_t size);
THFloatStorage* THFloatStorage_newWithSize1(float);
THFloatStorage* THFloatStorage_newWithSize2(float, float);
THFloatStorage* THFloatStorage_newWithSize3(float, float, float);
THFloatStorage* THFloatStorage_newWithSize4(float, float, float, float);
THFloatStorage* THFloatStorage_newWithMapping(const char* filename,
                                              ptrdiff_t size, int flags);

THFloatStorage* THFloatStorage_newWithData(float* data, ptrdiff_t size);

THFloatStorage* THFloatStorage_newWithAllocator(ptrdiff_t size,
                                                THAllocator* allocator,
                                                void* allocatorContext);
THFloatStorage* THFloatStorage_newWithDataAndAllocator(float* data,
                                                       ptrdiff_t size,
                                                       THAllocator* allocator,
                                                       void* allocatorContext);

void THFloatStorage_setFlag(THFloatStorage* storage, const char flag);
void THFloatStorage_clearFlag(THFloatStorage* storage, const char flag);
void THFloatStorage_retain(THFloatStorage* storage);
void THFloatStorage_swap(THFloatStorage* storage1, THFloatStorage* storage2);

void THFloatStorage_free(THFloatStorage* storage);
void THFloatStorage_resize(THFloatStorage* storage, ptrdiff_t size);
void THFloatStorage_fill(THFloatStorage* storage, float value);

typedef struct THDoubleStorage {
  double* data;
  ptrdiff_t size;
  int refcount;
  char flag;
  THAllocator* allocator;
  void* allocatorContext;
  struct THDoubleStorage* view;
} THDoubleStorage;

double* THDoubleStorage_data(const THDoubleStorage*);
ptrdiff_t THDoubleStorage_size(const THDoubleStorage*);
size_t THDoubleStorage_elementSize(void);

void THDoubleStorage_set(THDoubleStorage*, ptrdiff_t, double);
double THDoubleStorage_get(const THDoubleStorage*, ptrdiff_t);

THDoubleStorage* THDoubleStorage_new(void);
THDoubleStorage* THDoubleStorage_newWithSize(ptrdiff_t size);
THDoubleStorage* THDoubleStorage_newWithSize1(double);
THDoubleStorage* THDoubleStorage_newWithSize2(double, double);
THDoubleStorage* THDoubleStorage_newWithSize3(double, double, double);
THDoubleStorage* THDoubleStorage_newWithSize4(double, double, double, double);
THDoubleStorage* THDoubleStorage_newWithMapping(const char* filename,
                                                ptrdiff_t size, int flags);

THDoubleStorage* THDoubleStorage_newWithData(double* data, ptrdiff_t size);

THDoubleStorage* THDoubleStorage_newWithAllocator(ptrdiff_t size,
                                                  THAllocator* allocator,
                                                  void* allocatorContext);
THDoubleStorage* THDoubleStorage_newWithDataAndAllocator(
    double* data, ptrdiff_t size, THAllocator* allocator,
    void* allocatorContext);

void THDoubleStorage_setFlag(THDoubleStorage* storage, const char flag);
void THDoubleStorage_clearFlag(THDoubleStorage* storage, const char flag);
void THDoubleStorage_retain(THDoubleStorage* storage);
void THDoubleStorage_swap(THDoubleStorage* storage1, THDoubleStorage* storage2);

void THDoubleStorage_free(THDoubleStorage* storage);
void THDoubleStorage_resize(THDoubleStorage* storage, ptrdiff_t size);
void THDoubleStorage_fill(THDoubleStorage* storage, double value);

typedef struct THByteStorage {
  unsigned char* data;
  ptrdiff_t size;
  int refcount;
  char flag;
  THAllocator* allocator;
  void* allocatorContext;
  struct THByteStorage* view;
} THByteStorage;

unsigned char* THByteStorage_data(const THByteStorage*);
ptrdiff_t THByteStorage_size(const THByteStorage*);
size_t THByteStorage_elementSize(void);

void THByteStorage_set(THByteStorage*, ptrdiff_t, unsigned char);
unsigned char THByteStorage_get(const THByteStorage*, ptrdiff_t);

THByteStorage* THByteStorage_new(void);
THByteStorage* THByteStorage_newWithSize(ptrdiff_t size);
THByteStorage* THByteStorage_newWithSize1(unsigned char);
THByteStorage* THByteStorage_newWithSize2(unsigned char, unsigned char);
THByteStorage* THByteStorage_newWithSize3(unsigned char, unsigned char,
                                          unsigned char);
THByteStorage* THByteStorage_newWithSize4(unsigned char, unsigned char,
                                          unsigned char, unsigned char);
THByteStorage* THByteStorage_newWithMapping(const char* filename,
                                            ptrdiff_t size, int flags);

THByteStorage* THByteStorage_newWithData(unsigned char* data, ptrdiff_t size);

THByteStorage* THByteStorage_newWithAllocator(ptrdiff_t size,
                                              THAllocator* allocator,
                                              void* allocatorContext);
THByteStorage* THByteStorage_newWithDataAndAllocator(unsigned char* data,
                                                     ptrdiff_t size,
                                                     THAllocator* allocator,
                                                     void* allocatorContext);

void THByteStorage_setFlag(THByteStorage* storage, const char flag);
void THByteStorage_clearFlag(THByteStorage* storage, const char flag);
void THByteStorage_retain(THByteStorage* storage);
void THByteStorage_swap(THByteStorage* storage1, THByteStorage* storage2);

void THByteStorage_free(THByteStorage* storage);
void THByteStorage_resize(THByteStorage* storage, ptrdiff_t size);
void THByteStorage_fill(THByteStorage* storage, unsigned char value);

typedef struct THCharStorage {
  char* data;
  ptrdiff_t size;
  int refcount;
  char flag;
  THAllocator* allocator;
  void* allocatorContext;
  struct THCharStorage* view;
} THCharStorage;

char* THCharStorage_data(const THCharStorage*);
ptrdiff_t THCharStorage_size(const THCharStorage*);
size_t THCharStorage_elementSize(void);

void THCharStorage_set(THCharStorage*, ptrdiff_t, char);
char THCharStorage_get(const THCharStorage*, ptrdiff_t);

THCharStorage* THCharStorage_new(void);
THCharStorage* THCharStorage_newWithSize(ptrdiff_t size);
THCharStorage* THCharStorage_newWithSize1(char);
THCharStorage* THCharStorage_newWithSize2(char, char);
THCharStorage* THCharStorage_newWithSize3(char, char, char);
THCharStorage* THCharStorage_newWithSize4(char, char, char, char);
THCharStorage* THCharStorage_newWithMapping(const char* filename,
                                            ptrdiff_t size, int flags);

THCharStorage* THCharStorage_newWithData(char* data, ptrdiff_t size);

THCharStorage* THCharStorage_newWithAllocator(ptrdiff_t size,
                                              THAllocator* allocator,
                                              void* allocatorContext);
THCharStorage* THCharStorage_newWithDataAndAllocator(char* data, ptrdiff_t size,
                                                     THAllocator* allocator,
                                                     void* allocatorContext);

void THCharStorage_setFlag(THCharStorage* storage, const char flag);
void THCharStorage_clearFlag(THCharStorage* storage, const char flag);
void THCharStorage_retain(THCharStorage* storage);
void THCharStorage_swap(THCharStorage* storage1, THCharStorage* storage2);

void THCharStorage_free(THCharStorage* storage);
void THCharStorage_resize(THCharStorage* storage, ptrdiff_t size);
void THCharStorage_fill(THCharStorage* storage, char value);

typedef struct THShortStorage {
  short* data;
  ptrdiff_t size;
  int refcount;
  char flag;
  THAllocator* allocator;
  void* allocatorContext;
  struct THShortStorage* view;
} THShortStorage;

short* THShortStorage_data(const THShortStorage*);
ptrdiff_t THShortStorage_size(const THShortStorage*);
size_t THShortStorage_elementSize(void);

void THShortStorage_set(THShortStorage*, ptrdiff_t, short);
short THShortStorage_get(const THShortStorage*, ptrdiff_t);

THShortStorage* THShortStorage_new(void);
THShortStorage* THShortStorage_newWithSize(ptrdiff_t size);
THShortStorage* THShortStorage_newWithSize1(short);
THShortStorage* THShortStorage_newWithSize2(short, short);
THShortStorage* THShortStorage_newWithSize3(short, short, short);
THShortStorage* THShortStorage_newWithSize4(short, short, short, short);
THShortStorage* THShortStorage_newWithMapping(const char* filename,
                                              ptrdiff_t size, int flags);

THShortStorage* THShortStorage_newWithData(short* data, ptrdiff_t size);

THShortStorage* THShortStorage_newWithAllocator(ptrdiff_t size,
                                                THAllocator* allocator,
                                                void* allocatorContext);
THShortStorage* THShortStorage_newWithDataAndAllocator(short* data,
                                                       ptrdiff_t size,
                                                       THAllocator* allocator,
                                                       void* allocatorContext);

void THShortStorage_setFlag(THShortStorage* storage, const char flag);
void THShortStorage_clearFlag(THShortStorage* storage, const char flag);
void THShortStorage_retain(THShortStorage* storage);
void THShortStorage_swap(THShortStorage* storage1, THShortStorage* storage2);

void THShortStorage_free(THShortStorage* storage);
void THShortStorage_resize(THShortStorage* storage, ptrdiff_t size);
void THShortStorage_fill(THShortStorage* storage, short value);

typedef struct THIntStorage {
  int* data;
  ptrdiff_t size;
  int refcount;
  char flag;
  THAllocator* allocator;
  void* allocatorContext;
  struct THIntStorage* view;
} THIntStorage;

int* THIntStorage_data(const THIntStorage*);
ptrdiff_t THIntStorage_size(const THIntStorage*);
size_t THIntStorage_elementSize(void);

void THIntStorage_set(THIntStorage*, ptrdiff_t, int);
int THIntStorage_get(const THIntStorage*, ptrdiff_t);

THIntStorage* THIntStorage_new(void);
THIntStorage* THIntStorage_newWithSize(ptrdiff_t size);
THIntStorage* THIntStorage_newWithSize1(int);
THIntStorage* THIntStorage_newWithSize2(int, int);
THIntStorage* THIntStorage_newWithSize3(int, int, int);
THIntStorage* THIntStorage_newWithSize4(int, int, int, int);
THIntStorage* THIntStorage_newWithMapping(const char* filename, ptrdiff_t size,
                                          int flags);

THIntStorage* THIntStorage_newWithData(int* data, ptrdiff_t size);

THIntStorage* THIntStorage_newWithAllocator(ptrdiff_t size,
                                            THAllocator* allocator,
                                            void* allocatorContext);
THIntStorage* THIntStorage_newWithDataAndAllocator(int* data, ptrdiff_t size,
                                                   THAllocator* allocator,
                                                   void* allocatorContext);

void THIntStorage_setFlag(THIntStorage* storage, const char flag);
void THIntStorage_clearFlag(THIntStorage* storage, const char flag);
void THIntStorage_retain(THIntStorage* storage);
void THIntStorage_swap(THIntStorage* storage1, THIntStorage* storage2);

void THIntStorage_free(THIntStorage* storage);
void THIntStorage_resize(THIntStorage* storage, ptrdiff_t size);
void THIntStorage_fill(THIntStorage* storage, int value);

typedef struct THLongStorage {
  long* data;
  ptrdiff_t size;
  int refcount;
  char flag;
  THAllocator* allocator;
  void* allocatorContext;
  struct THLongStorage* view;
} THLongStorage;

long* THLongStorage_data(const THLongStorage*);
ptrdiff_t THLongStorage_size(const THLongStorage*);
size_t THLongStorage_elementSize(void);

void THLongStorage_set(THLongStorage*, ptrdiff_t, long);
long THLongStorage_get(const THLongStorage*, ptrdiff_t);

THLongStorage* THLongStorage_new(void);
THLongStorage* THLongStorage_newWithSize(ptrdiff_t size);
THLongStorage* THLongStorage_newWithSize1(long);
THLongStorage* THLongStorage_newWithSize2(long, long);
THLongStorage* THLongStorage_newWithSize3(long, long, long);
THLongStorage* THLongStorage_newWithSize4(long, long, long, long);
THLongStorage* THLongStorage_newWithMapping(const char* filename,
                                            ptrdiff_t size, int flags);

THLongStorage* THLongStorage_newWithData(long* data, ptrdiff_t size);

THLongStorage* THLongStorage_newWithAllocator(ptrdiff_t size,
                                              THAllocator* allocator,
                                              void* allocatorContext);
THLongStorage* THLongStorage_newWithDataAndAllocator(long* data, ptrdiff_t size,
                                                     THAllocator* allocator,
                                                     void* allocatorContext);

void THLongStorage_setFlag(THLongStorage* storage, const char flag);
void THLongStorage_clearFlag(THLongStorage* storage, const char flag);
void THLongStorage_retain(THLongStorage* storage);
void THLongStorage_swap(THLongStorage* storage1, THLongStorage* storage2);

void THLongStorage_free(THLongStorage* storage);
void THLongStorage_resize(THLongStorage* storage, ptrdiff_t size);
void THLongStorage_fill(THLongStorage* storage, long value);

typedef struct __attribute__((aligned(2))) {
  unsigned short x;
} __THHalf;

typedef struct __attribute__((aligned(4))) {
  unsigned int x;
} __THHalf2;

typedef __THHalf THHalf;
typedef __THHalf2 THHalf2;

void TH_float2halfbits(float*, unsigned short*);
void TH_halfbits2float(unsigned short*, float*);

THHalf TH_float2half(float);
float TH_half2float(THHalf);

typedef struct THHalfStorage {
  THHalf* data;
  ptrdiff_t size;
  int refcount;
  char flag;
  THAllocator* allocator;
  void* allocatorContext;
  struct THHalfStorage* view;
} THHalfStorage;

THHalf* THHalfStorage_data(const THHalfStorage*);
ptrdiff_t THHalfStorage_size(const THHalfStorage*);
size_t THHalfStorage_elementSize(void);

void THHalfStorage_set(THHalfStorage*, ptrdiff_t, THHalf);
THHalf THHalfStorage_get(const THHalfStorage*, ptrdiff_t);

THHalfStorage* THHalfStorage_new(void);
THHalfStorage* THHalfStorage_newWithSize(ptrdiff_t size);
THHalfStorage* THHalfStorage_newWithSize1(THHalf);
THHalfStorage* THHalfStorage_newWithSize2(THHalf, THHalf);
THHalfStorage* THHalfStorage_newWithSize3(THHalf, THHalf, THHalf);
THHalfStorage* THHalfStorage_newWithSize4(THHalf, THHalf, THHalf, THHalf);
THHalfStorage* THHalfStorage_newWithMapping(const char* filename,
                                            ptrdiff_t size, int flags);

THHalfStorage* THHalfStorage_newWithData(THHalf* data, ptrdiff_t size);

THHalfStorage* THHalfStorage_newWithAllocator(ptrdiff_t size,
                                              THAllocator* allocator,
                                              void* allocatorContext);
THHalfStorage* THHalfStorage_newWithDataAndAllocator(THHalf* data,
                                                     ptrdiff_t size,
                                                     THAllocator* allocator,
                                                     void* allocatorContext);

void THHalfStorage_setFlag(THHalfStorage* storage, const char flag);
void THHalfStorage_clearFlag(THHalfStorage* storage, const char flag);
void THHalfStorage_retain(THHalfStorage* storage);
void THHalfStorage_swap(THHalfStorage* storage1, THHalfStorage* storage2);

void THHalfStorage_free(THHalfStorage* storage);
void THHalfStorage_resize(THHalfStorage* storage, ptrdiff_t size);
void THHalfStorage_fill(THHalfStorage* storage, THHalf value);

void THFloatStorage_rawCopy(THFloatStorage* storage, float* src);
void THFloatStorage_copy(THFloatStorage* storage, THFloatStorage* src);
void THFloatStorage_copyByte(THFloatStorage* storage,
                             struct THByteStorage* src);
void THFloatStorage_copyChar(THFloatStorage* storage,
                             struct THCharStorage* src);
void THFloatStorage_copyShort(THFloatStorage* storage,
                              struct THShortStorage* src);
void THFloatStorage_copyInt(THFloatStorage* storage, struct THIntStorage* src);
void THFloatStorage_copyLong(THFloatStorage* storage,
                             struct THLongStorage* src);
void THFloatStorage_copyFloat(THFloatStorage* storage,
                              struct THFloatStorage* src);
void THFloatStorage_copyDouble(THFloatStorage* storage,
                               struct THDoubleStorage* src);
void THFloatStorage_copyHalf(THFloatStorage* storage,
                             struct THHalfStorage* src);

void THDoubleStorage_rawCopy(THDoubleStorage* storage, double* src);
void THDoubleStorage_copy(THDoubleStorage* storage, THDoubleStorage* src);
void THDoubleStorage_copyByte(THDoubleStorage* storage,
                              struct THByteStorage* src);
void THDoubleStorage_copyChar(THDoubleStorage* storage,
                              struct THCharStorage* src);
void THDoubleStorage_copyShort(THDoubleStorage* storage,
                               struct THShortStorage* src);
void THDoubleStorage_copyInt(THDoubleStorage* storage,
                             struct THIntStorage* src);
void THDoubleStorage_copyLong(THDoubleStorage* storage,
                              struct THLongStorage* src);
void THDoubleStorage_copyFloat(THDoubleStorage* storage,
                               struct THFloatStorage* src);
void THDoubleStorage_copyDouble(THDoubleStorage* storage,
                                struct THDoubleStorage* src);
void THDoubleStorage_copyHalf(THDoubleStorage* storage,
                              struct THHalfStorage* src);

void THByteStorage_rawCopy(THByteStorage* storage, unsigned char* src);
void THByteStorage_copy(THByteStorage* storage, THByteStorage* src);
void THByteStorage_copyByte(THByteStorage* storage, struct THByteStorage* src);
void THByteStorage_copyChar(THByteStorage* storage, struct THCharStorage* src);
void THByteStorage_copyShort(THByteStorage* storage,
                             struct THShortStorage* src);
void THByteStorage_copyInt(THByteStorage* storage, struct THIntStorage* src);
void THByteStorage_copyLong(THByteStorage* storage, struct THLongStorage* src);
void THByteStorage_copyFloat(THByteStorage* storage,
                             struct THFloatStorage* src);
void THByteStorage_copyDouble(THByteStorage* storage,
                              struct THDoubleStorage* src);
void THByteStorage_copyHalf(THByteStorage* storage, struct THHalfStorage* src);

void THCharStorage_rawCopy(THCharStorage* storage, char* src);
void THCharStorage_copy(THCharStorage* storage, THCharStorage* src);
void THCharStorage_copyByte(THCharStorage* storage, struct THByteStorage* src);
void THCharStorage_copyChar(THCharStorage* storage, struct THCharStorage* src);
void THCharStorage_copyShort(THCharStorage* storage,
                             struct THShortStorage* src);
void THCharStorage_copyInt(THCharStorage* storage, struct THIntStorage* src);
void THCharStorage_copyLong(THCharStorage* storage, struct THLongStorage* src);
void THCharStorage_copyFloat(THCharStorage* storage,
                             struct THFloatStorage* src);
void THCharStorage_copyDouble(THCharStorage* storage,
                              struct THDoubleStorage* src);
void THCharStorage_copyHalf(THCharStorage* storage, struct THHalfStorage* src);

void THShortStorage_rawCopy(THShortStorage* storage, short* src);
void THShortStorage_copy(THShortStorage* storage, THShortStorage* src);
void THShortStorage_copyByte(THShortStorage* storage,
                             struct THByteStorage* src);
void THShortStorage_copyChar(THShortStorage* storage,
                             struct THCharStorage* src);
void THShortStorage_copyShort(THShortStorage* storage,
                              struct THShortStorage* src);
void THShortStorage_copyInt(THShortStorage* storage, struct THIntStorage* src);
void THShortStorage_copyLong(THShortStorage* storage,
                             struct THLongStorage* src);
void THShortStorage_copyFloat(THShortStorage* storage,
                              struct THFloatStorage* src);
void THShortStorage_copyDouble(THShortStorage* storage,
                               struct THDoubleStorage* src);
void THShortStorage_copyHalf(THShortStorage* storage,
                             struct THHalfStorage* src);

void THIntStorage_rawCopy(THIntStorage* storage, int* src);
void THIntStorage_copy(THIntStorage* storage, THIntStorage* src);
void THIntStorage_copyByte(THIntStorage* storage, struct THByteStorage* src);
void THIntStorage_copyChar(THIntStorage* storage, struct THCharStorage* src);
void THIntStorage_copyShort(THIntStorage* storage, struct THShortStorage* src);
void THIntStorage_copyInt(THIntStorage* storage, struct THIntStorage* src);
void THIntStorage_copyLong(THIntStorage* storage, struct THLongStorage* src);
void THIntStorage_copyFloat(THIntStorage* storage, struct THFloatStorage* src);
void THIntStorage_copyDouble(THIntStorage* storage,
                             struct THDoubleStorage* src);
void THIntStorage_copyHalf(THIntStorage* storage, struct THHalfStorage* src);

void THLongStorage_rawCopy(THLongStorage* storage, long* src);
void THLongStorage_copy(THLongStorage* storage, THLongStorage* src);
void THLongStorage_copyByte(THLongStorage* storage, struct THByteStorage* src);
void THLongStorage_copyChar(THLongStorage* storage, struct THCharStorage* src);
void THLongStorage_copyShort(THLongStorage* storage,
                             struct THShortStorage* src);
void THLongStorage_copyInt(THLongStorage* storage, struct THIntStorage* src);
void THLongStorage_copyLong(THLongStorage* storage, struct THLongStorage* src);
void THLongStorage_copyFloat(THLongStorage* storage,
                             struct THFloatStorage* src);
void THLongStorage_copyDouble(THLongStorage* storage,
                              struct THDoubleStorage* src);
void THLongStorage_copyHalf(THLongStorage* storage, struct THHalfStorage* src);

void THHalfStorage_rawCopy(THHalfStorage* storage, THHalf* src);
void THHalfStorage_copy(THHalfStorage* storage, THHalfStorage* src);
void THHalfStorage_copyByte(THHalfStorage* storage, struct THByteStorage* src);
void THHalfStorage_copyChar(THHalfStorage* storage, struct THCharStorage* src);
void THHalfStorage_copyShort(THHalfStorage* storage,
                             struct THShortStorage* src);
void THHalfStorage_copyInt(THHalfStorage* storage, struct THIntStorage* src);
void THHalfStorage_copyLong(THHalfStorage* storage, struct THLongStorage* src);
void THHalfStorage_copyFloat(THHalfStorage* storage,
                             struct THFloatStorage* src);
void THHalfStorage_copyDouble(THHalfStorage* storage,
                              struct THDoubleStorage* src);
void THHalfStorage_copyHalf(THHalfStorage* storage, struct THHalfStorage* src);

THDescBuff THLongStorage_sizeDesc(const THLongStorage* size);
THLongStorage* THLongStorage_newInferSize(THLongStorage* size,
                                          ptrdiff_t nElement);

int THLongStorage_inferSize2(THLongStorage* output, long* sizesA, long dimsA,
                             long* sizesB, long dimsB, char* error_buffer,
                             int buffer_len);
int THLongStorage_inferSizeN(THLongStorage* output, int n, long** sizes,
                             long* dims, char* error_buffer, int buffer_len);

int THLongStorage_inferExpandGeometry(long* tensorSizes, long* tensorStrides,
                                      long tensorDim, THLongStorage* sizes,
                                      long** expandedSizes,
                                      long** expandedStrides,
                                      char* error_buffer, int buffer_len);

float* THFloatStorage_data(const THFloatStorage* self) { return self->data; }

ptrdiff_t THFloatStorage_size(const THFloatStorage* self) { return self->size; }

size_t THFloatStorage_elementSize() { return sizeof(float); }

THFloatStorage* THFloatStorage_new(void) {
  return THFloatStorage_newWithSize(0);
}

THFloatStorage* THFloatStorage_newWithSize(ptrdiff_t size) {
  return THFloatStorage_newWithAllocator(size, &THDefaultAllocator, NULL);
}

THFloatStorage* THFloatStorage_newWithAllocator(ptrdiff_t size,
                                                THAllocator* allocator,
                                                void* allocatorContext) {
  THFloatStorage* storage = THAlloc(sizeof(THFloatStorage));
  storage->data = allocator->malloc(allocatorContext, sizeof(float) * size);
  storage->size = size;
  storage->refcount = 1;
  storage->flag = 1 | 2 | 4;
  storage->allocator = allocator;
  storage->allocatorContext = allocatorContext;
  return storage;
}

THFloatStorage* THFloatStorage_newWithMapping(const char* filename,
                                              ptrdiff_t size, int flags) {
  THMapAllocatorContext* ctx = THMapAllocatorContext_new(filename, flags);

  THFloatStorage* storage =
      THFloatStorage_newWithAllocator(size, &THMapAllocator, ctx);

  if (size <= 0)
    storage->size = THMapAllocatorContext_size(ctx) / sizeof(float);

  THFloatStorage_clearFlag(storage, 2);

  return storage;
}

THFloatStorage* THFloatStorage_newWithSize1(float data0) {
  THFloatStorage* self = THFloatStorage_newWithSize(1);
  self->data[0] = data0;
  return self;
}

THFloatStorage* THFloatStorage_newWithSize2(float data0, float data1) {
  THFloatStorage* self = THFloatStorage_newWithSize(2);
  self->data[0] = data0;
  self->data[1] = data1;
  return self;
}

THFloatStorage* THFloatStorage_newWithSize3(float data0, float data1,
                                            float data2) {
  THFloatStorage* self = THFloatStorage_newWithSize(3);
  self->data[0] = data0;
  self->data[1] = data1;
  self->data[2] = data2;
  return self;
}

THFloatStorage* THFloatStorage_newWithSize4(float data0, float data1,
                                            float data2, float data3) {
  THFloatStorage* self = THFloatStorage_newWithSize(4);
  self->data[0] = data0;
  self->data[1] = data1;
  self->data[2] = data2;
  self->data[3] = data3;
  return self;
}

void THFloatStorage_setFlag(THFloatStorage* storage, const char flag) {
  storage->flag |= flag;
}

void THFloatStorage_clearFlag(THFloatStorage* storage, const char flag) {
  storage->flag &= ~flag;
}

void THFloatStorage_retain(THFloatStorage* storage) {
  if (storage && (storage->flag & 1)) THAtomicIncrementRef(&storage->refcount);
}

void THFloatStorage_free(THFloatStorage* storage) {
  if (!storage) return;

  if ((storage->flag & 1) && (THAtomicGet(&storage->refcount) > 0)) {
    if (THAtomicDecrementRef(&storage->refcount)) {
      if (storage->flag & 4) {
        storage->allocator->free(storage->allocatorContext, storage->data);
      }
      if (storage->flag & 8) {
        THFloatStorage_free(storage->view);
      }
      THFree(storage);
    }
  }
}

THFloatStorage* THFloatStorage_newWithData(float* data, ptrdiff_t size) {
  return THFloatStorage_newWithDataAndAllocator(data, size, &THDefaultAllocator,
                                                NULL);
}

THFloatStorage* THFloatStorage_newWithDataAndAllocator(float* data,
                                                       ptrdiff_t size,
                                                       THAllocator* allocator,
                                                       void* allocatorContext) {
  THFloatStorage* storage = THAlloc(sizeof(THFloatStorage));
  storage->data = data;
  storage->size = size;
  storage->refcount = 1;
  storage->flag = 1 | 2 | 4;
  storage->allocator = allocator;
  storage->allocatorContext = allocatorContext;
  return storage;
}

void THFloatStorage_resize(THFloatStorage* storage, ptrdiff_t size) {
  if (storage->flag & 2) {
    if (storage->allocator->realloc == NULL) {
      float* old_data = storage->data;
      ptrdiff_t old_size = storage->size;
      if (size == 0) {
        storage->data = NULL;
      } else {
        storage->data = storage->allocator->malloc(storage->allocatorContext,
                                                   sizeof(float) * size);
      }
      storage->size = size;
      if (old_data != NULL) {
        ptrdiff_t copy_size = old_size;
        if (storage->size < copy_size) {
          copy_size = storage->size;
        }
        if (copy_size > 0) {
          memcpy(storage->data, old_data, sizeof(float) * copy_size);
        }
        storage->allocator->free(storage->allocatorContext, old_data);
      }
    } else {
      storage->data = storage->allocator->realloc(
          storage->allocatorContext, storage->data, sizeof(float) * size);
      storage->size = size;
    }
  } else {
    _THError("generic/THStorage.c", 183,
             "Trying to resize storage that is not resizable");
  }
}

void THFloatStorage_fill(THFloatStorage* storage, float value) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = value;
}

void THFloatStorage_set(THFloatStorage* self, ptrdiff_t idx, float value) {
  do {
    _THArgCheck("generic/THStorage.c", 196, (idx >= 0) && (idx < self->size), 2,
                "out of bounds");
  } while (0);
  self->data[idx] = value;
}

float THFloatStorage_get(const THFloatStorage* self, ptrdiff_t idx) {
  do {
    _THArgCheck("generic/THStorage.c", 202, (idx >= 0) && (idx < self->size), 2,
                "out of bounds");
  } while (0);
  return self->data[idx];
}

void THFloatStorage_swap(THFloatStorage* storage1, THFloatStorage* storage2) {
  float* data;
  ptrdiff_t size;
  char flag;
  THAllocator* allocator;
  void* allocatorContext;
  struct THFloatStorage* view;

  {
    data = storage1->data;
    storage1->data = storage2->data;
    storage2->data = data;
  };
  {
    size = storage1->size;
    storage1->size = storage2->size;
    storage2->size = size;
  };
  {
    flag = storage1->flag;
    storage1->flag = storage2->flag;
    storage2->flag = flag;
  };

  {
    allocator = storage1->allocator;
    storage1->allocator = storage2->allocator;
    storage2->allocator = allocator;
  };
  {
    allocatorContext = storage1->allocatorContext;
    storage1->allocatorContext = storage2->allocatorContext;
    storage2->allocatorContext = allocatorContext;
  };
  {
    view = storage1->view;
    storage1->view = storage2->view;
    storage2->view = view;
  };
}

double* THDoubleStorage_data(const THDoubleStorage* self) { return self->data; }

ptrdiff_t THDoubleStorage_size(const THDoubleStorage* self) {
  return self->size;
}

size_t THDoubleStorage_elementSize() { return sizeof(double); }

THDoubleStorage* THDoubleStorage_new(void) {
  return THDoubleStorage_newWithSize(0);
}

THDoubleStorage* THDoubleStorage_newWithSize(ptrdiff_t size) {
  return THDoubleStorage_newWithAllocator(size, &THDefaultAllocator, NULL);
}

THDoubleStorage* THDoubleStorage_newWithAllocator(ptrdiff_t size,
                                                  THAllocator* allocator,
                                                  void* allocatorContext) {
  THDoubleStorage* storage = THAlloc(sizeof(THDoubleStorage));
  storage->data = allocator->malloc(allocatorContext, sizeof(double) * size);
  storage->size = size;
  storage->refcount = 1;
  storage->flag = 1 | 2 | 4;
  storage->allocator = allocator;
  storage->allocatorContext = allocatorContext;
  return storage;
}

THDoubleStorage* THDoubleStorage_newWithMapping(const char* filename,
                                                ptrdiff_t size, int flags) {
  THMapAllocatorContext* ctx = THMapAllocatorContext_new(filename, flags);

  THDoubleStorage* storage =
      THDoubleStorage_newWithAllocator(size, &THMapAllocator, ctx);

  if (size <= 0)
    storage->size = THMapAllocatorContext_size(ctx) / sizeof(double);

  THDoubleStorage_clearFlag(storage, 2);

  return storage;
}

THDoubleStorage* THDoubleStorage_newWithSize1(double data0) {
  THDoubleStorage* self = THDoubleStorage_newWithSize(1);
  self->data[0] = data0;
  return self;
}

THDoubleStorage* THDoubleStorage_newWithSize2(double data0, double data1) {
  THDoubleStorage* self = THDoubleStorage_newWithSize(2);
  self->data[0] = data0;
  self->data[1] = data1;
  return self;
}

THDoubleStorage* THDoubleStorage_newWithSize3(double data0, double data1,
                                              double data2) {
  THDoubleStorage* self = THDoubleStorage_newWithSize(3);
  self->data[0] = data0;
  self->data[1] = data1;
  self->data[2] = data2;
  return self;
}

THDoubleStorage* THDoubleStorage_newWithSize4(double data0, double data1,
                                              double data2, double data3) {
  THDoubleStorage* self = THDoubleStorage_newWithSize(4);
  self->data[0] = data0;
  self->data[1] = data1;
  self->data[2] = data2;
  self->data[3] = data3;
  return self;
}

void THDoubleStorage_setFlag(THDoubleStorage* storage, const char flag) {
  storage->flag |= flag;
}

void THDoubleStorage_clearFlag(THDoubleStorage* storage, const char flag) {
  storage->flag &= ~flag;
}

void THDoubleStorage_retain(THDoubleStorage* storage) {
  if (storage && (storage->flag & 1)) THAtomicIncrementRef(&storage->refcount);
}

void THDoubleStorage_free(THDoubleStorage* storage) {
  if (!storage) return;

  if ((storage->flag & 1) && (THAtomicGet(&storage->refcount) > 0)) {
    if (THAtomicDecrementRef(&storage->refcount)) {
      if (storage->flag & 4) {
        storage->allocator->free(storage->allocatorContext, storage->data);
      }
      if (storage->flag & 8) {
        THDoubleStorage_free(storage->view);
      }
      THFree(storage);
    }
  }
}

THDoubleStorage* THDoubleStorage_newWithData(double* data, ptrdiff_t size) {
  return THDoubleStorage_newWithDataAndAllocator(data, size,
                                                 &THDefaultAllocator, NULL);
}

THDoubleStorage* THDoubleStorage_newWithDataAndAllocator(
    double* data, ptrdiff_t size, THAllocator* allocator,
    void* allocatorContext) {
  THDoubleStorage* storage = THAlloc(sizeof(THDoubleStorage));
  storage->data = data;
  storage->size = size;
  storage->refcount = 1;
  storage->flag = 1 | 2 | 4;
  storage->allocator = allocator;
  storage->allocatorContext = allocatorContext;
  return storage;
}

void THDoubleStorage_resize(THDoubleStorage* storage, ptrdiff_t size) {
  if (storage->flag & 2) {
    if (storage->allocator->realloc == NULL) {
      double* old_data = storage->data;
      ptrdiff_t old_size = storage->size;
      if (size == 0) {
        storage->data = NULL;
      } else {
        storage->data = storage->allocator->malloc(storage->allocatorContext,
                                                   sizeof(double) * size);
      }
      storage->size = size;
      if (old_data != NULL) {
        ptrdiff_t copy_size = old_size;
        if (storage->size < copy_size) {
          copy_size = storage->size;
        }
        if (copy_size > 0) {
          memcpy(storage->data, old_data, sizeof(double) * copy_size);
        }
        storage->allocator->free(storage->allocatorContext, old_data);
      }
    } else {
      storage->data = storage->allocator->realloc(
          storage->allocatorContext, storage->data, sizeof(double) * size);
      storage->size = size;
    }
  } else {
    _THError("generic/THStorage.c", 183,
             "Trying to resize storage that is not resizable");
  }
}

void THDoubleStorage_fill(THDoubleStorage* storage, double value) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = value;
}

void THDoubleStorage_set(THDoubleStorage* self, ptrdiff_t idx, double value) {
  do {
    _THArgCheck("generic/THStorage.c", 196, (idx >= 0) && (idx < self->size), 2,
                "out of bounds");
  } while (0);
  self->data[idx] = value;
}

double THDoubleStorage_get(const THDoubleStorage* self, ptrdiff_t idx) {
  do {
    _THArgCheck("generic/THStorage.c", 202, (idx >= 0) && (idx < self->size), 2,
                "out of bounds");
  } while (0);
  return self->data[idx];
}

void THDoubleStorage_swap(THDoubleStorage* storage1,
                          THDoubleStorage* storage2) {
  double* data;
  ptrdiff_t size;
  char flag;
  THAllocator* allocator;
  void* allocatorContext;
  struct THDoubleStorage* view;

  {
    data = storage1->data;
    storage1->data = storage2->data;
    storage2->data = data;
  };
  {
    size = storage1->size;
    storage1->size = storage2->size;
    storage2->size = size;
  };
  {
    flag = storage1->flag;
    storage1->flag = storage2->flag;
    storage2->flag = flag;
  };

  {
    allocator = storage1->allocator;
    storage1->allocator = storage2->allocator;
    storage2->allocator = allocator;
  };
  {
    allocatorContext = storage1->allocatorContext;
    storage1->allocatorContext = storage2->allocatorContext;
    storage2->allocatorContext = allocatorContext;
  };
  {
    view = storage1->view;
    storage1->view = storage2->view;
    storage2->view = view;
  };
}

unsigned char* THByteStorage_data(const THByteStorage* self) {
  return self->data;
}

ptrdiff_t THByteStorage_size(const THByteStorage* self) { return self->size; }

size_t THByteStorage_elementSize() { return sizeof(unsigned char); }

THByteStorage* THByteStorage_new(void) { return THByteStorage_newWithSize(0); }

THByteStorage* THByteStorage_newWithSize(ptrdiff_t size) {
  return THByteStorage_newWithAllocator(size, &THDefaultAllocator, NULL);
}

THByteStorage* THByteStorage_newWithAllocator(ptrdiff_t size,
                                              THAllocator* allocator,
                                              void* allocatorContext) {
  THByteStorage* storage = THAlloc(sizeof(THByteStorage));
  storage->data =
      allocator->malloc(allocatorContext, sizeof(unsigned char) * size);
  storage->size = size;
  storage->refcount = 1;
  storage->flag = 1 | 2 | 4;
  storage->allocator = allocator;
  storage->allocatorContext = allocatorContext;
  return storage;
}

THByteStorage* THByteStorage_newWithMapping(const char* filename,
                                            ptrdiff_t size, int flags) {
  THMapAllocatorContext* ctx = THMapAllocatorContext_new(filename, flags);

  THByteStorage* storage =
      THByteStorage_newWithAllocator(size, &THMapAllocator, ctx);

  if (size <= 0)
    storage->size = THMapAllocatorContext_size(ctx) / sizeof(unsigned char);

  THByteStorage_clearFlag(storage, 2);

  return storage;
}

THByteStorage* THByteStorage_newWithSize1(unsigned char data0) {
  THByteStorage* self = THByteStorage_newWithSize(1);
  self->data[0] = data0;
  return self;
}

THByteStorage* THByteStorage_newWithSize2(unsigned char data0,
                                          unsigned char data1) {
  THByteStorage* self = THByteStorage_newWithSize(2);
  self->data[0] = data0;
  self->data[1] = data1;
  return self;
}

THByteStorage* THByteStorage_newWithSize3(unsigned char data0,
                                          unsigned char data1,
                                          unsigned char data2) {
  THByteStorage* self = THByteStorage_newWithSize(3);
  self->data[0] = data0;
  self->data[1] = data1;
  self->data[2] = data2;
  return self;
}

THByteStorage* THByteStorage_newWithSize4(unsigned char data0,
                                          unsigned char data1,
                                          unsigned char data2,
                                          unsigned char data3) {
  THByteStorage* self = THByteStorage_newWithSize(4);
  self->data[0] = data0;
  self->data[1] = data1;
  self->data[2] = data2;
  self->data[3] = data3;
  return self;
}

void THByteStorage_setFlag(THByteStorage* storage, const char flag) {
  storage->flag |= flag;
}

void THByteStorage_clearFlag(THByteStorage* storage, const char flag) {
  storage->flag &= ~flag;
}

void THByteStorage_retain(THByteStorage* storage) {
  if (storage && (storage->flag & 1)) THAtomicIncrementRef(&storage->refcount);
}

void THByteStorage_free(THByteStorage* storage) {
  if (!storage) return;

  if ((storage->flag & 1) && (THAtomicGet(&storage->refcount) > 0)) {
    if (THAtomicDecrementRef(&storage->refcount)) {
      if (storage->flag & 4) {
        storage->allocator->free(storage->allocatorContext, storage->data);
      }
      if (storage->flag & 8) {
        THByteStorage_free(storage->view);
      }
      THFree(storage);
    }
  }
}

THByteStorage* THByteStorage_newWithData(unsigned char* data, ptrdiff_t size) {
  return THByteStorage_newWithDataAndAllocator(data, size, &THDefaultAllocator,
                                               NULL);
}

THByteStorage* THByteStorage_newWithDataAndAllocator(unsigned char* data,
                                                     ptrdiff_t size,
                                                     THAllocator* allocator,
                                                     void* allocatorContext) {
  THByteStorage* storage = THAlloc(sizeof(THByteStorage));
  storage->data = data;
  storage->size = size;
  storage->refcount = 1;
  storage->flag = 1 | 2 | 4;
  storage->allocator = allocator;
  storage->allocatorContext = allocatorContext;
  return storage;
}

void THByteStorage_resize(THByteStorage* storage, ptrdiff_t size) {
  if (storage->flag & 2) {
    if (storage->allocator->realloc == NULL) {
      unsigned char* old_data = storage->data;
      ptrdiff_t old_size = storage->size;
      if (size == 0) {
        storage->data = NULL;
      } else {
        storage->data = storage->allocator->malloc(
            storage->allocatorContext, sizeof(unsigned char) * size);
      }
      storage->size = size;
      if (old_data != NULL) {
        ptrdiff_t copy_size = old_size;
        if (storage->size < copy_size) {
          copy_size = storage->size;
        }
        if (copy_size > 0) {
          memcpy(storage->data, old_data, sizeof(unsigned char) * copy_size);
        }
        storage->allocator->free(storage->allocatorContext, old_data);
      }
    } else {
      storage->data =
          storage->allocator->realloc(storage->allocatorContext, storage->data,
                                      sizeof(unsigned char) * size);
      storage->size = size;
    }
  } else {
    _THError("generic/THStorage.c", 183,
             "Trying to resize storage that is not resizable");
  }
}

void THByteStorage_fill(THByteStorage* storage, unsigned char value) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = value;
}

void THByteStorage_set(THByteStorage* self, ptrdiff_t idx,
                       unsigned char value) {
  do {
    _THArgCheck("generic/THStorage.c", 196, (idx >= 0) && (idx < self->size), 2,
                "out of bounds");
  } while (0);
  self->data[idx] = value;
}

unsigned char THByteStorage_get(const THByteStorage* self, ptrdiff_t idx) {
  do {
    _THArgCheck("generic/THStorage.c", 202, (idx >= 0) && (idx < self->size), 2,
                "out of bounds");
  } while (0);
  return self->data[idx];
}

void THByteStorage_swap(THByteStorage* storage1, THByteStorage* storage2) {
  unsigned char* data;
  ptrdiff_t size;
  char flag;
  THAllocator* allocator;
  void* allocatorContext;
  struct THByteStorage* view;

  {
    data = storage1->data;
    storage1->data = storage2->data;
    storage2->data = data;
  };
  {
    size = storage1->size;
    storage1->size = storage2->size;
    storage2->size = size;
  };
  {
    flag = storage1->flag;
    storage1->flag = storage2->flag;
    storage2->flag = flag;
  };

  {
    allocator = storage1->allocator;
    storage1->allocator = storage2->allocator;
    storage2->allocator = allocator;
  };
  {
    allocatorContext = storage1->allocatorContext;
    storage1->allocatorContext = storage2->allocatorContext;
    storage2->allocatorContext = allocatorContext;
  };
  {
    view = storage1->view;
    storage1->view = storage2->view;
    storage2->view = view;
  };
}

char* THCharStorage_data(const THCharStorage* self) { return self->data; }

ptrdiff_t THCharStorage_size(const THCharStorage* self) { return self->size; }

size_t THCharStorage_elementSize() { return sizeof(char); }

THCharStorage* THCharStorage_new(void) { return THCharStorage_newWithSize(0); }

THCharStorage* THCharStorage_newWithSize(ptrdiff_t size) {
  return THCharStorage_newWithAllocator(size, &THDefaultAllocator, NULL);
}

THCharStorage* THCharStorage_newWithAllocator(ptrdiff_t size,
                                              THAllocator* allocator,
                                              void* allocatorContext) {
  THCharStorage* storage = THAlloc(sizeof(THCharStorage));
  storage->data = allocator->malloc(allocatorContext, sizeof(char) * size);
  storage->size = size;
  storage->refcount = 1;
  storage->flag = 1 | 2 | 4;
  storage->allocator = allocator;
  storage->allocatorContext = allocatorContext;
  return storage;
}

THCharStorage* THCharStorage_newWithMapping(const char* filename,
                                            ptrdiff_t size, int flags) {
  THMapAllocatorContext* ctx = THMapAllocatorContext_new(filename, flags);

  THCharStorage* storage =
      THCharStorage_newWithAllocator(size, &THMapAllocator, ctx);

  if (size <= 0) storage->size = THMapAllocatorContext_size(ctx) / sizeof(char);

  THCharStorage_clearFlag(storage, 2);

  return storage;
}

THCharStorage* THCharStorage_newWithSize1(char data0) {
  THCharStorage* self = THCharStorage_newWithSize(1);
  self->data[0] = data0;
  return self;
}

THCharStorage* THCharStorage_newWithSize2(char data0, char data1) {
  THCharStorage* self = THCharStorage_newWithSize(2);
  self->data[0] = data0;
  self->data[1] = data1;
  return self;
}

THCharStorage* THCharStorage_newWithSize3(char data0, char data1, char data2) {
  THCharStorage* self = THCharStorage_newWithSize(3);
  self->data[0] = data0;
  self->data[1] = data1;
  self->data[2] = data2;
  return self;
}

THCharStorage* THCharStorage_newWithSize4(char data0, char data1, char data2,
                                          char data3) {
  THCharStorage* self = THCharStorage_newWithSize(4);
  self->data[0] = data0;
  self->data[1] = data1;
  self->data[2] = data2;
  self->data[3] = data3;
  return self;
}

void THCharStorage_setFlag(THCharStorage* storage, const char flag) {
  storage->flag |= flag;
}

void THCharStorage_clearFlag(THCharStorage* storage, const char flag) {
  storage->flag &= ~flag;
}

void THCharStorage_retain(THCharStorage* storage) {
  if (storage && (storage->flag & 1)) THAtomicIncrementRef(&storage->refcount);
}

void THCharStorage_free(THCharStorage* storage) {
  if (!storage) return;

  if ((storage->flag & 1) && (THAtomicGet(&storage->refcount) > 0)) {
    if (THAtomicDecrementRef(&storage->refcount)) {
      if (storage->flag & 4) {
        storage->allocator->free(storage->allocatorContext, storage->data);
      }
      if (storage->flag & 8) {
        THCharStorage_free(storage->view);
      }
      THFree(storage);
    }
  }
}

THCharStorage* THCharStorage_newWithData(char* data, ptrdiff_t size) {
  return THCharStorage_newWithDataAndAllocator(data, size, &THDefaultAllocator,
                                               NULL);
}

THCharStorage* THCharStorage_newWithDataAndAllocator(char* data, ptrdiff_t size,
                                                     THAllocator* allocator,
                                                     void* allocatorContext) {
  THCharStorage* storage = THAlloc(sizeof(THCharStorage));
  storage->data = data;
  storage->size = size;
  storage->refcount = 1;
  storage->flag = 1 | 2 | 4;
  storage->allocator = allocator;
  storage->allocatorContext = allocatorContext;
  return storage;
}

void THCharStorage_resize(THCharStorage* storage, ptrdiff_t size) {
  if (storage->flag & 2) {
    if (storage->allocator->realloc == NULL) {
      char* old_data = storage->data;
      ptrdiff_t old_size = storage->size;
      if (size == 0) {
        storage->data = NULL;
      } else {
        storage->data = storage->allocator->malloc(storage->allocatorContext,
                                                   sizeof(char) * size);
      }
      storage->size = size;
      if (old_data != NULL) {
        ptrdiff_t copy_size = old_size;
        if (storage->size < copy_size) {
          copy_size = storage->size;
        }
        if (copy_size > 0) {
          memcpy(storage->data, old_data, sizeof(char) * copy_size);
        }
        storage->allocator->free(storage->allocatorContext, old_data);
      }
    } else {
      storage->data = storage->allocator->realloc(
          storage->allocatorContext, storage->data, sizeof(char) * size);
      storage->size = size;
    }
  } else {
    _THError("generic/THStorage.c", 183,
             "Trying to resize storage that is not resizable");
  }
}

void THCharStorage_fill(THCharStorage* storage, char value) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = value;
}

void THCharStorage_set(THCharStorage* self, ptrdiff_t idx, char value) {
  do {
    _THArgCheck("generic/THStorage.c", 196, (idx >= 0) && (idx < self->size), 2,
                "out of bounds");
  } while (0);
  self->data[idx] = value;
}

char THCharStorage_get(const THCharStorage* self, ptrdiff_t idx) {
  do {
    _THArgCheck("generic/THStorage.c", 202, (idx >= 0) && (idx < self->size), 2,
                "out of bounds");
  } while (0);
  return self->data[idx];
}

void THCharStorage_swap(THCharStorage* storage1, THCharStorage* storage2) {
  char* data;
  ptrdiff_t size;
  char flag;
  THAllocator* allocator;
  void* allocatorContext;
  struct THCharStorage* view;

  {
    data = storage1->data;
    storage1->data = storage2->data;
    storage2->data = data;
  };
  {
    size = storage1->size;
    storage1->size = storage2->size;
    storage2->size = size;
  };
  {
    flag = storage1->flag;
    storage1->flag = storage2->flag;
    storage2->flag = flag;
  };

  {
    allocator = storage1->allocator;
    storage1->allocator = storage2->allocator;
    storage2->allocator = allocator;
  };
  {
    allocatorContext = storage1->allocatorContext;
    storage1->allocatorContext = storage2->allocatorContext;
    storage2->allocatorContext = allocatorContext;
  };
  {
    view = storage1->view;
    storage1->view = storage2->view;
    storage2->view = view;
  };
}

short* THShortStorage_data(const THShortStorage* self) { return self->data; }

ptrdiff_t THShortStorage_size(const THShortStorage* self) { return self->size; }

size_t THShortStorage_elementSize() { return sizeof(short); }

THShortStorage* THShortStorage_new(void) {
  return THShortStorage_newWithSize(0);
}

THShortStorage* THShortStorage_newWithSize(ptrdiff_t size) {
  return THShortStorage_newWithAllocator(size, &THDefaultAllocator, NULL);
}

THShortStorage* THShortStorage_newWithAllocator(ptrdiff_t size,
                                                THAllocator* allocator,
                                                void* allocatorContext) {
  THShortStorage* storage = THAlloc(sizeof(THShortStorage));
  storage->data = allocator->malloc(allocatorContext, sizeof(short) * size);
  storage->size = size;
  storage->refcount = 1;
  storage->flag = 1 | 2 | 4;
  storage->allocator = allocator;
  storage->allocatorContext = allocatorContext;
  return storage;
}

THShortStorage* THShortStorage_newWithMapping(const char* filename,
                                              ptrdiff_t size, int flags) {
  THMapAllocatorContext* ctx = THMapAllocatorContext_new(filename, flags);

  THShortStorage* storage =
      THShortStorage_newWithAllocator(size, &THMapAllocator, ctx);

  if (size <= 0)
    storage->size = THMapAllocatorContext_size(ctx) / sizeof(short);

  THShortStorage_clearFlag(storage, 2);

  return storage;
}

THShortStorage* THShortStorage_newWithSize1(short data0) {
  THShortStorage* self = THShortStorage_newWithSize(1);
  self->data[0] = data0;
  return self;
}

THShortStorage* THShortStorage_newWithSize2(short data0, short data1) {
  THShortStorage* self = THShortStorage_newWithSize(2);
  self->data[0] = data0;
  self->data[1] = data1;
  return self;
}

THShortStorage* THShortStorage_newWithSize3(short data0, short data1,
                                            short data2) {
  THShortStorage* self = THShortStorage_newWithSize(3);
  self->data[0] = data0;
  self->data[1] = data1;
  self->data[2] = data2;
  return self;
}

THShortStorage* THShortStorage_newWithSize4(short data0, short data1,
                                            short data2, short data3) {
  THShortStorage* self = THShortStorage_newWithSize(4);
  self->data[0] = data0;
  self->data[1] = data1;
  self->data[2] = data2;
  self->data[3] = data3;
  return self;
}

void THShortStorage_setFlag(THShortStorage* storage, const char flag) {
  storage->flag |= flag;
}

void THShortStorage_clearFlag(THShortStorage* storage, const char flag) {
  storage->flag &= ~flag;
}

void THShortStorage_retain(THShortStorage* storage) {
  if (storage && (storage->flag & 1)) THAtomicIncrementRef(&storage->refcount);
}

void THShortStorage_free(THShortStorage* storage) {
  if (!storage) return;

  if ((storage->flag & 1) && (THAtomicGet(&storage->refcount) > 0)) {
    if (THAtomicDecrementRef(&storage->refcount)) {
      if (storage->flag & 4) {
        storage->allocator->free(storage->allocatorContext, storage->data);
      }
      if (storage->flag & 8) {
        THShortStorage_free(storage->view);
      }
      THFree(storage);
    }
  }
}

THShortStorage* THShortStorage_newWithData(short* data, ptrdiff_t size) {
  return THShortStorage_newWithDataAndAllocator(data, size, &THDefaultAllocator,
                                                NULL);
}

THShortStorage* THShortStorage_newWithDataAndAllocator(short* data,
                                                       ptrdiff_t size,
                                                       THAllocator* allocator,
                                                       void* allocatorContext) {
  THShortStorage* storage = THAlloc(sizeof(THShortStorage));
  storage->data = data;
  storage->size = size;
  storage->refcount = 1;
  storage->flag = 1 | 2 | 4;
  storage->allocator = allocator;
  storage->allocatorContext = allocatorContext;
  return storage;
}

void THShortStorage_resize(THShortStorage* storage, ptrdiff_t size) {
  if (storage->flag & 2) {
    if (storage->allocator->realloc == NULL) {
      short* old_data = storage->data;
      ptrdiff_t old_size = storage->size;
      if (size == 0) {
        storage->data = NULL;
      } else {
        storage->data = storage->allocator->malloc(storage->allocatorContext,
                                                   sizeof(short) * size);
      }
      storage->size = size;
      if (old_data != NULL) {
        ptrdiff_t copy_size = old_size;
        if (storage->size < copy_size) {
          copy_size = storage->size;
        }
        if (copy_size > 0) {
          memcpy(storage->data, old_data, sizeof(short) * copy_size);
        }
        storage->allocator->free(storage->allocatorContext, old_data);
      }
    } else {
      storage->data = storage->allocator->realloc(
          storage->allocatorContext, storage->data, sizeof(short) * size);
      storage->size = size;
    }
  } else {
    _THError("generic/THStorage.c", 183,
             "Trying to resize storage that is not resizable");
  }
}

void THShortStorage_fill(THShortStorage* storage, short value) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = value;
}

void THShortStorage_set(THShortStorage* self, ptrdiff_t idx, short value) {
  do {
    _THArgCheck("generic/THStorage.c", 196, (idx >= 0) && (idx < self->size), 2,
                "out of bounds");
  } while (0);
  self->data[idx] = value;
}

short THShortStorage_get(const THShortStorage* self, ptrdiff_t idx) {
  do {
    _THArgCheck("generic/THStorage.c", 202, (idx >= 0) && (idx < self->size), 2,
                "out of bounds");
  } while (0);
  return self->data[idx];
}

void THShortStorage_swap(THShortStorage* storage1, THShortStorage* storage2) {
  short* data;
  ptrdiff_t size;
  char flag;
  THAllocator* allocator;
  void* allocatorContext;
  struct THShortStorage* view;

  {
    data = storage1->data;
    storage1->data = storage2->data;
    storage2->data = data;
  };
  {
    size = storage1->size;
    storage1->size = storage2->size;
    storage2->size = size;
  };
  {
    flag = storage1->flag;
    storage1->flag = storage2->flag;
    storage2->flag = flag;
  };

  {
    allocator = storage1->allocator;
    storage1->allocator = storage2->allocator;
    storage2->allocator = allocator;
  };
  {
    allocatorContext = storage1->allocatorContext;
    storage1->allocatorContext = storage2->allocatorContext;
    storage2->allocatorContext = allocatorContext;
  };
  {
    view = storage1->view;
    storage1->view = storage2->view;
    storage2->view = view;
  };
}

int* THIntStorage_data(const THIntStorage* self) { return self->data; }

ptrdiff_t THIntStorage_size(const THIntStorage* self) { return self->size; }

size_t THIntStorage_elementSize() { return sizeof(int); }

THIntStorage* THIntStorage_new(void) { return THIntStorage_newWithSize(0); }

THIntStorage* THIntStorage_newWithSize(ptrdiff_t size) {
  return THIntStorage_newWithAllocator(size, &THDefaultAllocator, NULL);
}

THIntStorage* THIntStorage_newWithAllocator(ptrdiff_t size,
                                            THAllocator* allocator,
                                            void* allocatorContext) {
  THIntStorage* storage = THAlloc(sizeof(THIntStorage));
  storage->data = allocator->malloc(allocatorContext, sizeof(int) * size);
  storage->size = size;
  storage->refcount = 1;
  storage->flag = 1 | 2 | 4;
  storage->allocator = allocator;
  storage->allocatorContext = allocatorContext;
  return storage;
}

THIntStorage* THIntStorage_newWithMapping(const char* filename, ptrdiff_t size,
                                          int flags) {
  THMapAllocatorContext* ctx = THMapAllocatorContext_new(filename, flags);

  THIntStorage* storage =
      THIntStorage_newWithAllocator(size, &THMapAllocator, ctx);

  if (size <= 0) storage->size = THMapAllocatorContext_size(ctx) / sizeof(int);

  THIntStorage_clearFlag(storage, 2);

  return storage;
}

THIntStorage* THIntStorage_newWithSize1(int data0) {
  THIntStorage* self = THIntStorage_newWithSize(1);
  self->data[0] = data0;
  return self;
}

THIntStorage* THIntStorage_newWithSize2(int data0, int data1) {
  THIntStorage* self = THIntStorage_newWithSize(2);
  self->data[0] = data0;
  self->data[1] = data1;
  return self;
}

THIntStorage* THIntStorage_newWithSize3(int data0, int data1, int data2) {
  THIntStorage* self = THIntStorage_newWithSize(3);
  self->data[0] = data0;
  self->data[1] = data1;
  self->data[2] = data2;
  return self;
}

THIntStorage* THIntStorage_newWithSize4(int data0, int data1, int data2,
                                        int data3) {
  THIntStorage* self = THIntStorage_newWithSize(4);
  self->data[0] = data0;
  self->data[1] = data1;
  self->data[2] = data2;
  self->data[3] = data3;
  return self;
}

void THIntStorage_setFlag(THIntStorage* storage, const char flag) {
  storage->flag |= flag;
}

void THIntStorage_clearFlag(THIntStorage* storage, const char flag) {
  storage->flag &= ~flag;
}

void THIntStorage_retain(THIntStorage* storage) {
  if (storage && (storage->flag & 1)) THAtomicIncrementRef(&storage->refcount);
}

void THIntStorage_free(THIntStorage* storage) {
  if (!storage) return;

  if ((storage->flag & 1) && (THAtomicGet(&storage->refcount) > 0)) {
    if (THAtomicDecrementRef(&storage->refcount)) {
      if (storage->flag & 4) {
        storage->allocator->free(storage->allocatorContext, storage->data);
      }
      if (storage->flag & 8) {
        THIntStorage_free(storage->view);
      }
      THFree(storage);
    }
  }
}

THIntStorage* THIntStorage_newWithData(int* data, ptrdiff_t size) {
  return THIntStorage_newWithDataAndAllocator(data, size, &THDefaultAllocator,
                                              NULL);
}

THIntStorage* THIntStorage_newWithDataAndAllocator(int* data, ptrdiff_t size,
                                                   THAllocator* allocator,
                                                   void* allocatorContext) {
  THIntStorage* storage = THAlloc(sizeof(THIntStorage));
  storage->data = data;
  storage->size = size;
  storage->refcount = 1;
  storage->flag = 1 | 2 | 4;
  storage->allocator = allocator;
  storage->allocatorContext = allocatorContext;
  return storage;
}

void THIntStorage_resize(THIntStorage* storage, ptrdiff_t size) {
  if (storage->flag & 2) {
    if (storage->allocator->realloc == NULL) {
      int* old_data = storage->data;
      ptrdiff_t old_size = storage->size;
      if (size == 0) {
        storage->data = NULL;
      } else {
        storage->data = storage->allocator->malloc(storage->allocatorContext,
                                                   sizeof(int) * size);
      }
      storage->size = size;
      if (old_data != NULL) {
        ptrdiff_t copy_size = old_size;
        if (storage->size < copy_size) {
          copy_size = storage->size;
        }
        if (copy_size > 0) {
          memcpy(storage->data, old_data, sizeof(int) * copy_size);
        }
        storage->allocator->free(storage->allocatorContext, old_data);
      }
    } else {
      storage->data = storage->allocator->realloc(
          storage->allocatorContext, storage->data, sizeof(int) * size);
      storage->size = size;
    }
  } else {
    _THError("generic/THStorage.c", 183,
             "Trying to resize storage that is not resizable");
  }
}

void THIntStorage_fill(THIntStorage* storage, int value) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = value;
}

void THIntStorage_set(THIntStorage* self, ptrdiff_t idx, int value) {
  do {
    _THArgCheck("generic/THStorage.c", 196, (idx >= 0) && (idx < self->size), 2,
                "out of bounds");
  } while (0);
  self->data[idx] = value;
}

int THIntStorage_get(const THIntStorage* self, ptrdiff_t idx) {
  do {
    _THArgCheck("generic/THStorage.c", 202, (idx >= 0) && (idx < self->size), 2,
                "out of bounds");
  } while (0);
  return self->data[idx];
}

void THIntStorage_swap(THIntStorage* storage1, THIntStorage* storage2) {
  int* data;
  ptrdiff_t size;
  char flag;
  THAllocator* allocator;
  void* allocatorContext;
  struct THIntStorage* view;

  {
    data = storage1->data;
    storage1->data = storage2->data;
    storage2->data = data;
  };
  {
    size = storage1->size;
    storage1->size = storage2->size;
    storage2->size = size;
  };
  {
    flag = storage1->flag;
    storage1->flag = storage2->flag;
    storage2->flag = flag;
  };

  {
    allocator = storage1->allocator;
    storage1->allocator = storage2->allocator;
    storage2->allocator = allocator;
  };
  {
    allocatorContext = storage1->allocatorContext;
    storage1->allocatorContext = storage2->allocatorContext;
    storage2->allocatorContext = allocatorContext;
  };
  {
    view = storage1->view;
    storage1->view = storage2->view;
    storage2->view = view;
  };
}

long* THLongStorage_data(const THLongStorage* self) { return self->data; }

ptrdiff_t THLongStorage_size(const THLongStorage* self) { return self->size; }

size_t THLongStorage_elementSize() { return sizeof(long); }

THLongStorage* THLongStorage_new(void) { return THLongStorage_newWithSize(0); }

THLongStorage* THLongStorage_newWithSize(ptrdiff_t size) {
  return THLongStorage_newWithAllocator(size, &THDefaultAllocator, NULL);
}

THLongStorage* THLongStorage_newWithAllocator(ptrdiff_t size,
                                              THAllocator* allocator,
                                              void* allocatorContext) {
  THLongStorage* storage = THAlloc(sizeof(THLongStorage));
  storage->data = allocator->malloc(allocatorContext, sizeof(long) * size);
  storage->size = size;
  storage->refcount = 1;
  storage->flag = 1 | 2 | 4;
  storage->allocator = allocator;
  storage->allocatorContext = allocatorContext;
  return storage;
}

THLongStorage* THLongStorage_newWithMapping(const char* filename,
                                            ptrdiff_t size, int flags) {
  THMapAllocatorContext* ctx = THMapAllocatorContext_new(filename, flags);

  THLongStorage* storage =
      THLongStorage_newWithAllocator(size, &THMapAllocator, ctx);

  if (size <= 0) storage->size = THMapAllocatorContext_size(ctx) / sizeof(long);

  THLongStorage_clearFlag(storage, 2);

  return storage;
}

THLongStorage* THLongStorage_newWithSize1(long data0) {
  THLongStorage* self = THLongStorage_newWithSize(1);
  self->data[0] = data0;
  return self;
}

THLongStorage* THLongStorage_newWithSize2(long data0, long data1) {
  THLongStorage* self = THLongStorage_newWithSize(2);
  self->data[0] = data0;
  self->data[1] = data1;
  return self;
}

THLongStorage* THLongStorage_newWithSize3(long data0, long data1, long data2) {
  THLongStorage* self = THLongStorage_newWithSize(3);
  self->data[0] = data0;
  self->data[1] = data1;
  self->data[2] = data2;
  return self;
}

THLongStorage* THLongStorage_newWithSize4(long data0, long data1, long data2,
                                          long data3) {
  THLongStorage* self = THLongStorage_newWithSize(4);
  self->data[0] = data0;
  self->data[1] = data1;
  self->data[2] = data2;
  self->data[3] = data3;
  return self;
}

void THLongStorage_setFlag(THLongStorage* storage, const char flag) {
  storage->flag |= flag;
}

void THLongStorage_clearFlag(THLongStorage* storage, const char flag) {
  storage->flag &= ~flag;
}

void THLongStorage_retain(THLongStorage* storage) {
  if (storage && (storage->flag & 1)) THAtomicIncrementRef(&storage->refcount);
}

void THLongStorage_free(THLongStorage* storage) {
  if (!storage) return;

  if ((storage->flag & 1) && (THAtomicGet(&storage->refcount) > 0)) {
    if (THAtomicDecrementRef(&storage->refcount)) {
      if (storage->flag & 4) {
        storage->allocator->free(storage->allocatorContext, storage->data);
      }
      if (storage->flag & 8) {
        THLongStorage_free(storage->view);
      }
      THFree(storage);
    }
  }
}

THLongStorage* THLongStorage_newWithData(long* data, ptrdiff_t size) {
  return THLongStorage_newWithDataAndAllocator(data, size, &THDefaultAllocator,
                                               NULL);
}

THLongStorage* THLongStorage_newWithDataAndAllocator(long* data, ptrdiff_t size,
                                                     THAllocator* allocator,
                                                     void* allocatorContext) {
  THLongStorage* storage = THAlloc(sizeof(THLongStorage));
  storage->data = data;
  storage->size = size;
  storage->refcount = 1;
  storage->flag = 1 | 2 | 4;
  storage->allocator = allocator;
  storage->allocatorContext = allocatorContext;
  return storage;
}

void THLongStorage_resize(THLongStorage* storage, ptrdiff_t size) {
  if (storage->flag & 2) {
    if (storage->allocator->realloc == NULL) {
      long* old_data = storage->data;
      ptrdiff_t old_size = storage->size;
      if (size == 0) {
        storage->data = NULL;
      } else {
        storage->data = storage->allocator->malloc(storage->allocatorContext,
                                                   sizeof(long) * size);
      }
      storage->size = size;
      if (old_data != NULL) {
        ptrdiff_t copy_size = old_size;
        if (storage->size < copy_size) {
          copy_size = storage->size;
        }
        if (copy_size > 0) {
          memcpy(storage->data, old_data, sizeof(long) * copy_size);
        }
        storage->allocator->free(storage->allocatorContext, old_data);
      }
    } else {
      storage->data = storage->allocator->realloc(
          storage->allocatorContext, storage->data, sizeof(long) * size);
      storage->size = size;
    }
  } else {
    _THError("generic/THStorage.c", 183,
             "Trying to resize storage that is not resizable");
  }
}

void THLongStorage_fill(THLongStorage* storage, long value) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = value;
}

void THLongStorage_set(THLongStorage* self, ptrdiff_t idx, long value) {
  do {
    _THArgCheck("generic/THStorage.c", 196, (idx >= 0) && (idx < self->size), 2,
                "out of bounds");
  } while (0);
  self->data[idx] = value;
}

long THLongStorage_get(const THLongStorage* self, ptrdiff_t idx) {
  do {
    _THArgCheck("generic/THStorage.c", 202, (idx >= 0) && (idx < self->size), 2,
                "out of bounds");
  } while (0);
  return self->data[idx];
}

void THLongStorage_swap(THLongStorage* storage1, THLongStorage* storage2) {
  long* data;
  ptrdiff_t size;
  char flag;
  THAllocator* allocator;
  void* allocatorContext;
  struct THLongStorage* view;

  {
    data = storage1->data;
    storage1->data = storage2->data;
    storage2->data = data;
  };
  {
    size = storage1->size;
    storage1->size = storage2->size;
    storage2->size = size;
  };
  {
    flag = storage1->flag;
    storage1->flag = storage2->flag;
    storage2->flag = flag;
  };

  {
    allocator = storage1->allocator;
    storage1->allocator = storage2->allocator;
    storage2->allocator = allocator;
  };
  {
    allocatorContext = storage1->allocatorContext;
    storage1->allocatorContext = storage2->allocatorContext;
    storage2->allocatorContext = allocatorContext;
  };
  {
    view = storage1->view;
    storage1->view = storage2->view;
    storage2->view = view;
  };
}

THHalf* THHalfStorage_data(const THHalfStorage* self) { return self->data; }

ptrdiff_t THHalfStorage_size(const THHalfStorage* self) { return self->size; }

size_t THHalfStorage_elementSize() { return sizeof(THHalf); }

THHalfStorage* THHalfStorage_new(void) { return THHalfStorage_newWithSize(0); }

THHalfStorage* THHalfStorage_newWithSize(ptrdiff_t size) {
  return THHalfStorage_newWithAllocator(size, &THDefaultAllocator, NULL);
}

THHalfStorage* THHalfStorage_newWithAllocator(ptrdiff_t size,
                                              THAllocator* allocator,
                                              void* allocatorContext) {
  THHalfStorage* storage = THAlloc(sizeof(THHalfStorage));
  storage->data = allocator->malloc(allocatorContext, sizeof(THHalf) * size);
  storage->size = size;
  storage->refcount = 1;
  storage->flag = 1 | 2 | 4;
  storage->allocator = allocator;
  storage->allocatorContext = allocatorContext;
  return storage;
}

THHalfStorage* THHalfStorage_newWithMapping(const char* filename,
                                            ptrdiff_t size, int flags) {
  THMapAllocatorContext* ctx = THMapAllocatorContext_new(filename, flags);

  THHalfStorage* storage =
      THHalfStorage_newWithAllocator(size, &THMapAllocator, ctx);

  if (size <= 0)
    storage->size = THMapAllocatorContext_size(ctx) / sizeof(THHalf);

  THHalfStorage_clearFlag(storage, 2);

  return storage;
}

THHalfStorage* THHalfStorage_newWithSize1(THHalf data0) {
  THHalfStorage* self = THHalfStorage_newWithSize(1);
  self->data[0] = data0;
  return self;
}

THHalfStorage* THHalfStorage_newWithSize2(THHalf data0, THHalf data1) {
  THHalfStorage* self = THHalfStorage_newWithSize(2);
  self->data[0] = data0;
  self->data[1] = data1;
  return self;
}

THHalfStorage* THHalfStorage_newWithSize3(THHalf data0, THHalf data1,
                                          THHalf data2) {
  THHalfStorage* self = THHalfStorage_newWithSize(3);
  self->data[0] = data0;
  self->data[1] = data1;
  self->data[2] = data2;
  return self;
}

THHalfStorage* THHalfStorage_newWithSize4(THHalf data0, THHalf data1,
                                          THHalf data2, THHalf data3) {
  THHalfStorage* self = THHalfStorage_newWithSize(4);
  self->data[0] = data0;
  self->data[1] = data1;
  self->data[2] = data2;
  self->data[3] = data3;
  return self;
}

void THHalfStorage_setFlag(THHalfStorage* storage, const char flag) {
  storage->flag |= flag;
}

void THHalfStorage_clearFlag(THHalfStorage* storage, const char flag) {
  storage->flag &= ~flag;
}

void THHalfStorage_retain(THHalfStorage* storage) {
  if (storage && (storage->flag & 1)) THAtomicIncrementRef(&storage->refcount);
}

void THHalfStorage_free(THHalfStorage* storage) {
  if (!storage) return;

  if ((storage->flag & 1) && (THAtomicGet(&storage->refcount) > 0)) {
    if (THAtomicDecrementRef(&storage->refcount)) {
      if (storage->flag & 4) {
        storage->allocator->free(storage->allocatorContext, storage->data);
      }
      if (storage->flag & 8) {
        THHalfStorage_free(storage->view);
      }
      THFree(storage);
    }
  }
}

THHalfStorage* THHalfStorage_newWithData(THHalf* data, ptrdiff_t size) {
  return THHalfStorage_newWithDataAndAllocator(data, size, &THDefaultAllocator,
                                               NULL);
}

THHalfStorage* THHalfStorage_newWithDataAndAllocator(THHalf* data,
                                                     ptrdiff_t size,
                                                     THAllocator* allocator,
                                                     void* allocatorContext) {
  THHalfStorage* storage = THAlloc(sizeof(THHalfStorage));
  storage->data = data;
  storage->size = size;
  storage->refcount = 1;
  storage->flag = 1 | 2 | 4;
  storage->allocator = allocator;
  storage->allocatorContext = allocatorContext;
  return storage;
}

void THHalfStorage_resize(THHalfStorage* storage, ptrdiff_t size) {
  if (storage->flag & 2) {
    if (storage->allocator->realloc == NULL) {
      THHalf* old_data = storage->data;
      ptrdiff_t old_size = storage->size;
      if (size == 0) {
        storage->data = NULL;
      } else {
        storage->data = storage->allocator->malloc(storage->allocatorContext,
                                                   sizeof(THHalf) * size);
      }
      storage->size = size;
      if (old_data != NULL) {
        ptrdiff_t copy_size = old_size;
        if (storage->size < copy_size) {
          copy_size = storage->size;
        }
        if (copy_size > 0) {
          memcpy(storage->data, old_data, sizeof(THHalf) * copy_size);
        }
        storage->allocator->free(storage->allocatorContext, old_data);
      }
    } else {
      storage->data = storage->allocator->realloc(
          storage->allocatorContext, storage->data, sizeof(THHalf) * size);
      storage->size = size;
    }
  } else {
    _THError("generic/THStorage.c", 183,
             "Trying to resize storage that is not resizable");
  }
}

void THHalfStorage_fill(THHalfStorage* storage, THHalf value) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = value;
}

void THHalfStorage_set(THHalfStorage* self, ptrdiff_t idx, THHalf value) {
  do {
    _THArgCheck("generic/THStorage.c", 196, (idx >= 0) && (idx < self->size), 2,
                "out of bounds");
  } while (0);
  self->data[idx] = value;
}

THHalf THHalfStorage_get(const THHalfStorage* self, ptrdiff_t idx) {
  do {
    _THArgCheck("generic/THStorage.c", 202, (idx >= 0) && (idx < self->size), 2,
                "out of bounds");
  } while (0);
  return self->data[idx];
}

void THHalfStorage_swap(THHalfStorage* storage1, THHalfStorage* storage2) {
  THHalf* data;
  ptrdiff_t size;
  char flag;
  THAllocator* allocator;
  void* allocatorContext;
  struct THHalfStorage* view;

  {
    data = storage1->data;
    storage1->data = storage2->data;
    storage2->data = data;
  };
  {
    size = storage1->size;
    storage1->size = storage2->size;
    storage2->size = size;
  };
  {
    flag = storage1->flag;
    storage1->flag = storage2->flag;
    storage2->flag = flag;
  };

  {
    allocator = storage1->allocator;
    storage1->allocator = storage2->allocator;
    storage2->allocator = allocator;
  };
  {
    allocatorContext = storage1->allocatorContext;
    storage1->allocatorContext = storage2->allocatorContext;
    storage2->allocatorContext = allocatorContext;
  };
  {
    view = storage1->view;
    storage1->view = storage2->view;
    storage2->view = view;
  };
}

void THFloatStorage_rawCopy(THFloatStorage* storage, float* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = src[i];
}

void THFloatStorage_copy(THFloatStorage* storage, THFloatStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 14, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  THFloatStorage_rawCopy(storage, src->data);
}
void THFloatStorage_copyByte(THFloatStorage* storage, THByteStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (float)src->data[i];
}
void THFloatStorage_copyChar(THFloatStorage* storage, THCharStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (float)src->data[i];
}
void THFloatStorage_copyShort(THFloatStorage* storage, THShortStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (float)src->data[i];
}
void THFloatStorage_copyInt(THFloatStorage* storage, THIntStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (float)src->data[i];
}
void THFloatStorage_copyLong(THFloatStorage* storage, THLongStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (float)src->data[i];
}
void THFloatStorage_copyFloat(THFloatStorage* storage, THFloatStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (float)src->data[i];
}
void THFloatStorage_copyDouble(THFloatStorage* storage, THDoubleStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (float)src->data[i];
}
void THFloatStorage_copyHalf(THFloatStorage* storage, THHalfStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 61, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++)
    storage->data[i] = (float)TH_half2float(src->data[i]);
}

void THDoubleStorage_rawCopy(THDoubleStorage* storage, double* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = src[i];
}

void THDoubleStorage_copy(THDoubleStorage* storage, THDoubleStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 14, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  THDoubleStorage_rawCopy(storage, src->data);
}
void THDoubleStorage_copyByte(THDoubleStorage* storage, THByteStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (double)src->data[i];
}
void THDoubleStorage_copyChar(THDoubleStorage* storage, THCharStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (double)src->data[i];
}
void THDoubleStorage_copyShort(THDoubleStorage* storage, THShortStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (double)src->data[i];
}
void THDoubleStorage_copyInt(THDoubleStorage* storage, THIntStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (double)src->data[i];
}
void THDoubleStorage_copyLong(THDoubleStorage* storage, THLongStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (double)src->data[i];
}
void THDoubleStorage_copyFloat(THDoubleStorage* storage, THFloatStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (double)src->data[i];
}
void THDoubleStorage_copyDouble(THDoubleStorage* storage,
                                THDoubleStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (double)src->data[i];
}
void THDoubleStorage_copyHalf(THDoubleStorage* storage, THHalfStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 61, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++)
    storage->data[i] = (double)TH_half2float(src->data[i]);
}

void THByteStorage_rawCopy(THByteStorage* storage, unsigned char* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = src[i];
}

void THByteStorage_copy(THByteStorage* storage, THByteStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 14, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  THByteStorage_rawCopy(storage, src->data);
}
void THByteStorage_copyByte(THByteStorage* storage, THByteStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++)
    storage->data[i] = (unsigned char)src->data[i];
}
void THByteStorage_copyChar(THByteStorage* storage, THCharStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++)
    storage->data[i] = (unsigned char)src->data[i];
}
void THByteStorage_copyShort(THByteStorage* storage, THShortStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++)
    storage->data[i] = (unsigned char)src->data[i];
}
void THByteStorage_copyInt(THByteStorage* storage, THIntStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++)
    storage->data[i] = (unsigned char)src->data[i];
}
void THByteStorage_copyLong(THByteStorage* storage, THLongStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++)
    storage->data[i] = (unsigned char)src->data[i];
}
void THByteStorage_copyFloat(THByteStorage* storage, THFloatStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++)
    storage->data[i] = (unsigned char)src->data[i];
}
void THByteStorage_copyDouble(THByteStorage* storage, THDoubleStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++)
    storage->data[i] = (unsigned char)src->data[i];
}
void THByteStorage_copyHalf(THByteStorage* storage, THHalfStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 61, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++)
    storage->data[i] = (unsigned char)TH_half2float(src->data[i]);
}

void THCharStorage_rawCopy(THCharStorage* storage, char* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = src[i];
}

void THCharStorage_copy(THCharStorage* storage, THCharStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 14, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  THCharStorage_rawCopy(storage, src->data);
}
void THCharStorage_copyByte(THCharStorage* storage, THByteStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (char)src->data[i];
}
void THCharStorage_copyChar(THCharStorage* storage, THCharStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (char)src->data[i];
}
void THCharStorage_copyShort(THCharStorage* storage, THShortStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (char)src->data[i];
}
void THCharStorage_copyInt(THCharStorage* storage, THIntStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (char)src->data[i];
}
void THCharStorage_copyLong(THCharStorage* storage, THLongStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (char)src->data[i];
}
void THCharStorage_copyFloat(THCharStorage* storage, THFloatStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (char)src->data[i];
}
void THCharStorage_copyDouble(THCharStorage* storage, THDoubleStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (char)src->data[i];
}
void THCharStorage_copyHalf(THCharStorage* storage, THHalfStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 61, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++)
    storage->data[i] = (char)TH_half2float(src->data[i]);
}

void THShortStorage_rawCopy(THShortStorage* storage, short* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = src[i];
}

void THShortStorage_copy(THShortStorage* storage, THShortStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 14, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  THShortStorage_rawCopy(storage, src->data);
}
void THShortStorage_copyByte(THShortStorage* storage, THByteStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (short)src->data[i];
}
void THShortStorage_copyChar(THShortStorage* storage, THCharStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (short)src->data[i];
}
void THShortStorage_copyShort(THShortStorage* storage, THShortStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (short)src->data[i];
}
void THShortStorage_copyInt(THShortStorage* storage, THIntStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (short)src->data[i];
}
void THShortStorage_copyLong(THShortStorage* storage, THLongStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (short)src->data[i];
}
void THShortStorage_copyFloat(THShortStorage* storage, THFloatStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (short)src->data[i];
}
void THShortStorage_copyDouble(THShortStorage* storage, THDoubleStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (short)src->data[i];
}
void THShortStorage_copyHalf(THShortStorage* storage, THHalfStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 61, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++)
    storage->data[i] = (short)TH_half2float(src->data[i]);
}

void THIntStorage_rawCopy(THIntStorage* storage, int* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = src[i];
}

void THIntStorage_copy(THIntStorage* storage, THIntStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 14, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  THIntStorage_rawCopy(storage, src->data);
}
void THIntStorage_copyByte(THIntStorage* storage, THByteStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (int)src->data[i];
}
void THIntStorage_copyChar(THIntStorage* storage, THCharStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (int)src->data[i];
}
void THIntStorage_copyShort(THIntStorage* storage, THShortStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (int)src->data[i];
}
void THIntStorage_copyInt(THIntStorage* storage, THIntStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (int)src->data[i];
}
void THIntStorage_copyLong(THIntStorage* storage, THLongStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (int)src->data[i];
}
void THIntStorage_copyFloat(THIntStorage* storage, THFloatStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (int)src->data[i];
}
void THIntStorage_copyDouble(THIntStorage* storage, THDoubleStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (int)src->data[i];
}
void THIntStorage_copyHalf(THIntStorage* storage, THHalfStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 61, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++)
    storage->data[i] = (int)TH_half2float(src->data[i]);
}

void THLongStorage_rawCopy(THLongStorage* storage, long* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = src[i];
}

void THLongStorage_copy(THLongStorage* storage, THLongStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 14, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  THLongStorage_rawCopy(storage, src->data);
}
void THLongStorage_copyByte(THLongStorage* storage, THByteStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (long)src->data[i];
}
void THLongStorage_copyChar(THLongStorage* storage, THCharStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (long)src->data[i];
}
void THLongStorage_copyShort(THLongStorage* storage, THShortStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (long)src->data[i];
}
void THLongStorage_copyInt(THLongStorage* storage, THIntStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (long)src->data[i];
}
void THLongStorage_copyLong(THLongStorage* storage, THLongStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (long)src->data[i];
}
void THLongStorage_copyFloat(THLongStorage* storage, THFloatStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (long)src->data[i];
}
void THLongStorage_copyDouble(THLongStorage* storage, THDoubleStorage* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = (long)src->data[i];
}
void THLongStorage_copyHalf(THLongStorage* storage, THHalfStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 61, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++)
    storage->data[i] = (long)TH_half2float(src->data[i]);
}

void THHalfStorage_rawCopy(THHalfStorage* storage, THHalf* src) {
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = src[i];
}

void THHalfStorage_copy(THHalfStorage* storage, THHalfStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 14, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  THHalfStorage_rawCopy(storage, src->data);
}
void THHalfStorage_copyHalf(THHalfStorage* storage, THHalfStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 64, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++) storage->data[i] = src->data[i];
}
void THHalfStorage_copyByte(THHalfStorage* storage, THByteStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 65, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++)
    storage->data[i] = TH_float2half((float)(src->data[i]));
}
void THHalfStorage_copyChar(THHalfStorage* storage, THCharStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 66, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++)
    storage->data[i] = TH_float2half((float)(src->data[i]));
}
void THHalfStorage_copyShort(THHalfStorage* storage, THShortStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 67, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++)
    storage->data[i] = TH_float2half((float)(src->data[i]));
}
void THHalfStorage_copyInt(THHalfStorage* storage, THIntStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 68, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++)
    storage->data[i] = TH_float2half((float)(src->data[i]));
}
void THHalfStorage_copyLong(THHalfStorage* storage, THLongStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 69, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++)
    storage->data[i] = TH_float2half((float)(src->data[i]));
}
void THHalfStorage_copyFloat(THHalfStorage* storage, THFloatStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 70, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++)
    storage->data[i] = TH_float2half((float)(src->data[i]));
}
void THHalfStorage_copyDouble(THHalfStorage* storage, THDoubleStorage* src) {
  do {
    _THArgCheck("generic/THStorageCopy.c", 71, storage->size == src->size, 2,
                "size mismatch");
  } while (0);
  ptrdiff_t i;
  for (i = 0; i < storage->size; i++)
    storage->data[i] = TH_float2half((float)(src->data[i]));
}

THDescBuff THLongStorage_sizeDesc(const THLongStorage* size) {
  return _THSizeDesc(size->data, size->size);
}

THLongStorage* THLongStorage_newInferSize(THLongStorage* size,
                                          ptrdiff_t nElement) {
  ptrdiff_t total_size = (size->size > 0 ? 1 : 0);
  ptrdiff_t dim_infer = -1;
  ptrdiff_t i;
  for (i = 0; i < size->size; i++) {
    if (size->data[i] == -1) {
      do {
        _THArgCheck("THStorage.c", 27, dim_infer == -1, 1,
                    "only one dimension can be inferred");
      } while (0);
      dim_infer = i;
    } else {
      total_size *= size->data[i];
    }
  }
  if (dim_infer != -1) {
    THDescBuff buf = THLongStorage_sizeDesc(size);
    do {
      _THArgCheck("THStorage.c", 35,
                  total_size > 0 && nElement % total_size == 0, 2,
                  "size '%s' is invalid for input with %td elements", buf.str,
                  nElement);
    } while (0)

        ;
  } else {
    THDescBuff buf = THLongStorage_sizeDesc(size);
    do {
      _THArgCheck("THStorage.c", 40, nElement == total_size, 2,
                  "size '%s' is invalid for input with %td elements", buf.str,
                  nElement);
    } while (0)

        ;
  }
  THLongStorage* copy = THLongStorage_newWithSize(size->size);
  THLongStorage_copy(copy, size);
  if (dim_infer != -1) {
    copy->data[dim_infer] = nElement / total_size;
  }
  return copy;
}

int THLongStorage_inferSize2(THLongStorage* output, long* sizesA, long dimsA,
                             long* sizesB, long dimsB, char* error_buffer,
                             int buffer_len) {
  do {
    _THArgCheck("THStorage.c", 55, sizesA != NULL, 1,
                "sizesA must not be null");
  } while (0);
  do {
    _THArgCheck("THStorage.c", 56, sizesB != NULL, 2,
                "sizesB must not be null");
  } while (0);
  do {
    _THArgCheck("THStorage.c", 57, dimsA, 1, "Can't expand empty tensor a");
  } while (0);
  do {
    _THArgCheck("THStorage.c", 58, dimsB, 1, "Can't expand empty tensor b");
  } while (0);
  ptrdiff_t ndim = dimsA > dimsB ? dimsA : dimsB;

  long* expandedSizes = THAlloc(sizeof(long) * ndim);

  for (long i = ndim - 1; i >= 0; --i) {
    long offset = ndim - 1 - i;
    long dimA = dimsA - 1 - offset;
    long dimB = dimsB - 1 - offset;
    long sizeA = (dimA >= 0) ? sizesA[dimA] : 1;
    long sizeB = (dimB >= 0) ? sizesB[dimB] : 1;
    if (sizeA == sizeB || sizeA == 1 || sizeB == 1) {
      expandedSizes[i] = ((sizeA) > (sizeB) ? (sizeA) : (sizeB));
    } else {
      THFree(expandedSizes);
      snprintf(
          error_buffer, buffer_len,
          "The size of tensor a (%ld) must match the size of tensor b (%ld) at "
          "non-singleton dimension %ld.",
          sizeA, sizeB, i);
      return -1;
    }
  }
  THLongStorage_resize(output, ndim);
  memcpy(THLongStorage_data(output), expandedSizes, sizeof(long) * ndim);
  THFree(expandedSizes);
  return 0;
}

int THLongStorage_inferSizeN(THLongStorage* output, int n, long** sizes,
                             long* dims, char* error_buffer, int buffer_len) {
  do {
    _THArgCheck("THStorage.c", 89, n > 0, 2, "n must be greater than 0");
  } while (0);
  do {
    _THArgCheck("THStorage.c", 90, sizes != NULL, 1, "sizes must not be null");
  } while (0);
  do {
    _THArgCheck("THStorage.c", 91, dims != NULL, 1, "dims must not be null");
  } while (0);

  ptrdiff_t ndim = 0;
  for (int j = 0; j < n; ++j) {
    do {
      _THArgCheck("THStorage.c", 95, sizes[j] != NULL, 1,
                  "size %d must not be null", j);
    } while (0);
    do {
      _THArgCheck("THStorage.c", 96, dims[j], 1, "Can't expand empty tensor %d",
                  j);
    } while (0);
    ndim = dims[j] > ndim ? dims[j] : ndim;
  }

  long* expandedSizes = THAlloc(sizeof(long) * ndim);

  for (long i = ndim - 1; i >= 0; --i) {
    expandedSizes[i] = 1;
    long offset = ndim - 1 - i;
    for (int j = 0; j < n; ++j) {
      long dim = dims[j] - 1 - offset;
      long size = (dim >= 0) ? sizes[j][dim] : 1;
      if (size == expandedSizes[i] || size == 1 || expandedSizes[i] == 1) {
        expandedSizes[i] =
            ((expandedSizes[i]) > (size) ? (expandedSizes[i]) : (size));
      } else {
        THFree(expandedSizes);
        snprintf(error_buffer, buffer_len,
                 "The size of tensor %i (%ld) must match the expanded size"
                 "of tensor (%ld) at non-singleton dimension %ld.",
                 j, size, expandedSizes[i], i);
        return -1;
      }
    }
  }
  THLongStorage_resize(output, ndim);
  memcpy(THLongStorage_data(output), expandedSizes, sizeof(long) * ndim);
  THFree(expandedSizes);
  return 0;
}

int THLongStorage_inferExpandGeometry(long* tensorSizes, long* tensorStrides,
                                      long tensorDim, THLongStorage* sizes,
                                      long** expandedSizes,
                                      long** expandedStrides,
                                      char* error_buffer, int buffer_len) {
  ptrdiff_t ndim = THLongStorage_size(sizes);

  long* expandedSizesCalc = THAlloc(sizeof(long) * ndim);
  long* expandedStridesCalc = THAlloc(sizeof(long) * ndim);

  for (long i = ndim - 1; i >= 0; --i) {
    long offset = ndim - 1 - i;
    long dim = tensorDim - 1 - offset;
    long size = (dim >= 0) ? tensorSizes[dim] : 1;
    long stride = (dim >= 0)
                      ? tensorStrides[dim]
                      : expandedSizesCalc[i + 1] * expandedStridesCalc[i + 1];
    long targetSize = THLongStorage_data(sizes)[i];
    if (targetSize == -1) {
      if (dim < 0) {
        THFree(expandedSizesCalc);
        THFree(expandedStridesCalc);
        snprintf(error_buffer, buffer_len,
                 "The expanded size of the tensor (%ld) isn't allowed in a "
                 "leading, non-existing dimension %ld.",
                 targetSize, i);
        return -1;
      } else {
        targetSize = size;
      }
    }
    if (size != targetSize) {
      if (size == 1) {
        size = targetSize;
        stride = 0;
      } else {
        THFree(expandedSizesCalc);
        THFree(expandedStridesCalc);
        snprintf(error_buffer, buffer_len,
                 "The expanded size of the tensor (%ld) must match the "
                 "existing size (%ld) at "
                 "non-singleton dimension %ld.",
                 targetSize, size, i);
        return -1;
      }
    }
    expandedSizesCalc[i] = size;
    expandedStridesCalc[i] = stride;
  }
  *expandedSizes = expandedSizesCalc;
  *expandedStrides = expandedStridesCalc;
  return 0;
}
