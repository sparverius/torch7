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

static void defaultErrorHandlerFunction(const char* msg, void* data) {
  printf("$ Error: %s\n", msg);
  exit(-1);
}

static THErrorHandlerFunction defaultErrorHandler = defaultErrorHandlerFunction;
static void* defaultErrorHandlerData;
static THErrorHandlerFunction threadErrorHandler = NULL;
static void* threadErrorHandlerData;

void _THError(const char* file, const int line, const char* fmt, ...) {
  char msg[2048];
  va_list args;

  va_start(args, fmt);
  int n = vsnprintf(msg, 2048, fmt, args);
  va_end(args);

  if (n < 2048) {
    snprintf(msg + n, 2048 - n, " at %s:%d", file, line);
  }

  if (threadErrorHandler)
    (*threadErrorHandler)(msg, threadErrorHandlerData);
  else
    (*defaultErrorHandler)(msg, defaultErrorHandlerData);
}

void _THAssertionFailed(const char* file, const int line, const char* exp,
                        const char* fmt, ...) {
  char msg[1024];
  va_list args;
  va_start(args, fmt);
  vsnprintf(msg, 1024, fmt, args);
  va_end(args);
  _THError(file, line, "Assertion `%s' failed. %s", exp, msg);
}

void THSetErrorHandler(THErrorHandlerFunction new_handler, void* data) {
  threadErrorHandler = new_handler;
  threadErrorHandlerData = data;
}

void THSetDefaultErrorHandler(THErrorHandlerFunction new_handler, void* data) {
  if (new_handler)
    defaultErrorHandler = new_handler;
  else
    defaultErrorHandler = defaultErrorHandlerFunction;
  defaultErrorHandlerData = data;
}

static void defaultArgErrorHandlerFunction(int argNumber, const char* msg,
                                           void* data) {
  if (msg)
    printf("$ Invalid argument %d: %s\n", argNumber, msg);
  else
    printf("$ Invalid argument %d\n", argNumber);
  exit(-1);
}

static THArgErrorHandlerFunction defaultArgErrorHandler =
    defaultArgErrorHandlerFunction;
static void* defaultArgErrorHandlerData;
static THArgErrorHandlerFunction threadArgErrorHandler = NULL;
static void* threadArgErrorHandlerData;

void _THArgCheck(const char* file, int line, int condition, int argNumber,
                 const char* fmt, ...) {
  if (!condition) {
    char msg[2048];
    va_list args;

    va_start(args, fmt);
    int n = vsnprintf(msg, 2048, fmt, args);
    va_end(args);

    if (n < 2048) {
      snprintf(msg + n, 2048 - n, " at %s:%d", file, line);
    }

    if (threadArgErrorHandler)
      (*threadArgErrorHandler)(argNumber, msg, threadArgErrorHandlerData);
    else
      (*defaultArgErrorHandler)(argNumber, msg, defaultArgErrorHandlerData);
  }
}

void THSetArgErrorHandler(THArgErrorHandlerFunction new_handler, void* data) {
  threadArgErrorHandler = new_handler;
  threadArgErrorHandlerData = data;
}

void THSetDefaultArgErrorHandler(THArgErrorHandlerFunction new_handler,
                                 void* data) {
  if (new_handler)
    defaultArgErrorHandler = new_handler;
  else
    defaultArgErrorHandler = defaultArgErrorHandlerFunction;
  defaultArgErrorHandlerData = data;
}

static void (*torchGCFunction)(void* data) = NULL;
static void* torchGCData;
static ptrdiff_t heapSize = 0;
static ptrdiff_t heapDelta = 0;
static const ptrdiff_t heapMaxDelta = (ptrdiff_t)1e6;
static const ptrdiff_t heapMinDelta = (ptrdiff_t)-1e6;
static ptrdiff_t heapSoftmax = (ptrdiff_t)3e8;
static const double heapSoftmaxGrowthThresh = 0.8;
static const double heapSoftmaxGrowthFactor = 1.4;
void THSetGCHandler(void (*torchGCFunction_)(void* data), void* data) {
  torchGCFunction = torchGCFunction_;
  torchGCData = data;
}

static ptrdiff_t getAllocSize(void* ptr) { return 0; }

static ptrdiff_t applyHeapDelta() {
  ptrdiff_t oldHeapSize = THAtomicAddPtrdiff(&heapSize, heapDelta);
  ptrdiff_t newHeapSize = oldHeapSize + heapDelta;
  heapDelta = 0;
  return newHeapSize;
}

static void maybeTriggerGC(ptrdiff_t curHeapSize) {
  if (torchGCFunction && curHeapSize > heapSoftmax) {
    torchGCFunction(torchGCData);

    ptrdiff_t newHeapSize = applyHeapDelta();

    if (newHeapSize > heapSoftmax * heapSoftmaxGrowthThresh) {
      heapSoftmax = (ptrdiff_t)(heapSoftmax * heapSoftmaxGrowthFactor);
    }
  }
}

void THHeapUpdate(ptrdiff_t size) {
  heapDelta += size;

  if (heapDelta < heapMaxDelta && heapDelta > heapMinDelta) {
    return;
  }

  ptrdiff_t newHeapSize = applyHeapDelta();

  if (size > 0) {
    maybeTriggerGC(newHeapSize);
  }
}

static void* THAllocInternal(ptrdiff_t size) {
  void* ptr;

  if (size > 5120) {
    if (posix_memalign(&ptr, 64, size) != 0) ptr = NULL;

  } else {
    ptr = malloc(size);
  }

  THHeapUpdate(getAllocSize(ptr));
  return ptr;
}

void* THAlloc(ptrdiff_t size) {
  void* ptr;

  if (size < 0)
    _THError("THGeneral.c", 271,
             "$ Torch: invalid memory size -- maybe an overflow?");

  if (size == 0) return NULL;

  ptr = THAllocInternal(size);

  if (!ptr && torchGCFunction) {
    torchGCFunction(torchGCData);
    ptr = THAllocInternal(size);
  }

  if (!ptr)
    _THError(
        "THGeneral.c", 283,
        "$ Torch: not enough memory: you tried to allocate %fGB. Buy new RAM!",
        size / 1073741824)

        ;

  return ptr;
}

void* THRealloc(void* ptr, ptrdiff_t size) {
  if (!ptr) return (THAlloc(size));

  if (size == 0) {
    THFree(ptr);
    return NULL;
  }

  if (size < 0)
    _THError("THGeneral.c", 298,
             "$ Torch: invalid memory size -- maybe an overflow?");

  ptrdiff_t oldSize = -getAllocSize(ptr);
  void* newptr = realloc(ptr, size);

  if (!newptr && torchGCFunction) {
    torchGCFunction(torchGCData);
    newptr = realloc(ptr, size);
  }

  if (!newptr)
    _THError(
        "THGeneral.c", 309,
        "$ Torch: not enough memory: you tried to reallocate %dGB. Buy new "
        "RAM!",
        size / 1073741824)

        ;

  THHeapUpdate(oldSize + getAllocSize(newptr));

  return newptr;
}

void THFree(void* ptr) {
  THHeapUpdate(-getAllocSize(ptr));
  free(ptr);
}

double THLog1p(const double x) { return log1p(x); }

void THSetNumThreads(int num_threads) {}

int THGetNumThreads(void) { return 1; }

int THGetNumCores(void) { return 1; }

void THInferNumThreads(void) {}

THDescBuff _THSizeDesc(const long* size, const long ndim) {
  const int L = TH_DESC_BUFF_LEN;
  THDescBuff buf;
  char* str = buf.str;
  int n = 0;
  n += snprintf(str, L - n, "[");
  int i;
  for (i = 0; i < ndim; i++) {
    if (n >= L) break;
    n += snprintf(str + n, L - n, "%ld", size[i]);
    if (i < ndim - 1) {
      n += snprintf(str + n, L - n, " x ");
    }
  }
  if (n < L - 2) {
    snprintf(str + n, L - n, "]");
  } else {
    snprintf(str + L - 5, 5, "...]");
  }
  return buf;
}
