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

typedef struct THFloatTensor {
  long* size;
  long* stride;
  int nDimension;

  THFloatStorage* storage;
  ptrdiff_t storageOffset;
  int refcount;

  char flag;

} THFloatTensor;

THFloatStorage* THFloatTensor_storage(const THFloatTensor* self);
ptrdiff_t THFloatTensor_storageOffset(const THFloatTensor* self);
int THFloatTensor_nDimension(const THFloatTensor* self);
long THFloatTensor_size(const THFloatTensor* self, int dim);
long THFloatTensor_stride(const THFloatTensor* self, int dim);
THLongStorage* THFloatTensor_newSizeOf(THFloatTensor* self);
THLongStorage* THFloatTensor_newStrideOf(THFloatTensor* self);
float* THFloatTensor_data(const THFloatTensor* self);

void THFloatTensor_setFlag(THFloatTensor* self, const char flag);
void THFloatTensor_clearFlag(THFloatTensor* self, const char flag);

THFloatTensor* THFloatTensor_new(void);
THFloatTensor* THFloatTensor_newWithTensor(THFloatTensor* tensor);

THFloatTensor* THFloatTensor_newWithStorage(THFloatStorage* storage_,
                                            ptrdiff_t storageOffset_,
                                            THLongStorage* size_,
                                            THLongStorage* stride_);
THFloatTensor* THFloatTensor_newWithStorage1d(THFloatStorage* storage_,
                                              ptrdiff_t storageOffset_,
                                              long size0_, long stride0_);
THFloatTensor* THFloatTensor_newWithStorage2d(THFloatStorage* storage_,
                                              ptrdiff_t storageOffset_,
                                              long size0_, long stride0_,
                                              long size1_, long stride1_);
THFloatTensor* THFloatTensor_newWithStorage3d(THFloatStorage* storage_,
                                              ptrdiff_t storageOffset_,
                                              long size0_, long stride0_,
                                              long size1_, long stride1_,
                                              long size2_, long stride2_);
THFloatTensor* THFloatTensor_newWithStorage4d(THFloatStorage* storage_,
                                              ptrdiff_t storageOffset_,
                                              long size0_, long stride0_,
                                              long size1_, long stride1_,
                                              long size2_, long stride2_,
                                              long size3_, long stride3_);

THFloatTensor* THFloatTensor_newWithSize(THLongStorage* size_,
                                         THLongStorage* stride_);
THFloatTensor* THFloatTensor_newWithSize1d(long size0_);
THFloatTensor* THFloatTensor_newWithSize2d(long size0_, long size1_);
THFloatTensor* THFloatTensor_newWithSize3d(long size0_, long size1_,
                                           long size2_);
THFloatTensor* THFloatTensor_newWithSize4d(long size0_, long size1_,
                                           long size2_, long size3_);

THFloatTensor* THFloatTensor_newClone(THFloatTensor* self);
THFloatTensor* THFloatTensor_newContiguous(THFloatTensor* tensor);
THFloatTensor* THFloatTensor_newSelect(THFloatTensor* tensor, int dimension_,
                                       long sliceIndex_);
THFloatTensor* THFloatTensor_newNarrow(THFloatTensor* tensor, int dimension_,
                                       long firstIndex_, long size_);
THFloatTensor* THFloatTensor_newTranspose(THFloatTensor* tensor,
                                          int dimension1_, int dimension2_);
THFloatTensor* THFloatTensor_newUnfold(THFloatTensor* tensor, int dimension_,
                                       long size_, long step_);
THFloatTensor* THFloatTensor_newView(THFloatTensor* tensor,
                                     THLongStorage* size);
THFloatTensor* THFloatTensor_newExpand(THFloatTensor* tensor,
                                       THLongStorage* size);

void THFloatTensor_expand(THFloatTensor* r, THFloatTensor* tensor,
                          THLongStorage* size);
void THFloatTensor_expandNd(THFloatTensor** rets, THFloatTensor** ops,
                            int count);

void THFloatTensor_resize(THFloatTensor* tensor, THLongStorage* size,
                          THLongStorage* stride);
void THFloatTensor_resizeAs(THFloatTensor* tensor, THFloatTensor* src);
void THFloatTensor_resizeNd(THFloatTensor* tensor, int nDimension, long* size,
                            long* stride);
void THFloatTensor_resize1d(THFloatTensor* tensor, long size0_);
void THFloatTensor_resize2d(THFloatTensor* tensor, long size0_, long size1_);
void THFloatTensor_resize3d(THFloatTensor* tensor, long size0_, long size1_,
                            long size2_);
void THFloatTensor_resize4d(THFloatTensor* tensor, long size0_, long size1_,
                            long size2_, long size3_);
void THFloatTensor_resize5d(THFloatTensor* tensor, long size0_, long size1_,
                            long size2_, long size3_, long size4_);

void THFloatTensor_set(THFloatTensor* self, THFloatTensor* src);
void THFloatTensor_setStorage(THFloatTensor* self, THFloatStorage* storage_,
                              ptrdiff_t storageOffset_, THLongStorage* size_,
                              THLongStorage* stride_);
void THFloatTensor_setStorageNd(THFloatTensor* self, THFloatStorage* storage_,
                                ptrdiff_t storageOffset_, int nDimension,
                                long* size, long* stride);
void THFloatTensor_setStorage1d(THFloatTensor* self, THFloatStorage* storage_,
                                ptrdiff_t storageOffset_, long size0_,
                                long stride0_);
void THFloatTensor_setStorage2d(THFloatTensor* self, THFloatStorage* storage_,
                                ptrdiff_t storageOffset_, long size0_,
                                long stride0_, long size1_, long stride1_);
void THFloatTensor_setStorage3d(THFloatTensor* self, THFloatStorage* storage_,
                                ptrdiff_t storageOffset_, long size0_,
                                long stride0_, long size1_, long stride1_,
                                long size2_, long stride2_);
void THFloatTensor_setStorage4d(THFloatTensor* self, THFloatStorage* storage_,
                                ptrdiff_t storageOffset_, long size0_,
                                long stride0_, long size1_, long stride1_,
                                long size2_, long stride2_, long size3_,
                                long stride3_);

void THFloatTensor_narrow(THFloatTensor* self, THFloatTensor* src,
                          int dimension_, long firstIndex_, long size_);
void THFloatTensor_select(THFloatTensor* self, THFloatTensor* src,
                          int dimension_, long sliceIndex_);
void THFloatTensor_transpose(THFloatTensor* self, THFloatTensor* src,
                             int dimension1_, int dimension2_);
void THFloatTensor_unfold(THFloatTensor* self, THFloatTensor* src,
                          int dimension_, long size_, long step_);

void THFloatTensor_squeeze(THFloatTensor* self, THFloatTensor* src);
void THFloatTensor_squeeze1d(THFloatTensor* self, THFloatTensor* src,
                             int dimension_);
void THFloatTensor_unsqueeze1d(THFloatTensor* self, THFloatTensor* src,
                               int dimension_);

int THFloatTensor_isContiguous(const THFloatTensor* self);
int THFloatTensor_isSameSizeAs(const THFloatTensor* self,
                               const THFloatTensor* src);
int THFloatTensor_isSetTo(const THFloatTensor* self, const THFloatTensor* src);
int THFloatTensor_isSize(const THFloatTensor* self, const THLongStorage* dims);
ptrdiff_t THFloatTensor_nElement(const THFloatTensor* self);

void THFloatTensor_retain(THFloatTensor* self);
void THFloatTensor_free(THFloatTensor* self);
void THFloatTensor_freeCopyTo(THFloatTensor* self, THFloatTensor* dst);

void THFloatTensor_set1d(THFloatTensor* tensor, long x0, float value);
void THFloatTensor_set2d(THFloatTensor* tensor, long x0, long x1, float value);
void THFloatTensor_set3d(THFloatTensor* tensor, long x0, long x1, long x2,
                         float value);
void THFloatTensor_set4d(THFloatTensor* tensor, long x0, long x1, long x2,
                         long x3, float value);

float THFloatTensor_get1d(const THFloatTensor* tensor, long x0);
float THFloatTensor_get2d(const THFloatTensor* tensor, long x0, long x1);
float THFloatTensor_get3d(const THFloatTensor* tensor, long x0, long x1,
                          long x2);
float THFloatTensor_get4d(const THFloatTensor* tensor, long x0, long x1,
                          long x2, long x3);

THDescBuff THFloatTensor_desc(const THFloatTensor* tensor);
THDescBuff THFloatTensor_sizeDesc(const THFloatTensor* tensor);

typedef struct THDoubleTensor {
  long* size;
  long* stride;
  int nDimension;

  THDoubleStorage* storage;
  ptrdiff_t storageOffset;
  int refcount;

  char flag;

} THDoubleTensor;

THDoubleStorage* THDoubleTensor_storage(const THDoubleTensor* self);
ptrdiff_t THDoubleTensor_storageOffset(const THDoubleTensor* self);
int THDoubleTensor_nDimension(const THDoubleTensor* self);
long THDoubleTensor_size(const THDoubleTensor* self, int dim);
long THDoubleTensor_stride(const THDoubleTensor* self, int dim);
THLongStorage* THDoubleTensor_newSizeOf(THDoubleTensor* self);
THLongStorage* THDoubleTensor_newStrideOf(THDoubleTensor* self);
double* THDoubleTensor_data(const THDoubleTensor* self);

void THDoubleTensor_setFlag(THDoubleTensor* self, const char flag);
void THDoubleTensor_clearFlag(THDoubleTensor* self, const char flag);

THDoubleTensor* THDoubleTensor_new(void);
THDoubleTensor* THDoubleTensor_newWithTensor(THDoubleTensor* tensor);

THDoubleTensor* THDoubleTensor_newWithStorage(THDoubleStorage* storage_,
                                              ptrdiff_t storageOffset_,
                                              THLongStorage* size_,
                                              THLongStorage* stride_);
THDoubleTensor* THDoubleTensor_newWithStorage1d(THDoubleStorage* storage_,
                                                ptrdiff_t storageOffset_,
                                                long size0_, long stride0_);
THDoubleTensor* THDoubleTensor_newWithStorage2d(THDoubleStorage* storage_,
                                                ptrdiff_t storageOffset_,
                                                long size0_, long stride0_,
                                                long size1_, long stride1_);
THDoubleTensor* THDoubleTensor_newWithStorage3d(THDoubleStorage* storage_,
                                                ptrdiff_t storageOffset_,
                                                long size0_, long stride0_,
                                                long size1_, long stride1_,
                                                long size2_, long stride2_);
THDoubleTensor* THDoubleTensor_newWithStorage4d(THDoubleStorage* storage_,
                                                ptrdiff_t storageOffset_,
                                                long size0_, long stride0_,
                                                long size1_, long stride1_,
                                                long size2_, long stride2_,
                                                long size3_, long stride3_);

THDoubleTensor* THDoubleTensor_newWithSize(THLongStorage* size_,
                                           THLongStorage* stride_);
THDoubleTensor* THDoubleTensor_newWithSize1d(long size0_);
THDoubleTensor* THDoubleTensor_newWithSize2d(long size0_, long size1_);
THDoubleTensor* THDoubleTensor_newWithSize3d(long size0_, long size1_,
                                             long size2_);
THDoubleTensor* THDoubleTensor_newWithSize4d(long size0_, long size1_,
                                             long size2_, long size3_);

THDoubleTensor* THDoubleTensor_newClone(THDoubleTensor* self);
THDoubleTensor* THDoubleTensor_newContiguous(THDoubleTensor* tensor);
THDoubleTensor* THDoubleTensor_newSelect(THDoubleTensor* tensor, int dimension_,
                                         long sliceIndex_);
THDoubleTensor* THDoubleTensor_newNarrow(THDoubleTensor* tensor, int dimension_,
                                         long firstIndex_, long size_);
THDoubleTensor* THDoubleTensor_newTranspose(THDoubleTensor* tensor,
                                            int dimension1_, int dimension2_);
THDoubleTensor* THDoubleTensor_newUnfold(THDoubleTensor* tensor, int dimension_,
                                         long size_, long step_);
THDoubleTensor* THDoubleTensor_newView(THDoubleTensor* tensor,
                                       THLongStorage* size);
THDoubleTensor* THDoubleTensor_newExpand(THDoubleTensor* tensor,
                                         THLongStorage* size);

void THDoubleTensor_expand(THDoubleTensor* r, THDoubleTensor* tensor,
                           THLongStorage* size);
void THDoubleTensor_expandNd(THDoubleTensor** rets, THDoubleTensor** ops,
                             int count);

void THDoubleTensor_resize(THDoubleTensor* tensor, THLongStorage* size,
                           THLongStorage* stride);
void THDoubleTensor_resizeAs(THDoubleTensor* tensor, THDoubleTensor* src);
void THDoubleTensor_resizeNd(THDoubleTensor* tensor, int nDimension, long* size,
                             long* stride);
void THDoubleTensor_resize1d(THDoubleTensor* tensor, long size0_);
void THDoubleTensor_resize2d(THDoubleTensor* tensor, long size0_, long size1_);
void THDoubleTensor_resize3d(THDoubleTensor* tensor, long size0_, long size1_,
                             long size2_);
void THDoubleTensor_resize4d(THDoubleTensor* tensor, long size0_, long size1_,
                             long size2_, long size3_);
void THDoubleTensor_resize5d(THDoubleTensor* tensor, long size0_, long size1_,
                             long size2_, long size3_, long size4_);

void THDoubleTensor_set(THDoubleTensor* self, THDoubleTensor* src);
void THDoubleTensor_setStorage(THDoubleTensor* self, THDoubleStorage* storage_,
                               ptrdiff_t storageOffset_, THLongStorage* size_,
                               THLongStorage* stride_);
void THDoubleTensor_setStorageNd(THDoubleTensor* self,
                                 THDoubleStorage* storage_,
                                 ptrdiff_t storageOffset_, int nDimension,
                                 long* size, long* stride);
void THDoubleTensor_setStorage1d(THDoubleTensor* self,
                                 THDoubleStorage* storage_,
                                 ptrdiff_t storageOffset_, long size0_,
                                 long stride0_);
void THDoubleTensor_setStorage2d(THDoubleTensor* self,
                                 THDoubleStorage* storage_,
                                 ptrdiff_t storageOffset_, long size0_,
                                 long stride0_, long size1_, long stride1_);
void THDoubleTensor_setStorage3d(THDoubleTensor* self,
                                 THDoubleStorage* storage_,
                                 ptrdiff_t storageOffset_, long size0_,
                                 long stride0_, long size1_, long stride1_,
                                 long size2_, long stride2_);
void THDoubleTensor_setStorage4d(THDoubleTensor* self,
                                 THDoubleStorage* storage_,
                                 ptrdiff_t storageOffset_, long size0_,
                                 long stride0_, long size1_, long stride1_,
                                 long size2_, long stride2_, long size3_,
                                 long stride3_);

void THDoubleTensor_narrow(THDoubleTensor* self, THDoubleTensor* src,
                           int dimension_, long firstIndex_, long size_);
void THDoubleTensor_select(THDoubleTensor* self, THDoubleTensor* src,
                           int dimension_, long sliceIndex_);
void THDoubleTensor_transpose(THDoubleTensor* self, THDoubleTensor* src,
                              int dimension1_, int dimension2_);
void THDoubleTensor_unfold(THDoubleTensor* self, THDoubleTensor* src,
                           int dimension_, long size_, long step_);

void THDoubleTensor_squeeze(THDoubleTensor* self, THDoubleTensor* src);
void THDoubleTensor_squeeze1d(THDoubleTensor* self, THDoubleTensor* src,
                              int dimension_);
void THDoubleTensor_unsqueeze1d(THDoubleTensor* self, THDoubleTensor* src,
                                int dimension_);

int THDoubleTensor_isContiguous(const THDoubleTensor* self);
int THDoubleTensor_isSameSizeAs(const THDoubleTensor* self,
                                const THDoubleTensor* src);
int THDoubleTensor_isSetTo(const THDoubleTensor* self,
                           const THDoubleTensor* src);
int THDoubleTensor_isSize(const THDoubleTensor* self,
                          const THLongStorage* dims);
ptrdiff_t THDoubleTensor_nElement(const THDoubleTensor* self);

void THDoubleTensor_retain(THDoubleTensor* self);
void THDoubleTensor_free(THDoubleTensor* self);
void THDoubleTensor_freeCopyTo(THDoubleTensor* self, THDoubleTensor* dst);

void THDoubleTensor_set1d(THDoubleTensor* tensor, long x0, double value);
void THDoubleTensor_set2d(THDoubleTensor* tensor, long x0, long x1,
                          double value);
void THDoubleTensor_set3d(THDoubleTensor* tensor, long x0, long x1, long x2,
                          double value);
void THDoubleTensor_set4d(THDoubleTensor* tensor, long x0, long x1, long x2,
                          long x3, double value);

double THDoubleTensor_get1d(const THDoubleTensor* tensor, long x0);
double THDoubleTensor_get2d(const THDoubleTensor* tensor, long x0, long x1);
double THDoubleTensor_get3d(const THDoubleTensor* tensor, long x0, long x1,
                            long x2);
double THDoubleTensor_get4d(const THDoubleTensor* tensor, long x0, long x1,
                            long x2, long x3);

THDescBuff THDoubleTensor_desc(const THDoubleTensor* tensor);
THDescBuff THDoubleTensor_sizeDesc(const THDoubleTensor* tensor);

typedef struct THByteTensor {
  long* size;
  long* stride;
  int nDimension;

  THByteStorage* storage;
  ptrdiff_t storageOffset;
  int refcount;

  char flag;

} THByteTensor;

THByteStorage* THByteTensor_storage(const THByteTensor* self);
ptrdiff_t THByteTensor_storageOffset(const THByteTensor* self);
int THByteTensor_nDimension(const THByteTensor* self);
long THByteTensor_size(const THByteTensor* self, int dim);
long THByteTensor_stride(const THByteTensor* self, int dim);
THLongStorage* THByteTensor_newSizeOf(THByteTensor* self);
THLongStorage* THByteTensor_newStrideOf(THByteTensor* self);
unsigned char* THByteTensor_data(const THByteTensor* self);

void THByteTensor_setFlag(THByteTensor* self, const char flag);
void THByteTensor_clearFlag(THByteTensor* self, const char flag);

THByteTensor* THByteTensor_new(void);
THByteTensor* THByteTensor_newWithTensor(THByteTensor* tensor);

THByteTensor* THByteTensor_newWithStorage(THByteStorage* storage_,
                                          ptrdiff_t storageOffset_,
                                          THLongStorage* size_,
                                          THLongStorage* stride_);
THByteTensor* THByteTensor_newWithStorage1d(THByteStorage* storage_,
                                            ptrdiff_t storageOffset_,
                                            long size0_, long stride0_);
THByteTensor* THByteTensor_newWithStorage2d(THByteStorage* storage_,
                                            ptrdiff_t storageOffset_,
                                            long size0_, long stride0_,
                                            long size1_, long stride1_);
THByteTensor* THByteTensor_newWithStorage3d(THByteStorage* storage_,
                                            ptrdiff_t storageOffset_,
                                            long size0_, long stride0_,
                                            long size1_, long stride1_,
                                            long size2_, long stride2_);
THByteTensor* THByteTensor_newWithStorage4d(THByteStorage* storage_,
                                            ptrdiff_t storageOffset_,
                                            long size0_, long stride0_,
                                            long size1_, long stride1_,
                                            long size2_, long stride2_,
                                            long size3_, long stride3_);

THByteTensor* THByteTensor_newWithSize(THLongStorage* size_,
                                       THLongStorage* stride_);
THByteTensor* THByteTensor_newWithSize1d(long size0_);
THByteTensor* THByteTensor_newWithSize2d(long size0_, long size1_);
THByteTensor* THByteTensor_newWithSize3d(long size0_, long size1_, long size2_);
THByteTensor* THByteTensor_newWithSize4d(long size0_, long size1_, long size2_,
                                         long size3_);

THByteTensor* THByteTensor_newClone(THByteTensor* self);
THByteTensor* THByteTensor_newContiguous(THByteTensor* tensor);
THByteTensor* THByteTensor_newSelect(THByteTensor* tensor, int dimension_,
                                     long sliceIndex_);
THByteTensor* THByteTensor_newNarrow(THByteTensor* tensor, int dimension_,
                                     long firstIndex_, long size_);
THByteTensor* THByteTensor_newTranspose(THByteTensor* tensor, int dimension1_,
                                        int dimension2_);
THByteTensor* THByteTensor_newUnfold(THByteTensor* tensor, int dimension_,
                                     long size_, long step_);
THByteTensor* THByteTensor_newView(THByteTensor* tensor, THLongStorage* size);
THByteTensor* THByteTensor_newExpand(THByteTensor* tensor, THLongStorage* size);

void THByteTensor_expand(THByteTensor* r, THByteTensor* tensor,
                         THLongStorage* size);
void THByteTensor_expandNd(THByteTensor** rets, THByteTensor** ops, int count);

void THByteTensor_resize(THByteTensor* tensor, THLongStorage* size,
                         THLongStorage* stride);
void THByteTensor_resizeAs(THByteTensor* tensor, THByteTensor* src);
void THByteTensor_resizeNd(THByteTensor* tensor, int nDimension, long* size,
                           long* stride);
void THByteTensor_resize1d(THByteTensor* tensor, long size0_);
void THByteTensor_resize2d(THByteTensor* tensor, long size0_, long size1_);
void THByteTensor_resize3d(THByteTensor* tensor, long size0_, long size1_,
                           long size2_);
void THByteTensor_resize4d(THByteTensor* tensor, long size0_, long size1_,
                           long size2_, long size3_);
void THByteTensor_resize5d(THByteTensor* tensor, long size0_, long size1_,
                           long size2_, long size3_, long size4_);

void THByteTensor_set(THByteTensor* self, THByteTensor* src);
void THByteTensor_setStorage(THByteTensor* self, THByteStorage* storage_,
                             ptrdiff_t storageOffset_, THLongStorage* size_,
                             THLongStorage* stride_);
void THByteTensor_setStorageNd(THByteTensor* self, THByteStorage* storage_,
                               ptrdiff_t storageOffset_, int nDimension,
                               long* size, long* stride);
void THByteTensor_setStorage1d(THByteTensor* self, THByteStorage* storage_,
                               ptrdiff_t storageOffset_, long size0_,
                               long stride0_);
void THByteTensor_setStorage2d(THByteTensor* self, THByteStorage* storage_,
                               ptrdiff_t storageOffset_, long size0_,
                               long stride0_, long size1_, long stride1_);
void THByteTensor_setStorage3d(THByteTensor* self, THByteStorage* storage_,
                               ptrdiff_t storageOffset_, long size0_,
                               long stride0_, long size1_, long stride1_,
                               long size2_, long stride2_);
void THByteTensor_setStorage4d(THByteTensor* self, THByteStorage* storage_,
                               ptrdiff_t storageOffset_, long size0_,
                               long stride0_, long size1_, long stride1_,
                               long size2_, long stride2_, long size3_,
                               long stride3_);

void THByteTensor_narrow(THByteTensor* self, THByteTensor* src, int dimension_,
                         long firstIndex_, long size_);
void THByteTensor_select(THByteTensor* self, THByteTensor* src, int dimension_,
                         long sliceIndex_);
void THByteTensor_transpose(THByteTensor* self, THByteTensor* src,
                            int dimension1_, int dimension2_);
void THByteTensor_unfold(THByteTensor* self, THByteTensor* src, int dimension_,
                         long size_, long step_);

void THByteTensor_squeeze(THByteTensor* self, THByteTensor* src);
void THByteTensor_squeeze1d(THByteTensor* self, THByteTensor* src,
                            int dimension_);
void THByteTensor_unsqueeze1d(THByteTensor* self, THByteTensor* src,
                              int dimension_);

int THByteTensor_isContiguous(const THByteTensor* self);
int THByteTensor_isSameSizeAs(const THByteTensor* self,
                              const THByteTensor* src);
int THByteTensor_isSetTo(const THByteTensor* self, const THByteTensor* src);
int THByteTensor_isSize(const THByteTensor* self, const THLongStorage* dims);
ptrdiff_t THByteTensor_nElement(const THByteTensor* self);

void THByteTensor_retain(THByteTensor* self);
void THByteTensor_free(THByteTensor* self);
void THByteTensor_freeCopyTo(THByteTensor* self, THByteTensor* dst);

void THByteTensor_set1d(THByteTensor* tensor, long x0, unsigned char value);
void THByteTensor_set2d(THByteTensor* tensor, long x0, long x1,
                        unsigned char value);
void THByteTensor_set3d(THByteTensor* tensor, long x0, long x1, long x2,
                        unsigned char value);
void THByteTensor_set4d(THByteTensor* tensor, long x0, long x1, long x2,
                        long x3, unsigned char value);

unsigned char THByteTensor_get1d(const THByteTensor* tensor, long x0);
unsigned char THByteTensor_get2d(const THByteTensor* tensor, long x0, long x1);
unsigned char THByteTensor_get3d(const THByteTensor* tensor, long x0, long x1,
                                 long x2);
unsigned char THByteTensor_get4d(const THByteTensor* tensor, long x0, long x1,
                                 long x2, long x3);

THDescBuff THByteTensor_desc(const THByteTensor* tensor);
THDescBuff THByteTensor_sizeDesc(const THByteTensor* tensor);

typedef struct THCharTensor {
  long* size;
  long* stride;
  int nDimension;

  THCharStorage* storage;
  ptrdiff_t storageOffset;
  int refcount;

  char flag;

} THCharTensor;

THCharStorage* THCharTensor_storage(const THCharTensor* self);
ptrdiff_t THCharTensor_storageOffset(const THCharTensor* self);
int THCharTensor_nDimension(const THCharTensor* self);
long THCharTensor_size(const THCharTensor* self, int dim);
long THCharTensor_stride(const THCharTensor* self, int dim);
THLongStorage* THCharTensor_newSizeOf(THCharTensor* self);
THLongStorage* THCharTensor_newStrideOf(THCharTensor* self);
char* THCharTensor_data(const THCharTensor* self);

void THCharTensor_setFlag(THCharTensor* self, const char flag);
void THCharTensor_clearFlag(THCharTensor* self, const char flag);

THCharTensor* THCharTensor_new(void);
THCharTensor* THCharTensor_newWithTensor(THCharTensor* tensor);

THCharTensor* THCharTensor_newWithStorage(THCharStorage* storage_,
                                          ptrdiff_t storageOffset_,
                                          THLongStorage* size_,
                                          THLongStorage* stride_);
THCharTensor* THCharTensor_newWithStorage1d(THCharStorage* storage_,
                                            ptrdiff_t storageOffset_,
                                            long size0_, long stride0_);
THCharTensor* THCharTensor_newWithStorage2d(THCharStorage* storage_,
                                            ptrdiff_t storageOffset_,
                                            long size0_, long stride0_,
                                            long size1_, long stride1_);
THCharTensor* THCharTensor_newWithStorage3d(THCharStorage* storage_,
                                            ptrdiff_t storageOffset_,
                                            long size0_, long stride0_,
                                            long size1_, long stride1_,
                                            long size2_, long stride2_);
THCharTensor* THCharTensor_newWithStorage4d(THCharStorage* storage_,
                                            ptrdiff_t storageOffset_,
                                            long size0_, long stride0_,
                                            long size1_, long stride1_,
                                            long size2_, long stride2_,
                                            long size3_, long stride3_);

THCharTensor* THCharTensor_newWithSize(THLongStorage* size_,
                                       THLongStorage* stride_);
THCharTensor* THCharTensor_newWithSize1d(long size0_);
THCharTensor* THCharTensor_newWithSize2d(long size0_, long size1_);
THCharTensor* THCharTensor_newWithSize3d(long size0_, long size1_, long size2_);
THCharTensor* THCharTensor_newWithSize4d(long size0_, long size1_, long size2_,
                                         long size3_);

THCharTensor* THCharTensor_newClone(THCharTensor* self);
THCharTensor* THCharTensor_newContiguous(THCharTensor* tensor);
THCharTensor* THCharTensor_newSelect(THCharTensor* tensor, int dimension_,
                                     long sliceIndex_);
THCharTensor* THCharTensor_newNarrow(THCharTensor* tensor, int dimension_,
                                     long firstIndex_, long size_);
THCharTensor* THCharTensor_newTranspose(THCharTensor* tensor, int dimension1_,
                                        int dimension2_);
THCharTensor* THCharTensor_newUnfold(THCharTensor* tensor, int dimension_,
                                     long size_, long step_);
THCharTensor* THCharTensor_newView(THCharTensor* tensor, THLongStorage* size);
THCharTensor* THCharTensor_newExpand(THCharTensor* tensor, THLongStorage* size);

void THCharTensor_expand(THCharTensor* r, THCharTensor* tensor,
                         THLongStorage* size);
void THCharTensor_expandNd(THCharTensor** rets, THCharTensor** ops, int count);

void THCharTensor_resize(THCharTensor* tensor, THLongStorage* size,
                         THLongStorage* stride);
void THCharTensor_resizeAs(THCharTensor* tensor, THCharTensor* src);
void THCharTensor_resizeNd(THCharTensor* tensor, int nDimension, long* size,
                           long* stride);
void THCharTensor_resize1d(THCharTensor* tensor, long size0_);
void THCharTensor_resize2d(THCharTensor* tensor, long size0_, long size1_);
void THCharTensor_resize3d(THCharTensor* tensor, long size0_, long size1_,
                           long size2_);
void THCharTensor_resize4d(THCharTensor* tensor, long size0_, long size1_,
                           long size2_, long size3_);
void THCharTensor_resize5d(THCharTensor* tensor, long size0_, long size1_,
                           long size2_, long size3_, long size4_);

void THCharTensor_set(THCharTensor* self, THCharTensor* src);
void THCharTensor_setStorage(THCharTensor* self, THCharStorage* storage_,
                             ptrdiff_t storageOffset_, THLongStorage* size_,
                             THLongStorage* stride_);
void THCharTensor_setStorageNd(THCharTensor* self, THCharStorage* storage_,
                               ptrdiff_t storageOffset_, int nDimension,
                               long* size, long* stride);
void THCharTensor_setStorage1d(THCharTensor* self, THCharStorage* storage_,
                               ptrdiff_t storageOffset_, long size0_,
                               long stride0_);
void THCharTensor_setStorage2d(THCharTensor* self, THCharStorage* storage_,
                               ptrdiff_t storageOffset_, long size0_,
                               long stride0_, long size1_, long stride1_);
void THCharTensor_setStorage3d(THCharTensor* self, THCharStorage* storage_,
                               ptrdiff_t storageOffset_, long size0_,
                               long stride0_, long size1_, long stride1_,
                               long size2_, long stride2_);
void THCharTensor_setStorage4d(THCharTensor* self, THCharStorage* storage_,
                               ptrdiff_t storageOffset_, long size0_,
                               long stride0_, long size1_, long stride1_,
                               long size2_, long stride2_, long size3_,
                               long stride3_);

void THCharTensor_narrow(THCharTensor* self, THCharTensor* src, int dimension_,
                         long firstIndex_, long size_);
void THCharTensor_select(THCharTensor* self, THCharTensor* src, int dimension_,
                         long sliceIndex_);
void THCharTensor_transpose(THCharTensor* self, THCharTensor* src,
                            int dimension1_, int dimension2_);
void THCharTensor_unfold(THCharTensor* self, THCharTensor* src, int dimension_,
                         long size_, long step_);

void THCharTensor_squeeze(THCharTensor* self, THCharTensor* src);
void THCharTensor_squeeze1d(THCharTensor* self, THCharTensor* src,
                            int dimension_);
void THCharTensor_unsqueeze1d(THCharTensor* self, THCharTensor* src,
                              int dimension_);

int THCharTensor_isContiguous(const THCharTensor* self);
int THCharTensor_isSameSizeAs(const THCharTensor* self,
                              const THCharTensor* src);
int THCharTensor_isSetTo(const THCharTensor* self, const THCharTensor* src);
int THCharTensor_isSize(const THCharTensor* self, const THLongStorage* dims);
ptrdiff_t THCharTensor_nElement(const THCharTensor* self);

void THCharTensor_retain(THCharTensor* self);
void THCharTensor_free(THCharTensor* self);
void THCharTensor_freeCopyTo(THCharTensor* self, THCharTensor* dst);

void THCharTensor_set1d(THCharTensor* tensor, long x0, char value);
void THCharTensor_set2d(THCharTensor* tensor, long x0, long x1, char value);
void THCharTensor_set3d(THCharTensor* tensor, long x0, long x1, long x2,
                        char value);
void THCharTensor_set4d(THCharTensor* tensor, long x0, long x1, long x2,
                        long x3, char value);

char THCharTensor_get1d(const THCharTensor* tensor, long x0);
char THCharTensor_get2d(const THCharTensor* tensor, long x0, long x1);
char THCharTensor_get3d(const THCharTensor* tensor, long x0, long x1, long x2);
char THCharTensor_get4d(const THCharTensor* tensor, long x0, long x1, long x2,
                        long x3);

THDescBuff THCharTensor_desc(const THCharTensor* tensor);
THDescBuff THCharTensor_sizeDesc(const THCharTensor* tensor);

typedef struct THShortTensor {
  long* size;
  long* stride;
  int nDimension;

  THShortStorage* storage;
  ptrdiff_t storageOffset;
  int refcount;

  char flag;

} THShortTensor;

THShortStorage* THShortTensor_storage(const THShortTensor* self);
ptrdiff_t THShortTensor_storageOffset(const THShortTensor* self);
int THShortTensor_nDimension(const THShortTensor* self);
long THShortTensor_size(const THShortTensor* self, int dim);
long THShortTensor_stride(const THShortTensor* self, int dim);
THLongStorage* THShortTensor_newSizeOf(THShortTensor* self);
THLongStorage* THShortTensor_newStrideOf(THShortTensor* self);
short* THShortTensor_data(const THShortTensor* self);

void THShortTensor_setFlag(THShortTensor* self, const char flag);
void THShortTensor_clearFlag(THShortTensor* self, const char flag);

THShortTensor* THShortTensor_new(void);
THShortTensor* THShortTensor_newWithTensor(THShortTensor* tensor);

THShortTensor* THShortTensor_newWithStorage(THShortStorage* storage_,
                                            ptrdiff_t storageOffset_,
                                            THLongStorage* size_,
                                            THLongStorage* stride_);
THShortTensor* THShortTensor_newWithStorage1d(THShortStorage* storage_,
                                              ptrdiff_t storageOffset_,
                                              long size0_, long stride0_);
THShortTensor* THShortTensor_newWithStorage2d(THShortStorage* storage_,
                                              ptrdiff_t storageOffset_,
                                              long size0_, long stride0_,
                                              long size1_, long stride1_);
THShortTensor* THShortTensor_newWithStorage3d(THShortStorage* storage_,
                                              ptrdiff_t storageOffset_,
                                              long size0_, long stride0_,
                                              long size1_, long stride1_,
                                              long size2_, long stride2_);
THShortTensor* THShortTensor_newWithStorage4d(THShortStorage* storage_,
                                              ptrdiff_t storageOffset_,
                                              long size0_, long stride0_,
                                              long size1_, long stride1_,
                                              long size2_, long stride2_,
                                              long size3_, long stride3_);

THShortTensor* THShortTensor_newWithSize(THLongStorage* size_,
                                         THLongStorage* stride_);
THShortTensor* THShortTensor_newWithSize1d(long size0_);
THShortTensor* THShortTensor_newWithSize2d(long size0_, long size1_);
THShortTensor* THShortTensor_newWithSize3d(long size0_, long size1_,
                                           long size2_);
THShortTensor* THShortTensor_newWithSize4d(long size0_, long size1_,
                                           long size2_, long size3_);

THShortTensor* THShortTensor_newClone(THShortTensor* self);
THShortTensor* THShortTensor_newContiguous(THShortTensor* tensor);
THShortTensor* THShortTensor_newSelect(THShortTensor* tensor, int dimension_,
                                       long sliceIndex_);
THShortTensor* THShortTensor_newNarrow(THShortTensor* tensor, int dimension_,
                                       long firstIndex_, long size_);
THShortTensor* THShortTensor_newTranspose(THShortTensor* tensor,
                                          int dimension1_, int dimension2_);
THShortTensor* THShortTensor_newUnfold(THShortTensor* tensor, int dimension_,
                                       long size_, long step_);
THShortTensor* THShortTensor_newView(THShortTensor* tensor,
                                     THLongStorage* size);
THShortTensor* THShortTensor_newExpand(THShortTensor* tensor,
                                       THLongStorage* size);

void THShortTensor_expand(THShortTensor* r, THShortTensor* tensor,
                          THLongStorage* size);
void THShortTensor_expandNd(THShortTensor** rets, THShortTensor** ops,
                            int count);

void THShortTensor_resize(THShortTensor* tensor, THLongStorage* size,
                          THLongStorage* stride);
void THShortTensor_resizeAs(THShortTensor* tensor, THShortTensor* src);
void THShortTensor_resizeNd(THShortTensor* tensor, int nDimension, long* size,
                            long* stride);
void THShortTensor_resize1d(THShortTensor* tensor, long size0_);
void THShortTensor_resize2d(THShortTensor* tensor, long size0_, long size1_);
void THShortTensor_resize3d(THShortTensor* tensor, long size0_, long size1_,
                            long size2_);
void THShortTensor_resize4d(THShortTensor* tensor, long size0_, long size1_,
                            long size2_, long size3_);
void THShortTensor_resize5d(THShortTensor* tensor, long size0_, long size1_,
                            long size2_, long size3_, long size4_);

void THShortTensor_set(THShortTensor* self, THShortTensor* src);
void THShortTensor_setStorage(THShortTensor* self, THShortStorage* storage_,
                              ptrdiff_t storageOffset_, THLongStorage* size_,
                              THLongStorage* stride_);
void THShortTensor_setStorageNd(THShortTensor* self, THShortStorage* storage_,
                                ptrdiff_t storageOffset_, int nDimension,
                                long* size, long* stride);
void THShortTensor_setStorage1d(THShortTensor* self, THShortStorage* storage_,
                                ptrdiff_t storageOffset_, long size0_,
                                long stride0_);
void THShortTensor_setStorage2d(THShortTensor* self, THShortStorage* storage_,
                                ptrdiff_t storageOffset_, long size0_,
                                long stride0_, long size1_, long stride1_);
void THShortTensor_setStorage3d(THShortTensor* self, THShortStorage* storage_,
                                ptrdiff_t storageOffset_, long size0_,
                                long stride0_, long size1_, long stride1_,
                                long size2_, long stride2_);
void THShortTensor_setStorage4d(THShortTensor* self, THShortStorage* storage_,
                                ptrdiff_t storageOffset_, long size0_,
                                long stride0_, long size1_, long stride1_,
                                long size2_, long stride2_, long size3_,
                                long stride3_);

void THShortTensor_narrow(THShortTensor* self, THShortTensor* src,
                          int dimension_, long firstIndex_, long size_);
void THShortTensor_select(THShortTensor* self, THShortTensor* src,
                          int dimension_, long sliceIndex_);
void THShortTensor_transpose(THShortTensor* self, THShortTensor* src,
                             int dimension1_, int dimension2_);
void THShortTensor_unfold(THShortTensor* self, THShortTensor* src,
                          int dimension_, long size_, long step_);

void THShortTensor_squeeze(THShortTensor* self, THShortTensor* src);
void THShortTensor_squeeze1d(THShortTensor* self, THShortTensor* src,
                             int dimension_);
void THShortTensor_unsqueeze1d(THShortTensor* self, THShortTensor* src,
                               int dimension_);

int THShortTensor_isContiguous(const THShortTensor* self);
int THShortTensor_isSameSizeAs(const THShortTensor* self,
                               const THShortTensor* src);
int THShortTensor_isSetTo(const THShortTensor* self, const THShortTensor* src);
int THShortTensor_isSize(const THShortTensor* self, const THLongStorage* dims);
ptrdiff_t THShortTensor_nElement(const THShortTensor* self);

void THShortTensor_retain(THShortTensor* self);
void THShortTensor_free(THShortTensor* self);
void THShortTensor_freeCopyTo(THShortTensor* self, THShortTensor* dst);

void THShortTensor_set1d(THShortTensor* tensor, long x0, short value);
void THShortTensor_set2d(THShortTensor* tensor, long x0, long x1, short value);
void THShortTensor_set3d(THShortTensor* tensor, long x0, long x1, long x2,
                         short value);
void THShortTensor_set4d(THShortTensor* tensor, long x0, long x1, long x2,
                         long x3, short value);

short THShortTensor_get1d(const THShortTensor* tensor, long x0);
short THShortTensor_get2d(const THShortTensor* tensor, long x0, long x1);
short THShortTensor_get3d(const THShortTensor* tensor, long x0, long x1,
                          long x2);
short THShortTensor_get4d(const THShortTensor* tensor, long x0, long x1,
                          long x2, long x3);

THDescBuff THShortTensor_desc(const THShortTensor* tensor);
THDescBuff THShortTensor_sizeDesc(const THShortTensor* tensor);

typedef struct THIntTensor {
  long* size;
  long* stride;
  int nDimension;

  THIntStorage* storage;
  ptrdiff_t storageOffset;
  int refcount;

  char flag;

} THIntTensor;

THIntStorage* THIntTensor_storage(const THIntTensor* self);
ptrdiff_t THIntTensor_storageOffset(const THIntTensor* self);
int THIntTensor_nDimension(const THIntTensor* self);
long THIntTensor_size(const THIntTensor* self, int dim);
long THIntTensor_stride(const THIntTensor* self, int dim);
THLongStorage* THIntTensor_newSizeOf(THIntTensor* self);
THLongStorage* THIntTensor_newStrideOf(THIntTensor* self);
int* THIntTensor_data(const THIntTensor* self);

void THIntTensor_setFlag(THIntTensor* self, const char flag);
void THIntTensor_clearFlag(THIntTensor* self, const char flag);

THIntTensor* THIntTensor_new(void);
THIntTensor* THIntTensor_newWithTensor(THIntTensor* tensor);

THIntTensor* THIntTensor_newWithStorage(THIntStorage* storage_,
                                        ptrdiff_t storageOffset_,
                                        THLongStorage* size_,
                                        THLongStorage* stride_);
THIntTensor* THIntTensor_newWithStorage1d(THIntStorage* storage_,
                                          ptrdiff_t storageOffset_, long size0_,
                                          long stride0_);
THIntTensor* THIntTensor_newWithStorage2d(THIntStorage* storage_,
                                          ptrdiff_t storageOffset_, long size0_,
                                          long stride0_, long size1_,
                                          long stride1_);
THIntTensor* THIntTensor_newWithStorage3d(THIntStorage* storage_,
                                          ptrdiff_t storageOffset_, long size0_,
                                          long stride0_, long size1_,
                                          long stride1_, long size2_,
                                          long stride2_);
THIntTensor* THIntTensor_newWithStorage4d(THIntStorage* storage_,
                                          ptrdiff_t storageOffset_, long size0_,
                                          long stride0_, long size1_,
                                          long stride1_, long size2_,
                                          long stride2_, long size3_,
                                          long stride3_);

THIntTensor* THIntTensor_newWithSize(THLongStorage* size_,
                                     THLongStorage* stride_);
THIntTensor* THIntTensor_newWithSize1d(long size0_);
THIntTensor* THIntTensor_newWithSize2d(long size0_, long size1_);
THIntTensor* THIntTensor_newWithSize3d(long size0_, long size1_, long size2_);
THIntTensor* THIntTensor_newWithSize4d(long size0_, long size1_, long size2_,
                                       long size3_);

THIntTensor* THIntTensor_newClone(THIntTensor* self);
THIntTensor* THIntTensor_newContiguous(THIntTensor* tensor);
THIntTensor* THIntTensor_newSelect(THIntTensor* tensor, int dimension_,
                                   long sliceIndex_);
THIntTensor* THIntTensor_newNarrow(THIntTensor* tensor, int dimension_,
                                   long firstIndex_, long size_);
THIntTensor* THIntTensor_newTranspose(THIntTensor* tensor, int dimension1_,
                                      int dimension2_);
THIntTensor* THIntTensor_newUnfold(THIntTensor* tensor, int dimension_,
                                   long size_, long step_);
THIntTensor* THIntTensor_newView(THIntTensor* tensor, THLongStorage* size);
THIntTensor* THIntTensor_newExpand(THIntTensor* tensor, THLongStorage* size);

void THIntTensor_expand(THIntTensor* r, THIntTensor* tensor,
                        THLongStorage* size);
void THIntTensor_expandNd(THIntTensor** rets, THIntTensor** ops, int count);

void THIntTensor_resize(THIntTensor* tensor, THLongStorage* size,
                        THLongStorage* stride);
void THIntTensor_resizeAs(THIntTensor* tensor, THIntTensor* src);
void THIntTensor_resizeNd(THIntTensor* tensor, int nDimension, long* size,
                          long* stride);
void THIntTensor_resize1d(THIntTensor* tensor, long size0_);
void THIntTensor_resize2d(THIntTensor* tensor, long size0_, long size1_);
void THIntTensor_resize3d(THIntTensor* tensor, long size0_, long size1_,
                          long size2_);
void THIntTensor_resize4d(THIntTensor* tensor, long size0_, long size1_,
                          long size2_, long size3_);
void THIntTensor_resize5d(THIntTensor* tensor, long size0_, long size1_,
                          long size2_, long size3_, long size4_);

void THIntTensor_set(THIntTensor* self, THIntTensor* src);
void THIntTensor_setStorage(THIntTensor* self, THIntStorage* storage_,
                            ptrdiff_t storageOffset_, THLongStorage* size_,
                            THLongStorage* stride_);
void THIntTensor_setStorageNd(THIntTensor* self, THIntStorage* storage_,
                              ptrdiff_t storageOffset_, int nDimension,
                              long* size, long* stride);
void THIntTensor_setStorage1d(THIntTensor* self, THIntStorage* storage_,
                              ptrdiff_t storageOffset_, long size0_,
                              long stride0_);
void THIntTensor_setStorage2d(THIntTensor* self, THIntStorage* storage_,
                              ptrdiff_t storageOffset_, long size0_,
                              long stride0_, long size1_, long stride1_);
void THIntTensor_setStorage3d(THIntTensor* self, THIntStorage* storage_,
                              ptrdiff_t storageOffset_, long size0_,
                              long stride0_, long size1_, long stride1_,
                              long size2_, long stride2_);
void THIntTensor_setStorage4d(THIntTensor* self, THIntStorage* storage_,
                              ptrdiff_t storageOffset_, long size0_,
                              long stride0_, long size1_, long stride1_,
                              long size2_, long stride2_, long size3_,
                              long stride3_);

void THIntTensor_narrow(THIntTensor* self, THIntTensor* src, int dimension_,
                        long firstIndex_, long size_);
void THIntTensor_select(THIntTensor* self, THIntTensor* src, int dimension_,
                        long sliceIndex_);
void THIntTensor_transpose(THIntTensor* self, THIntTensor* src, int dimension1_,
                           int dimension2_);
void THIntTensor_unfold(THIntTensor* self, THIntTensor* src, int dimension_,
                        long size_, long step_);

void THIntTensor_squeeze(THIntTensor* self, THIntTensor* src);
void THIntTensor_squeeze1d(THIntTensor* self, THIntTensor* src, int dimension_);
void THIntTensor_unsqueeze1d(THIntTensor* self, THIntTensor* src,
                             int dimension_);

int THIntTensor_isContiguous(const THIntTensor* self);
int THIntTensor_isSameSizeAs(const THIntTensor* self, const THIntTensor* src);
int THIntTensor_isSetTo(const THIntTensor* self, const THIntTensor* src);
int THIntTensor_isSize(const THIntTensor* self, const THLongStorage* dims);
ptrdiff_t THIntTensor_nElement(const THIntTensor* self);

void THIntTensor_retain(THIntTensor* self);
void THIntTensor_free(THIntTensor* self);
void THIntTensor_freeCopyTo(THIntTensor* self, THIntTensor* dst);

void THIntTensor_set1d(THIntTensor* tensor, long x0, int value);
void THIntTensor_set2d(THIntTensor* tensor, long x0, long x1, int value);
void THIntTensor_set3d(THIntTensor* tensor, long x0, long x1, long x2,
                       int value);
void THIntTensor_set4d(THIntTensor* tensor, long x0, long x1, long x2, long x3,
                       int value);

int THIntTensor_get1d(const THIntTensor* tensor, long x0);
int THIntTensor_get2d(const THIntTensor* tensor, long x0, long x1);
int THIntTensor_get3d(const THIntTensor* tensor, long x0, long x1, long x2);
int THIntTensor_get4d(const THIntTensor* tensor, long x0, long x1, long x2,
                      long x3);

THDescBuff THIntTensor_desc(const THIntTensor* tensor);
THDescBuff THIntTensor_sizeDesc(const THIntTensor* tensor);

typedef struct THLongTensor {
  long* size;
  long* stride;
  int nDimension;

  THLongStorage* storage;
  ptrdiff_t storageOffset;
  int refcount;

  char flag;

} THLongTensor;

THLongStorage* THLongTensor_storage(const THLongTensor* self);
ptrdiff_t THLongTensor_storageOffset(const THLongTensor* self);
int THLongTensor_nDimension(const THLongTensor* self);
long THLongTensor_size(const THLongTensor* self, int dim);
long THLongTensor_stride(const THLongTensor* self, int dim);
THLongStorage* THLongTensor_newSizeOf(THLongTensor* self);
THLongStorage* THLongTensor_newStrideOf(THLongTensor* self);
long* THLongTensor_data(const THLongTensor* self);

void THLongTensor_setFlag(THLongTensor* self, const char flag);
void THLongTensor_clearFlag(THLongTensor* self, const char flag);

THLongTensor* THLongTensor_new(void);
THLongTensor* THLongTensor_newWithTensor(THLongTensor* tensor);

THLongTensor* THLongTensor_newWithStorage(THLongStorage* storage_,
                                          ptrdiff_t storageOffset_,
                                          THLongStorage* size_,
                                          THLongStorage* stride_);
THLongTensor* THLongTensor_newWithStorage1d(THLongStorage* storage_,
                                            ptrdiff_t storageOffset_,
                                            long size0_, long stride0_);
THLongTensor* THLongTensor_newWithStorage2d(THLongStorage* storage_,
                                            ptrdiff_t storageOffset_,
                                            long size0_, long stride0_,
                                            long size1_, long stride1_);
THLongTensor* THLongTensor_newWithStorage3d(THLongStorage* storage_,
                                            ptrdiff_t storageOffset_,
                                            long size0_, long stride0_,
                                            long size1_, long stride1_,
                                            long size2_, long stride2_);
THLongTensor* THLongTensor_newWithStorage4d(THLongStorage* storage_,
                                            ptrdiff_t storageOffset_,
                                            long size0_, long stride0_,
                                            long size1_, long stride1_,
                                            long size2_, long stride2_,
                                            long size3_, long stride3_);

THLongTensor* THLongTensor_newWithSize(THLongStorage* size_,
                                       THLongStorage* stride_);
THLongTensor* THLongTensor_newWithSize1d(long size0_);
THLongTensor* THLongTensor_newWithSize2d(long size0_, long size1_);
THLongTensor* THLongTensor_newWithSize3d(long size0_, long size1_, long size2_);
THLongTensor* THLongTensor_newWithSize4d(long size0_, long size1_, long size2_,
                                         long size3_);

THLongTensor* THLongTensor_newClone(THLongTensor* self);
THLongTensor* THLongTensor_newContiguous(THLongTensor* tensor);
THLongTensor* THLongTensor_newSelect(THLongTensor* tensor, int dimension_,
                                     long sliceIndex_);
THLongTensor* THLongTensor_newNarrow(THLongTensor* tensor, int dimension_,
                                     long firstIndex_, long size_);
THLongTensor* THLongTensor_newTranspose(THLongTensor* tensor, int dimension1_,
                                        int dimension2_);
THLongTensor* THLongTensor_newUnfold(THLongTensor* tensor, int dimension_,
                                     long size_, long step_);
THLongTensor* THLongTensor_newView(THLongTensor* tensor, THLongStorage* size);
THLongTensor* THLongTensor_newExpand(THLongTensor* tensor, THLongStorage* size);

void THLongTensor_expand(THLongTensor* r, THLongTensor* tensor,
                         THLongStorage* size);
void THLongTensor_expandNd(THLongTensor** rets, THLongTensor** ops, int count);

void THLongTensor_resize(THLongTensor* tensor, THLongStorage* size,
                         THLongStorage* stride);
void THLongTensor_resizeAs(THLongTensor* tensor, THLongTensor* src);
void THLongTensor_resizeNd(THLongTensor* tensor, int nDimension, long* size,
                           long* stride);
void THLongTensor_resize1d(THLongTensor* tensor, long size0_);
void THLongTensor_resize2d(THLongTensor* tensor, long size0_, long size1_);
void THLongTensor_resize3d(THLongTensor* tensor, long size0_, long size1_,
                           long size2_);
void THLongTensor_resize4d(THLongTensor* tensor, long size0_, long size1_,
                           long size2_, long size3_);
void THLongTensor_resize5d(THLongTensor* tensor, long size0_, long size1_,
                           long size2_, long size3_, long size4_);

void THLongTensor_set(THLongTensor* self, THLongTensor* src);
void THLongTensor_setStorage(THLongTensor* self, THLongStorage* storage_,
                             ptrdiff_t storageOffset_, THLongStorage* size_,
                             THLongStorage* stride_);
void THLongTensor_setStorageNd(THLongTensor* self, THLongStorage* storage_,
                               ptrdiff_t storageOffset_, int nDimension,
                               long* size, long* stride);
void THLongTensor_setStorage1d(THLongTensor* self, THLongStorage* storage_,
                               ptrdiff_t storageOffset_, long size0_,
                               long stride0_);
void THLongTensor_setStorage2d(THLongTensor* self, THLongStorage* storage_,
                               ptrdiff_t storageOffset_, long size0_,
                               long stride0_, long size1_, long stride1_);
void THLongTensor_setStorage3d(THLongTensor* self, THLongStorage* storage_,
                               ptrdiff_t storageOffset_, long size0_,
                               long stride0_, long size1_, long stride1_,
                               long size2_, long stride2_);
void THLongTensor_setStorage4d(THLongTensor* self, THLongStorage* storage_,
                               ptrdiff_t storageOffset_, long size0_,
                               long stride0_, long size1_, long stride1_,
                               long size2_, long stride2_, long size3_,
                               long stride3_);

void THLongTensor_narrow(THLongTensor* self, THLongTensor* src, int dimension_,
                         long firstIndex_, long size_);
void THLongTensor_select(THLongTensor* self, THLongTensor* src, int dimension_,
                         long sliceIndex_);
void THLongTensor_transpose(THLongTensor* self, THLongTensor* src,
                            int dimension1_, int dimension2_);
void THLongTensor_unfold(THLongTensor* self, THLongTensor* src, int dimension_,
                         long size_, long step_);

void THLongTensor_squeeze(THLongTensor* self, THLongTensor* src);
void THLongTensor_squeeze1d(THLongTensor* self, THLongTensor* src,
                            int dimension_);
void THLongTensor_unsqueeze1d(THLongTensor* self, THLongTensor* src,
                              int dimension_);

int THLongTensor_isContiguous(const THLongTensor* self);
int THLongTensor_isSameSizeAs(const THLongTensor* self,
                              const THLongTensor* src);
int THLongTensor_isSetTo(const THLongTensor* self, const THLongTensor* src);
int THLongTensor_isSize(const THLongTensor* self, const THLongStorage* dims);
ptrdiff_t THLongTensor_nElement(const THLongTensor* self);

void THLongTensor_retain(THLongTensor* self);
void THLongTensor_free(THLongTensor* self);
void THLongTensor_freeCopyTo(THLongTensor* self, THLongTensor* dst);

void THLongTensor_set1d(THLongTensor* tensor, long x0, long value);
void THLongTensor_set2d(THLongTensor* tensor, long x0, long x1, long value);
void THLongTensor_set3d(THLongTensor* tensor, long x0, long x1, long x2,
                        long value);
void THLongTensor_set4d(THLongTensor* tensor, long x0, long x1, long x2,
                        long x3, long value);

long THLongTensor_get1d(const THLongTensor* tensor, long x0);
long THLongTensor_get2d(const THLongTensor* tensor, long x0, long x1);
long THLongTensor_get3d(const THLongTensor* tensor, long x0, long x1, long x2);
long THLongTensor_get4d(const THLongTensor* tensor, long x0, long x1, long x2,
                        long x3);

THDescBuff THLongTensor_desc(const THLongTensor* tensor);
THDescBuff THLongTensor_sizeDesc(const THLongTensor* tensor);

typedef struct THHalfTensor {
  long* size;
  long* stride;
  int nDimension;

  THHalfStorage* storage;
  ptrdiff_t storageOffset;
  int refcount;

  char flag;

} THHalfTensor;

THHalfStorage* THHalfTensor_storage(const THHalfTensor* self);
ptrdiff_t THHalfTensor_storageOffset(const THHalfTensor* self);
int THHalfTensor_nDimension(const THHalfTensor* self);
long THHalfTensor_size(const THHalfTensor* self, int dim);
long THHalfTensor_stride(const THHalfTensor* self, int dim);
THLongStorage* THHalfTensor_newSizeOf(THHalfTensor* self);
THLongStorage* THHalfTensor_newStrideOf(THHalfTensor* self);
THHalf* THHalfTensor_data(const THHalfTensor* self);

void THHalfTensor_setFlag(THHalfTensor* self, const char flag);
void THHalfTensor_clearFlag(THHalfTensor* self, const char flag);

THHalfTensor* THHalfTensor_new(void);
THHalfTensor* THHalfTensor_newWithTensor(THHalfTensor* tensor);

THHalfTensor* THHalfTensor_newWithStorage(THHalfStorage* storage_,
                                          ptrdiff_t storageOffset_,
                                          THLongStorage* size_,
                                          THLongStorage* stride_);
THHalfTensor* THHalfTensor_newWithStorage1d(THHalfStorage* storage_,
                                            ptrdiff_t storageOffset_,
                                            long size0_, long stride0_);
THHalfTensor* THHalfTensor_newWithStorage2d(THHalfStorage* storage_,
                                            ptrdiff_t storageOffset_,
                                            long size0_, long stride0_,
                                            long size1_, long stride1_);
THHalfTensor* THHalfTensor_newWithStorage3d(THHalfStorage* storage_,
                                            ptrdiff_t storageOffset_,
                                            long size0_, long stride0_,
                                            long size1_, long stride1_,
                                            long size2_, long stride2_);
THHalfTensor* THHalfTensor_newWithStorage4d(THHalfStorage* storage_,
                                            ptrdiff_t storageOffset_,
                                            long size0_, long stride0_,
                                            long size1_, long stride1_,
                                            long size2_, long stride2_,
                                            long size3_, long stride3_);

THHalfTensor* THHalfTensor_newWithSize(THLongStorage* size_,
                                       THLongStorage* stride_);
THHalfTensor* THHalfTensor_newWithSize1d(long size0_);
THHalfTensor* THHalfTensor_newWithSize2d(long size0_, long size1_);
THHalfTensor* THHalfTensor_newWithSize3d(long size0_, long size1_, long size2_);
THHalfTensor* THHalfTensor_newWithSize4d(long size0_, long size1_, long size2_,
                                         long size3_);

THHalfTensor* THHalfTensor_newClone(THHalfTensor* self);
THHalfTensor* THHalfTensor_newContiguous(THHalfTensor* tensor);
THHalfTensor* THHalfTensor_newSelect(THHalfTensor* tensor, int dimension_,
                                     long sliceIndex_);
THHalfTensor* THHalfTensor_newNarrow(THHalfTensor* tensor, int dimension_,
                                     long firstIndex_, long size_);
THHalfTensor* THHalfTensor_newTranspose(THHalfTensor* tensor, int dimension1_,
                                        int dimension2_);
THHalfTensor* THHalfTensor_newUnfold(THHalfTensor* tensor, int dimension_,
                                     long size_, long step_);
THHalfTensor* THHalfTensor_newView(THHalfTensor* tensor, THLongStorage* size);
THHalfTensor* THHalfTensor_newExpand(THHalfTensor* tensor, THLongStorage* size);

void THHalfTensor_expand(THHalfTensor* r, THHalfTensor* tensor,
                         THLongStorage* size);
void THHalfTensor_expandNd(THHalfTensor** rets, THHalfTensor** ops, int count);

void THHalfTensor_resize(THHalfTensor* tensor, THLongStorage* size,
                         THLongStorage* stride);
void THHalfTensor_resizeAs(THHalfTensor* tensor, THHalfTensor* src);
void THHalfTensor_resizeNd(THHalfTensor* tensor, int nDimension, long* size,
                           long* stride);
void THHalfTensor_resize1d(THHalfTensor* tensor, long size0_);
void THHalfTensor_resize2d(THHalfTensor* tensor, long size0_, long size1_);
void THHalfTensor_resize3d(THHalfTensor* tensor, long size0_, long size1_,
                           long size2_);
void THHalfTensor_resize4d(THHalfTensor* tensor, long size0_, long size1_,
                           long size2_, long size3_);
void THHalfTensor_resize5d(THHalfTensor* tensor, long size0_, long size1_,
                           long size2_, long size3_, long size4_);

void THHalfTensor_set(THHalfTensor* self, THHalfTensor* src);
void THHalfTensor_setStorage(THHalfTensor* self, THHalfStorage* storage_,
                             ptrdiff_t storageOffset_, THLongStorage* size_,
                             THLongStorage* stride_);
void THHalfTensor_setStorageNd(THHalfTensor* self, THHalfStorage* storage_,
                               ptrdiff_t storageOffset_, int nDimension,
                               long* size, long* stride);
void THHalfTensor_setStorage1d(THHalfTensor* self, THHalfStorage* storage_,
                               ptrdiff_t storageOffset_, long size0_,
                               long stride0_);
void THHalfTensor_setStorage2d(THHalfTensor* self, THHalfStorage* storage_,
                               ptrdiff_t storageOffset_, long size0_,
                               long stride0_, long size1_, long stride1_);
void THHalfTensor_setStorage3d(THHalfTensor* self, THHalfStorage* storage_,
                               ptrdiff_t storageOffset_, long size0_,
                               long stride0_, long size1_, long stride1_,
                               long size2_, long stride2_);
void THHalfTensor_setStorage4d(THHalfTensor* self, THHalfStorage* storage_,
                               ptrdiff_t storageOffset_, long size0_,
                               long stride0_, long size1_, long stride1_,
                               long size2_, long stride2_, long size3_,
                               long stride3_);

void THHalfTensor_narrow(THHalfTensor* self, THHalfTensor* src, int dimension_,
                         long firstIndex_, long size_);
void THHalfTensor_select(THHalfTensor* self, THHalfTensor* src, int dimension_,
                         long sliceIndex_);
void THHalfTensor_transpose(THHalfTensor* self, THHalfTensor* src,
                            int dimension1_, int dimension2_);
void THHalfTensor_unfold(THHalfTensor* self, THHalfTensor* src, int dimension_,
                         long size_, long step_);

void THHalfTensor_squeeze(THHalfTensor* self, THHalfTensor* src);
void THHalfTensor_squeeze1d(THHalfTensor* self, THHalfTensor* src,
                            int dimension_);
void THHalfTensor_unsqueeze1d(THHalfTensor* self, THHalfTensor* src,
                              int dimension_);

int THHalfTensor_isContiguous(const THHalfTensor* self);
int THHalfTensor_isSameSizeAs(const THHalfTensor* self,
                              const THHalfTensor* src);
int THHalfTensor_isSetTo(const THHalfTensor* self, const THHalfTensor* src);
int THHalfTensor_isSize(const THHalfTensor* self, const THLongStorage* dims);
ptrdiff_t THHalfTensor_nElement(const THHalfTensor* self);

void THHalfTensor_retain(THHalfTensor* self);
void THHalfTensor_free(THHalfTensor* self);
void THHalfTensor_freeCopyTo(THHalfTensor* self, THHalfTensor* dst);

void THHalfTensor_set1d(THHalfTensor* tensor, long x0, THHalf value);
void THHalfTensor_set2d(THHalfTensor* tensor, long x0, long x1, THHalf value);
void THHalfTensor_set3d(THHalfTensor* tensor, long x0, long x1, long x2,
                        THHalf value);
void THHalfTensor_set4d(THHalfTensor* tensor, long x0, long x1, long x2,
                        long x3, THHalf value);

THHalf THHalfTensor_get1d(const THHalfTensor* tensor, long x0);
THHalf THHalfTensor_get2d(const THHalfTensor* tensor, long x0, long x1);
THHalf THHalfTensor_get3d(const THHalfTensor* tensor, long x0, long x1,
                          long x2);
THHalf THHalfTensor_get4d(const THHalfTensor* tensor, long x0, long x1, long x2,
                          long x3);

THDescBuff THHalfTensor_desc(const THHalfTensor* tensor);
THDescBuff THHalfTensor_sizeDesc(const THHalfTensor* tensor);

void THFloatTensor_copy(THFloatTensor* tensor, THFloatTensor* src);
void THFloatTensor_copyByte(THFloatTensor* tensor, struct THByteTensor* src);
void THFloatTensor_copyChar(THFloatTensor* tensor, struct THCharTensor* src);
void THFloatTensor_copyShort(THFloatTensor* tensor, struct THShortTensor* src);
void THFloatTensor_copyInt(THFloatTensor* tensor, struct THIntTensor* src);
void THFloatTensor_copyLong(THFloatTensor* tensor, struct THLongTensor* src);
void THFloatTensor_copyFloat(THFloatTensor* tensor, struct THFloatTensor* src);
void THFloatTensor_copyDouble(THFloatTensor* tensor,
                              struct THDoubleTensor* src);
void THFloatTensor_copyHalf(THFloatTensor* tensor, struct THHalfTensor* src);

void THDoubleTensor_copy(THDoubleTensor* tensor, THDoubleTensor* src);
void THDoubleTensor_copyByte(THDoubleTensor* tensor, struct THByteTensor* src);
void THDoubleTensor_copyChar(THDoubleTensor* tensor, struct THCharTensor* src);
void THDoubleTensor_copyShort(THDoubleTensor* tensor,
                              struct THShortTensor* src);
void THDoubleTensor_copyInt(THDoubleTensor* tensor, struct THIntTensor* src);
void THDoubleTensor_copyLong(THDoubleTensor* tensor, struct THLongTensor* src);
void THDoubleTensor_copyFloat(THDoubleTensor* tensor,
                              struct THFloatTensor* src);
void THDoubleTensor_copyDouble(THDoubleTensor* tensor,
                               struct THDoubleTensor* src);
void THDoubleTensor_copyHalf(THDoubleTensor* tensor, struct THHalfTensor* src);

void THByteTensor_copy(THByteTensor* tensor, THByteTensor* src);
void THByteTensor_copyByte(THByteTensor* tensor, struct THByteTensor* src);
void THByteTensor_copyChar(THByteTensor* tensor, struct THCharTensor* src);
void THByteTensor_copyShort(THByteTensor* tensor, struct THShortTensor* src);
void THByteTensor_copyInt(THByteTensor* tensor, struct THIntTensor* src);
void THByteTensor_copyLong(THByteTensor* tensor, struct THLongTensor* src);
void THByteTensor_copyFloat(THByteTensor* tensor, struct THFloatTensor* src);
void THByteTensor_copyDouble(THByteTensor* tensor, struct THDoubleTensor* src);
void THByteTensor_copyHalf(THByteTensor* tensor, struct THHalfTensor* src);

void THCharTensor_copy(THCharTensor* tensor, THCharTensor* src);
void THCharTensor_copyByte(THCharTensor* tensor, struct THByteTensor* src);
void THCharTensor_copyChar(THCharTensor* tensor, struct THCharTensor* src);
void THCharTensor_copyShort(THCharTensor* tensor, struct THShortTensor* src);
void THCharTensor_copyInt(THCharTensor* tensor, struct THIntTensor* src);
void THCharTensor_copyLong(THCharTensor* tensor, struct THLongTensor* src);
void THCharTensor_copyFloat(THCharTensor* tensor, struct THFloatTensor* src);
void THCharTensor_copyDouble(THCharTensor* tensor, struct THDoubleTensor* src);
void THCharTensor_copyHalf(THCharTensor* tensor, struct THHalfTensor* src);

void THShortTensor_copy(THShortTensor* tensor, THShortTensor* src);
void THShortTensor_copyByte(THShortTensor* tensor, struct THByteTensor* src);
void THShortTensor_copyChar(THShortTensor* tensor, struct THCharTensor* src);
void THShortTensor_copyShort(THShortTensor* tensor, struct THShortTensor* src);
void THShortTensor_copyInt(THShortTensor* tensor, struct THIntTensor* src);
void THShortTensor_copyLong(THShortTensor* tensor, struct THLongTensor* src);
void THShortTensor_copyFloat(THShortTensor* tensor, struct THFloatTensor* src);
void THShortTensor_copyDouble(THShortTensor* tensor,
                              struct THDoubleTensor* src);
void THShortTensor_copyHalf(THShortTensor* tensor, struct THHalfTensor* src);

void THIntTensor_copy(THIntTensor* tensor, THIntTensor* src);
void THIntTensor_copyByte(THIntTensor* tensor, struct THByteTensor* src);
void THIntTensor_copyChar(THIntTensor* tensor, struct THCharTensor* src);
void THIntTensor_copyShort(THIntTensor* tensor, struct THShortTensor* src);
void THIntTensor_copyInt(THIntTensor* tensor, struct THIntTensor* src);
void THIntTensor_copyLong(THIntTensor* tensor, struct THLongTensor* src);
void THIntTensor_copyFloat(THIntTensor* tensor, struct THFloatTensor* src);
void THIntTensor_copyDouble(THIntTensor* tensor, struct THDoubleTensor* src);
void THIntTensor_copyHalf(THIntTensor* tensor, struct THHalfTensor* src);

void THLongTensor_copy(THLongTensor* tensor, THLongTensor* src);
void THLongTensor_copyByte(THLongTensor* tensor, struct THByteTensor* src);
void THLongTensor_copyChar(THLongTensor* tensor, struct THCharTensor* src);
void THLongTensor_copyShort(THLongTensor* tensor, struct THShortTensor* src);
void THLongTensor_copyInt(THLongTensor* tensor, struct THIntTensor* src);
void THLongTensor_copyLong(THLongTensor* tensor, struct THLongTensor* src);
void THLongTensor_copyFloat(THLongTensor* tensor, struct THFloatTensor* src);
void THLongTensor_copyDouble(THLongTensor* tensor, struct THDoubleTensor* src);
void THLongTensor_copyHalf(THLongTensor* tensor, struct THHalfTensor* src);

void THHalfTensor_copy(THHalfTensor* tensor, THHalfTensor* src);
void THHalfTensor_copyByte(THHalfTensor* tensor, struct THByteTensor* src);
void THHalfTensor_copyChar(THHalfTensor* tensor, struct THCharTensor* src);
void THHalfTensor_copyShort(THHalfTensor* tensor, struct THShortTensor* src);
void THHalfTensor_copyInt(THHalfTensor* tensor, struct THIntTensor* src);
void THHalfTensor_copyLong(THHalfTensor* tensor, struct THLongTensor* src);
void THHalfTensor_copyFloat(THHalfTensor* tensor, struct THFloatTensor* src);
void THHalfTensor_copyDouble(THHalfTensor* tensor, struct THDoubleTensor* src);
void THHalfTensor_copyHalf(THHalfTensor* tensor, struct THHalfTensor* src);

typedef struct THGenerator {
  unsigned long the_initial_seed;
  int left;
  int seeded;
  unsigned long next;
  unsigned long state[624];

  double normal_x;
  double normal_y;
  double normal_rho;
  int normal_is_valid;
} THGenerator;

THGenerator* THGenerator_new(void);
THGenerator* THGenerator_copy(THGenerator* self, THGenerator* from);
void THGenerator_free(THGenerator* gen);

int THGenerator_isValid(THGenerator* _generator);

unsigned long THRandom_seed(THGenerator* _generator);

void THRandom_manualSeed(THGenerator* _generator, unsigned long the_seed_);

unsigned long THRandom_initialSeed(THGenerator* _generator);

unsigned long THRandom_random(THGenerator* _generator);

double THRandom_uniform(THGenerator* _generator, double a, double b);

double THRandom_normal(THGenerator* _generator, double mean, double stdv);

double THRandom_exponential(THGenerator* _generator, double lambda);

double THRandom_cauchy(THGenerator* _generator, double median, double sigma);

double THRandom_logNormal(THGenerator* _generator, double mean, double stdv);

int THRandom_geometric(THGenerator* _generator, double p);

int THRandom_bernoulli(THGenerator* _generator, double p);

void THFloatTensor_random(THFloatTensor* self, THGenerator* _generator);
void THFloatTensor_clampedRandom(THFloatTensor* self, THGenerator* _generator,
                                 long min, long max);
void THFloatTensor_cappedRandom(THFloatTensor* self, THGenerator* _generator,
                                long max);
void THFloatTensor_geometric(THFloatTensor* self, THGenerator* _generator,
                             double p);
void THFloatTensor_bernoulli(THFloatTensor* self, THGenerator* _generator,
                             double p);
void THFloatTensor_bernoulli_FloatTensor(THFloatTensor* self,
                                         THGenerator* _generator,
                                         THFloatTensor* p);
void THFloatTensor_bernoulli_DoubleTensor(THFloatTensor* self,
                                          THGenerator* _generator,
                                          THDoubleTensor* p);

void THFloatTensor_uniform(THFloatTensor* self, THGenerator* _generator,
                           double a, double b);
void THFloatTensor_normal(THFloatTensor* self, THGenerator* _generator,
                          double mean, double stdv);
void THFloatTensor_normal_means(THFloatTensor* self, THGenerator* gen,
                                THFloatTensor* means, double stddev);
void THFloatTensor_normal_stddevs(THFloatTensor* self, THGenerator* gen,
                                  double mean, THFloatTensor* stddevs);
void THFloatTensor_normal_means_stddevs(THFloatTensor* self, THGenerator* gen,
                                        THFloatTensor* means,
                                        THFloatTensor* stddevs);
void THFloatTensor_exponential(THFloatTensor* self, THGenerator* _generator,
                               double lambda);
void THFloatTensor_cauchy(THFloatTensor* self, THGenerator* _generator,
                          double median, double sigma);
void THFloatTensor_logNormal(THFloatTensor* self, THGenerator* _generator,
                             double mean, double stdv);
void THFloatTensor_multinomial(THLongTensor* self, THGenerator* _generator,
                               THFloatTensor* prob_dist, int n_sample,
                               int with_replacement);
void THFloatTensor_multinomialAliasSetup(THFloatTensor* prob_dist,
                                         THLongTensor* J, THFloatTensor* q);
void THFloatTensor_multinomialAliasDraw(THLongTensor* self,
                                        THGenerator* _generator,
                                        THLongTensor* J, THFloatTensor* q);

void THDoubleTensor_random(THDoubleTensor* self, THGenerator* _generator);
void THDoubleTensor_clampedRandom(THDoubleTensor* self, THGenerator* _generator,
                                  long min, long max);
void THDoubleTensor_cappedRandom(THDoubleTensor* self, THGenerator* _generator,
                                 long max);
void THDoubleTensor_geometric(THDoubleTensor* self, THGenerator* _generator,
                              double p);
void THDoubleTensor_bernoulli(THDoubleTensor* self, THGenerator* _generator,
                              double p);
void THDoubleTensor_bernoulli_FloatTensor(THDoubleTensor* self,
                                          THGenerator* _generator,
                                          THFloatTensor* p);
void THDoubleTensor_bernoulli_DoubleTensor(THDoubleTensor* self,
                                           THGenerator* _generator,
                                           THDoubleTensor* p);

void THDoubleTensor_uniform(THDoubleTensor* self, THGenerator* _generator,
                            double a, double b);
void THDoubleTensor_normal(THDoubleTensor* self, THGenerator* _generator,
                           double mean, double stdv);
void THDoubleTensor_normal_means(THDoubleTensor* self, THGenerator* gen,
                                 THDoubleTensor* means, double stddev);
void THDoubleTensor_normal_stddevs(THDoubleTensor* self, THGenerator* gen,
                                   double mean, THDoubleTensor* stddevs);
void THDoubleTensor_normal_means_stddevs(THDoubleTensor* self, THGenerator* gen,
                                         THDoubleTensor* means,
                                         THDoubleTensor* stddevs);
void THDoubleTensor_exponential(THDoubleTensor* self, THGenerator* _generator,
                                double lambda);
void THDoubleTensor_cauchy(THDoubleTensor* self, THGenerator* _generator,
                           double median, double sigma);
void THDoubleTensor_logNormal(THDoubleTensor* self, THGenerator* _generator,
                              double mean, double stdv);
void THDoubleTensor_multinomial(THLongTensor* self, THGenerator* _generator,
                                THDoubleTensor* prob_dist, int n_sample,
                                int with_replacement);
void THDoubleTensor_multinomialAliasSetup(THDoubleTensor* prob_dist,
                                          THLongTensor* J, THDoubleTensor* q);
void THDoubleTensor_multinomialAliasDraw(THLongTensor* self,
                                         THGenerator* _generator,
                                         THLongTensor* J, THDoubleTensor* q);

void THByteTensor_random(THByteTensor* self, THGenerator* _generator);
void THByteTensor_clampedRandom(THByteTensor* self, THGenerator* _generator,
                                long min, long max);
void THByteTensor_cappedRandom(THByteTensor* self, THGenerator* _generator,
                               long max);
void THByteTensor_geometric(THByteTensor* self, THGenerator* _generator,
                            double p);
void THByteTensor_bernoulli(THByteTensor* self, THGenerator* _generator,
                            double p);
void THByteTensor_bernoulli_FloatTensor(THByteTensor* self,
                                        THGenerator* _generator,
                                        THFloatTensor* p);
void THByteTensor_bernoulli_DoubleTensor(THByteTensor* self,
                                         THGenerator* _generator,
                                         THDoubleTensor* p);
void THByteTensor_getRNGState(THGenerator* _generator, THByteTensor* self);
void THByteTensor_setRNGState(THGenerator* _generator, THByteTensor* self);

void THCharTensor_random(THCharTensor* self, THGenerator* _generator);
void THCharTensor_clampedRandom(THCharTensor* self, THGenerator* _generator,
                                long min, long max);
void THCharTensor_cappedRandom(THCharTensor* self, THGenerator* _generator,
                               long max);
void THCharTensor_geometric(THCharTensor* self, THGenerator* _generator,
                            double p);
void THCharTensor_bernoulli(THCharTensor* self, THGenerator* _generator,
                            double p);
void THCharTensor_bernoulli_FloatTensor(THCharTensor* self,
                                        THGenerator* _generator,
                                        THFloatTensor* p);
void THCharTensor_bernoulli_DoubleTensor(THCharTensor* self,
                                         THGenerator* _generator,
                                         THDoubleTensor* p);

void THShortTensor_random(THShortTensor* self, THGenerator* _generator);
void THShortTensor_clampedRandom(THShortTensor* self, THGenerator* _generator,
                                 long min, long max);
void THShortTensor_cappedRandom(THShortTensor* self, THGenerator* _generator,
                                long max);
void THShortTensor_geometric(THShortTensor* self, THGenerator* _generator,
                             double p);
void THShortTensor_bernoulli(THShortTensor* self, THGenerator* _generator,
                             double p);
void THShortTensor_bernoulli_FloatTensor(THShortTensor* self,
                                         THGenerator* _generator,
                                         THFloatTensor* p);
void THShortTensor_bernoulli_DoubleTensor(THShortTensor* self,
                                          THGenerator* _generator,
                                          THDoubleTensor* p);

void THIntTensor_random(THIntTensor* self, THGenerator* _generator);
void THIntTensor_clampedRandom(THIntTensor* self, THGenerator* _generator,
                               long min, long max);
void THIntTensor_cappedRandom(THIntTensor* self, THGenerator* _generator,
                              long max);
void THIntTensor_geometric(THIntTensor* self, THGenerator* _generator,
                           double p);
void THIntTensor_bernoulli(THIntTensor* self, THGenerator* _generator,
                           double p);
void THIntTensor_bernoulli_FloatTensor(THIntTensor* self,
                                       THGenerator* _generator,
                                       THFloatTensor* p);
void THIntTensor_bernoulli_DoubleTensor(THIntTensor* self,
                                        THGenerator* _generator,
                                        THDoubleTensor* p);

void THLongTensor_random(THLongTensor* self, THGenerator* _generator);
void THLongTensor_clampedRandom(THLongTensor* self, THGenerator* _generator,
                                long min, long max);
void THLongTensor_cappedRandom(THLongTensor* self, THGenerator* _generator,
                               long max);
void THLongTensor_geometric(THLongTensor* self, THGenerator* _generator,
                            double p);
void THLongTensor_bernoulli(THLongTensor* self, THGenerator* _generator,
                            double p);
void THLongTensor_bernoulli_FloatTensor(THLongTensor* self,
                                        THGenerator* _generator,
                                        THFloatTensor* p);
void THLongTensor_bernoulli_DoubleTensor(THLongTensor* self,
                                         THGenerator* _generator,
                                         THDoubleTensor* p);

void THFloatTensor_fill(THFloatTensor* r_, float value);
void THFloatTensor_zero(THFloatTensor* r_);

void THFloatTensor_maskedFill(THFloatTensor* tensor, THByteTensor* mask,
                              float value);
void THFloatTensor_maskedCopy(THFloatTensor* tensor, THByteTensor* mask,
                              THFloatTensor* src);
void THFloatTensor_maskedSelect(THFloatTensor* tensor, THFloatTensor* src,
                                THByteTensor* mask);

void THFloatTensor_nonzero(THLongTensor* subscript, THFloatTensor* tensor);

void THFloatTensor_indexSelect(THFloatTensor* tensor, THFloatTensor* src,
                               int dim, THLongTensor* index);
void THFloatTensor_indexCopy(THFloatTensor* tensor, int dim,
                             THLongTensor* index, THFloatTensor* src);
void THFloatTensor_indexAdd(THFloatTensor* tensor, int dim, THLongTensor* index,
                            THFloatTensor* src);
void THFloatTensor_indexFill(THFloatTensor* tensor, int dim,
                             THLongTensor* index, float val);

void THFloatTensor_gather(THFloatTensor* tensor, THFloatTensor* src, int dim,
                          THLongTensor* index);
void THFloatTensor_scatter(THFloatTensor* tensor, int dim, THLongTensor* index,
                           THFloatTensor* src);
void THFloatTensor_scatterAdd(THFloatTensor* tensor, int dim,
                              THLongTensor* index, THFloatTensor* src);
void THFloatTensor_scatterFill(THFloatTensor* tensor, int dim,
                               THLongTensor* index, float val);

double THFloatTensor_dot(THFloatTensor* t, THFloatTensor* src);

float THFloatTensor_minall(THFloatTensor* t);
float THFloatTensor_maxall(THFloatTensor* t);
float THFloatTensor_medianall(THFloatTensor* t);
double THFloatTensor_sumall(THFloatTensor* t);
double THFloatTensor_prodall(THFloatTensor* t);

void THFloatTensor_neg(THFloatTensor* self, THFloatTensor* src);
void THFloatTensor_cinv(THFloatTensor* self, THFloatTensor* src);

void THFloatTensor_add(THFloatTensor* r_, THFloatTensor* t, float value);
void THFloatTensor_sub(THFloatTensor* self, THFloatTensor* src, float value);
void THFloatTensor_mul(THFloatTensor* r_, THFloatTensor* t, float value);
void THFloatTensor_div(THFloatTensor* r_, THFloatTensor* t, float value);
void THFloatTensor_lshift(THFloatTensor* r_, THFloatTensor* t, float value);
void THFloatTensor_rshift(THFloatTensor* r_, THFloatTensor* t, float value);
void THFloatTensor_fmod(THFloatTensor* r_, THFloatTensor* t, float value);
void THFloatTensor_remainder(THFloatTensor* r_, THFloatTensor* t, float value);
void THFloatTensor_clamp(THFloatTensor* r_, THFloatTensor* t, float min_value,
                         float max_value);
void THFloatTensor_bitand(THFloatTensor* r_, THFloatTensor* t, float value);
void THFloatTensor_bitor(THFloatTensor* r_, THFloatTensor* t, float value);
void THFloatTensor_bitxor(THFloatTensor* r_, THFloatTensor* t, float value);

void THFloatTensor_cadd(THFloatTensor* r_, THFloatTensor* t, float value,
                        THFloatTensor* src);
void THFloatTensor_csub(THFloatTensor* self, THFloatTensor* src1, float value,
                        THFloatTensor* src2);
void THFloatTensor_cmul(THFloatTensor* r_, THFloatTensor* t,
                        THFloatTensor* src);
void THFloatTensor_cpow(THFloatTensor* r_, THFloatTensor* t,
                        THFloatTensor* src);
void THFloatTensor_cdiv(THFloatTensor* r_, THFloatTensor* t,
                        THFloatTensor* src);
void THFloatTensor_clshift(THFloatTensor* r_, THFloatTensor* t,
                           THFloatTensor* src);
void THFloatTensor_crshift(THFloatTensor* r_, THFloatTensor* t,
                           THFloatTensor* src);
void THFloatTensor_cfmod(THFloatTensor* r_, THFloatTensor* t,
                         THFloatTensor* src);
void THFloatTensor_cremainder(THFloatTensor* r_, THFloatTensor* t,
                              THFloatTensor* src);
void THFloatTensor_cbitand(THFloatTensor* r_, THFloatTensor* t,
                           THFloatTensor* src);
void THFloatTensor_cbitor(THFloatTensor* r_, THFloatTensor* t,
                          THFloatTensor* src);
void THFloatTensor_cbitxor(THFloatTensor* r_, THFloatTensor* t,
                           THFloatTensor* src);

void THFloatTensor_addcmul(THFloatTensor* r_, THFloatTensor* t, float value,
                           THFloatTensor* src1, THFloatTensor* src2);
void THFloatTensor_addcdiv(THFloatTensor* r_, THFloatTensor* t, float value,
                           THFloatTensor* src1, THFloatTensor* src2);

void THFloatTensor_addmv(THFloatTensor* r_, float beta, THFloatTensor* t,
                         float alpha, THFloatTensor* mat, THFloatTensor* vec);
void THFloatTensor_addmm(THFloatTensor* r_, float beta, THFloatTensor* t,
                         float alpha, THFloatTensor* mat1, THFloatTensor* mat2);
void THFloatTensor_addr(THFloatTensor* r_, float beta, THFloatTensor* t,
                        float alpha, THFloatTensor* vec1, THFloatTensor* vec2);

void THFloatTensor_addbmm(THFloatTensor* r_, float beta, THFloatTensor* t,
                          float alpha, THFloatTensor* batch1,
                          THFloatTensor* batch2);
void THFloatTensor_baddbmm(THFloatTensor* r_, float beta, THFloatTensor* t,
                           float alpha, THFloatTensor* batch1,
                           THFloatTensor* batch2);

void THFloatTensor_match(THFloatTensor* r_, THFloatTensor* m1,
                         THFloatTensor* m2, float gain);

ptrdiff_t THFloatTensor_numel(THFloatTensor* t);
void THFloatTensor_max(THFloatTensor* values_, THLongTensor* indices_,
                       THFloatTensor* t, int dimension, int keepdim);
void THFloatTensor_min(THFloatTensor* values_, THLongTensor* indices_,
                       THFloatTensor* t, int dimension, int keepdim);
void THFloatTensor_kthvalue(THFloatTensor* values_, THLongTensor* indices_,
                            THFloatTensor* t, long k, int dimension,
                            int keepdim);
void THFloatTensor_mode(THFloatTensor* values_, THLongTensor* indices_,
                        THFloatTensor* t, int dimension, int keepdim);
void THFloatTensor_median(THFloatTensor* values_, THLongTensor* indices_,
                          THFloatTensor* t, int dimension, int keepdim);
void THFloatTensor_sum(THFloatTensor* r_, THFloatTensor* t, int dimension,
                       int keepdim);
void THFloatTensor_prod(THFloatTensor* r_, THFloatTensor* t, int dimension,
                        int keepdim);
void THFloatTensor_cumsum(THFloatTensor* r_, THFloatTensor* t, int dimension);
void THFloatTensor_cumprod(THFloatTensor* r_, THFloatTensor* t, int dimension);
void THFloatTensor_sign(THFloatTensor* r_, THFloatTensor* t);
double THFloatTensor_trace(THFloatTensor* t);
void THFloatTensor_cross(THFloatTensor* r_, THFloatTensor* a, THFloatTensor* b,
                         int dimension);

void THFloatTensor_cmax(THFloatTensor* r, THFloatTensor* t, THFloatTensor* src);
void THFloatTensor_cmin(THFloatTensor* r, THFloatTensor* t, THFloatTensor* src);
void THFloatTensor_cmaxValue(THFloatTensor* r, THFloatTensor* t, float value);
void THFloatTensor_cminValue(THFloatTensor* r, THFloatTensor* t, float value);

void THFloatTensor_zeros(THFloatTensor* r_, THLongStorage* size);
void THFloatTensor_zerosLike(THFloatTensor* r_, THFloatTensor* input);
void THFloatTensor_ones(THFloatTensor* r_, THLongStorage* size);
void THFloatTensor_onesLike(THFloatTensor* r_, THFloatTensor* input);
void THFloatTensor_diag(THFloatTensor* r_, THFloatTensor* t, int k);
void THFloatTensor_eye(THFloatTensor* r_, long n, long m);
void THFloatTensor_arange(THFloatTensor* r_, double xmin, double xmax,
                          double step);
void THFloatTensor_range(THFloatTensor* r_, double xmin, double xmax,
                         double step);
void THFloatTensor_randperm(THFloatTensor* r_, THGenerator* _generator, long n);

void THFloatTensor_reshape(THFloatTensor* r_, THFloatTensor* t,
                           THLongStorage* size);
void THFloatTensor_sort(THFloatTensor* rt_, THLongTensor* ri_, THFloatTensor* t,
                        int dimension, int descendingOrder);
void THFloatTensor_topk(THFloatTensor* rt_, THLongTensor* ri_, THFloatTensor* t,
                        long k, int dim, int dir, int sorted);
void THFloatTensor_tril(THFloatTensor* r_, THFloatTensor* t, long k);
void THFloatTensor_triu(THFloatTensor* r_, THFloatTensor* t, long k);
void THFloatTensor_cat(THFloatTensor* r_, THFloatTensor* ta, THFloatTensor* tb,
                       int dimension);
void THFloatTensor_catArray(THFloatTensor* result, THFloatTensor** inputs,
                            int numInputs, int dimension);

int THFloatTensor_equal(THFloatTensor* ta, THFloatTensor* tb);

void THFloatTensor_ltValue(THByteTensor* r_, THFloatTensor* t, float value);
void THFloatTensor_leValue(THByteTensor* r_, THFloatTensor* t, float value);
void THFloatTensor_gtValue(THByteTensor* r_, THFloatTensor* t, float value);
void THFloatTensor_geValue(THByteTensor* r_, THFloatTensor* t, float value);
void THFloatTensor_neValue(THByteTensor* r_, THFloatTensor* t, float value);
void THFloatTensor_eqValue(THByteTensor* r_, THFloatTensor* t, float value);

void THFloatTensor_ltValueT(THFloatTensor* r_, THFloatTensor* t, float value);
void THFloatTensor_leValueT(THFloatTensor* r_, THFloatTensor* t, float value);
void THFloatTensor_gtValueT(THFloatTensor* r_, THFloatTensor* t, float value);
void THFloatTensor_geValueT(THFloatTensor* r_, THFloatTensor* t, float value);
void THFloatTensor_neValueT(THFloatTensor* r_, THFloatTensor* t, float value);
void THFloatTensor_eqValueT(THFloatTensor* r_, THFloatTensor* t, float value);

void THFloatTensor_ltTensor(THByteTensor* r_, THFloatTensor* ta,
                            THFloatTensor* tb);
void THFloatTensor_leTensor(THByteTensor* r_, THFloatTensor* ta,
                            THFloatTensor* tb);
void THFloatTensor_gtTensor(THByteTensor* r_, THFloatTensor* ta,
                            THFloatTensor* tb);
void THFloatTensor_geTensor(THByteTensor* r_, THFloatTensor* ta,
                            THFloatTensor* tb);
void THFloatTensor_neTensor(THByteTensor* r_, THFloatTensor* ta,
                            THFloatTensor* tb);
void THFloatTensor_eqTensor(THByteTensor* r_, THFloatTensor* ta,
                            THFloatTensor* tb);

void THFloatTensor_ltTensorT(THFloatTensor* r_, THFloatTensor* ta,
                             THFloatTensor* tb);
void THFloatTensor_leTensorT(THFloatTensor* r_, THFloatTensor* ta,
                             THFloatTensor* tb);
void THFloatTensor_gtTensorT(THFloatTensor* r_, THFloatTensor* ta,
                             THFloatTensor* tb);
void THFloatTensor_geTensorT(THFloatTensor* r_, THFloatTensor* ta,
                             THFloatTensor* tb);
void THFloatTensor_neTensorT(THFloatTensor* r_, THFloatTensor* ta,
                             THFloatTensor* tb);
void THFloatTensor_eqTensorT(THFloatTensor* r_, THFloatTensor* ta,
                             THFloatTensor* tb);

void THFloatTensor_sigmoid(THFloatTensor* r_, THFloatTensor* t);
void THFloatTensor_log(THFloatTensor* r_, THFloatTensor* t);
void THFloatTensor_lgamma(THFloatTensor* r_, THFloatTensor* t);
void THFloatTensor_log1p(THFloatTensor* r_, THFloatTensor* t);
void THFloatTensor_exp(THFloatTensor* r_, THFloatTensor* t);
void THFloatTensor_cos(THFloatTensor* r_, THFloatTensor* t);
void THFloatTensor_acos(THFloatTensor* r_, THFloatTensor* t);
void THFloatTensor_cosh(THFloatTensor* r_, THFloatTensor* t);
void THFloatTensor_sin(THFloatTensor* r_, THFloatTensor* t);
void THFloatTensor_asin(THFloatTensor* r_, THFloatTensor* t);
void THFloatTensor_sinh(THFloatTensor* r_, THFloatTensor* t);
void THFloatTensor_tan(THFloatTensor* r_, THFloatTensor* t);
void THFloatTensor_atan(THFloatTensor* r_, THFloatTensor* t);
void THFloatTensor_atan2(THFloatTensor* r_, THFloatTensor* tx,
                         THFloatTensor* ty);
void THFloatTensor_tanh(THFloatTensor* r_, THFloatTensor* t);
void THFloatTensor_pow(THFloatTensor* r_, THFloatTensor* t, float value);
void THFloatTensor_tpow(THFloatTensor* r_, float value, THFloatTensor* t);
void THFloatTensor_sqrt(THFloatTensor* r_, THFloatTensor* t);
void THFloatTensor_rsqrt(THFloatTensor* r_, THFloatTensor* t);
void THFloatTensor_ceil(THFloatTensor* r_, THFloatTensor* t);
void THFloatTensor_floor(THFloatTensor* r_, THFloatTensor* t);
void THFloatTensor_round(THFloatTensor* r_, THFloatTensor* t);
void THFloatTensor_abs(THFloatTensor* r_, THFloatTensor* t);
void THFloatTensor_trunc(THFloatTensor* r_, THFloatTensor* t);
void THFloatTensor_frac(THFloatTensor* r_, THFloatTensor* t);
void THFloatTensor_lerp(THFloatTensor* r_, THFloatTensor* a, THFloatTensor* b,
                        float weight);

void THFloatTensor_mean(THFloatTensor* r_, THFloatTensor* t, int dimension,
                        int keepdim);
void THFloatTensor_std(THFloatTensor* r_, THFloatTensor* t, int dimension,
                       int biased, int keepdim);
void THFloatTensor_var(THFloatTensor* r_, THFloatTensor* t, int dimension,
                       int biased, int keepdim);
void THFloatTensor_norm(THFloatTensor* r_, THFloatTensor* t, float value,
                        int dimension, int keepdim);
void THFloatTensor_renorm(THFloatTensor* r_, THFloatTensor* t, float value,
                          int dimension, float maxnorm);
double THFloatTensor_dist(THFloatTensor* a, THFloatTensor* b, float value);
void THFloatTensor_histc(THFloatTensor* hist, THFloatTensor* tensor, long nbins,
                         float minvalue, float maxvalue);
void THFloatTensor_bhistc(THFloatTensor* hist, THFloatTensor* tensor,
                          long nbins, float minvalue, float maxvalue);

double THFloatTensor_meanall(THFloatTensor* self);
double THFloatTensor_varall(THFloatTensor* self, int biased);
double THFloatTensor_stdall(THFloatTensor* self, int biased);
double THFloatTensor_normall(THFloatTensor* t, float value);

void THFloatTensor_linspace(THFloatTensor* r_, float a, float b, long n);
void THFloatTensor_logspace(THFloatTensor* r_, float a, float b, long n);
void THFloatTensor_rand(THFloatTensor* r_, THGenerator* _generator,
                        THLongStorage* size);
void THFloatTensor_randn(THFloatTensor* r_, THGenerator* _generator,
                         THLongStorage* size);

void THDoubleTensor_fill(THDoubleTensor* r_, double value);
void THDoubleTensor_zero(THDoubleTensor* r_);

void THDoubleTensor_maskedFill(THDoubleTensor* tensor, THByteTensor* mask,
                               double value);
void THDoubleTensor_maskedCopy(THDoubleTensor* tensor, THByteTensor* mask,
                               THDoubleTensor* src);
void THDoubleTensor_maskedSelect(THDoubleTensor* tensor, THDoubleTensor* src,
                                 THByteTensor* mask);

void THDoubleTensor_nonzero(THLongTensor* subscript, THDoubleTensor* tensor);

void THDoubleTensor_indexSelect(THDoubleTensor* tensor, THDoubleTensor* src,
                                int dim, THLongTensor* index);
void THDoubleTensor_indexCopy(THDoubleTensor* tensor, int dim,
                              THLongTensor* index, THDoubleTensor* src);
void THDoubleTensor_indexAdd(THDoubleTensor* tensor, int dim,
                             THLongTensor* index, THDoubleTensor* src);
void THDoubleTensor_indexFill(THDoubleTensor* tensor, int dim,
                              THLongTensor* index, double val);

void THDoubleTensor_gather(THDoubleTensor* tensor, THDoubleTensor* src, int dim,
                           THLongTensor* index);
void THDoubleTensor_scatter(THDoubleTensor* tensor, int dim,
                            THLongTensor* index, THDoubleTensor* src);
void THDoubleTensor_scatterAdd(THDoubleTensor* tensor, int dim,
                               THLongTensor* index, THDoubleTensor* src);
void THDoubleTensor_scatterFill(THDoubleTensor* tensor, int dim,
                                THLongTensor* index, double val);

double THDoubleTensor_dot(THDoubleTensor* t, THDoubleTensor* src);

double THDoubleTensor_minall(THDoubleTensor* t);
double THDoubleTensor_maxall(THDoubleTensor* t);
double THDoubleTensor_medianall(THDoubleTensor* t);
double THDoubleTensor_sumall(THDoubleTensor* t);
double THDoubleTensor_prodall(THDoubleTensor* t);

void THDoubleTensor_neg(THDoubleTensor* self, THDoubleTensor* src);
void THDoubleTensor_cinv(THDoubleTensor* self, THDoubleTensor* src);

void THDoubleTensor_add(THDoubleTensor* r_, THDoubleTensor* t, double value);
void THDoubleTensor_sub(THDoubleTensor* self, THDoubleTensor* src,
                        double value);
void THDoubleTensor_mul(THDoubleTensor* r_, THDoubleTensor* t, double value);
void THDoubleTensor_div(THDoubleTensor* r_, THDoubleTensor* t, double value);
void THDoubleTensor_lshift(THDoubleTensor* r_, THDoubleTensor* t, double value);
void THDoubleTensor_rshift(THDoubleTensor* r_, THDoubleTensor* t, double value);
void THDoubleTensor_fmod(THDoubleTensor* r_, THDoubleTensor* t, double value);
void THDoubleTensor_remainder(THDoubleTensor* r_, THDoubleTensor* t,
                              double value);
void THDoubleTensor_clamp(THDoubleTensor* r_, THDoubleTensor* t,
                          double min_value, double max_value);
void THDoubleTensor_bitand(THDoubleTensor* r_, THDoubleTensor* t, double value);
void THDoubleTensor_bitor(THDoubleTensor* r_, THDoubleTensor* t, double value);
void THDoubleTensor_bitxor(THDoubleTensor* r_, THDoubleTensor* t, double value);

void THDoubleTensor_cadd(THDoubleTensor* r_, THDoubleTensor* t, double value,
                         THDoubleTensor* src);
void THDoubleTensor_csub(THDoubleTensor* self, THDoubleTensor* src1,
                         double value, THDoubleTensor* src2);
void THDoubleTensor_cmul(THDoubleTensor* r_, THDoubleTensor* t,
                         THDoubleTensor* src);
void THDoubleTensor_cpow(THDoubleTensor* r_, THDoubleTensor* t,
                         THDoubleTensor* src);
void THDoubleTensor_cdiv(THDoubleTensor* r_, THDoubleTensor* t,
                         THDoubleTensor* src);
void THDoubleTensor_clshift(THDoubleTensor* r_, THDoubleTensor* t,
                            THDoubleTensor* src);
void THDoubleTensor_crshift(THDoubleTensor* r_, THDoubleTensor* t,
                            THDoubleTensor* src);
void THDoubleTensor_cfmod(THDoubleTensor* r_, THDoubleTensor* t,
                          THDoubleTensor* src);
void THDoubleTensor_cremainder(THDoubleTensor* r_, THDoubleTensor* t,
                               THDoubleTensor* src);
void THDoubleTensor_cbitand(THDoubleTensor* r_, THDoubleTensor* t,
                            THDoubleTensor* src);
void THDoubleTensor_cbitor(THDoubleTensor* r_, THDoubleTensor* t,
                           THDoubleTensor* src);
void THDoubleTensor_cbitxor(THDoubleTensor* r_, THDoubleTensor* t,
                            THDoubleTensor* src);

void THDoubleTensor_addcmul(THDoubleTensor* r_, THDoubleTensor* t, double value,
                            THDoubleTensor* src1, THDoubleTensor* src2);
void THDoubleTensor_addcdiv(THDoubleTensor* r_, THDoubleTensor* t, double value,
                            THDoubleTensor* src1, THDoubleTensor* src2);

void THDoubleTensor_addmv(THDoubleTensor* r_, double beta, THDoubleTensor* t,
                          double alpha, THDoubleTensor* mat,
                          THDoubleTensor* vec);
void THDoubleTensor_addmm(THDoubleTensor* r_, double beta, THDoubleTensor* t,
                          double alpha, THDoubleTensor* mat1,
                          THDoubleTensor* mat2);
void THDoubleTensor_addr(THDoubleTensor* r_, double beta, THDoubleTensor* t,
                         double alpha, THDoubleTensor* vec1,
                         THDoubleTensor* vec2);

void THDoubleTensor_addbmm(THDoubleTensor* r_, double beta, THDoubleTensor* t,
                           double alpha, THDoubleTensor* batch1,
                           THDoubleTensor* batch2);
void THDoubleTensor_baddbmm(THDoubleTensor* r_, double beta, THDoubleTensor* t,
                            double alpha, THDoubleTensor* batch1,
                            THDoubleTensor* batch2);

void THDoubleTensor_match(THDoubleTensor* r_, THDoubleTensor* m1,
                          THDoubleTensor* m2, double gain);

ptrdiff_t THDoubleTensor_numel(THDoubleTensor* t);
void THDoubleTensor_max(THDoubleTensor* values_, THLongTensor* indices_,
                        THDoubleTensor* t, int dimension, int keepdim);
void THDoubleTensor_min(THDoubleTensor* values_, THLongTensor* indices_,
                        THDoubleTensor* t, int dimension, int keepdim);
void THDoubleTensor_kthvalue(THDoubleTensor* values_, THLongTensor* indices_,
                             THDoubleTensor* t, long k, int dimension,
                             int keepdim);
void THDoubleTensor_mode(THDoubleTensor* values_, THLongTensor* indices_,
                         THDoubleTensor* t, int dimension, int keepdim);
void THDoubleTensor_median(THDoubleTensor* values_, THLongTensor* indices_,
                           THDoubleTensor* t, int dimension, int keepdim);
void THDoubleTensor_sum(THDoubleTensor* r_, THDoubleTensor* t, int dimension,
                        int keepdim);
void THDoubleTensor_prod(THDoubleTensor* r_, THDoubleTensor* t, int dimension,
                         int keepdim);
void THDoubleTensor_cumsum(THDoubleTensor* r_, THDoubleTensor* t,
                           int dimension);
void THDoubleTensor_cumprod(THDoubleTensor* r_, THDoubleTensor* t,
                            int dimension);
void THDoubleTensor_sign(THDoubleTensor* r_, THDoubleTensor* t);
double THDoubleTensor_trace(THDoubleTensor* t);
void THDoubleTensor_cross(THDoubleTensor* r_, THDoubleTensor* a,
                          THDoubleTensor* b, int dimension);

void THDoubleTensor_cmax(THDoubleTensor* r, THDoubleTensor* t,
                         THDoubleTensor* src);
void THDoubleTensor_cmin(THDoubleTensor* r, THDoubleTensor* t,
                         THDoubleTensor* src);
void THDoubleTensor_cmaxValue(THDoubleTensor* r, THDoubleTensor* t,
                              double value);
void THDoubleTensor_cminValue(THDoubleTensor* r, THDoubleTensor* t,
                              double value);

void THDoubleTensor_zeros(THDoubleTensor* r_, THLongStorage* size);
void THDoubleTensor_zerosLike(THDoubleTensor* r_, THDoubleTensor* input);
void THDoubleTensor_ones(THDoubleTensor* r_, THLongStorage* size);
void THDoubleTensor_onesLike(THDoubleTensor* r_, THDoubleTensor* input);
void THDoubleTensor_diag(THDoubleTensor* r_, THDoubleTensor* t, int k);
void THDoubleTensor_eye(THDoubleTensor* r_, long n, long m);
void THDoubleTensor_arange(THDoubleTensor* r_, double xmin, double xmax,
                           double step);
void THDoubleTensor_range(THDoubleTensor* r_, double xmin, double xmax,
                          double step);
void THDoubleTensor_randperm(THDoubleTensor* r_, THGenerator* _generator,
                             long n);

void THDoubleTensor_reshape(THDoubleTensor* r_, THDoubleTensor* t,
                            THLongStorage* size);
void THDoubleTensor_sort(THDoubleTensor* rt_, THLongTensor* ri_,
                         THDoubleTensor* t, int dimension, int descendingOrder);
void THDoubleTensor_topk(THDoubleTensor* rt_, THLongTensor* ri_,
                         THDoubleTensor* t, long k, int dim, int dir,
                         int sorted);
void THDoubleTensor_tril(THDoubleTensor* r_, THDoubleTensor* t, long k);
void THDoubleTensor_triu(THDoubleTensor* r_, THDoubleTensor* t, long k);
void THDoubleTensor_cat(THDoubleTensor* r_, THDoubleTensor* ta,
                        THDoubleTensor* tb, int dimension);
void THDoubleTensor_catArray(THDoubleTensor* result, THDoubleTensor** inputs,
                             int numInputs, int dimension);

int THDoubleTensor_equal(THDoubleTensor* ta, THDoubleTensor* tb);

void THDoubleTensor_ltValue(THByteTensor* r_, THDoubleTensor* t, double value);
void THDoubleTensor_leValue(THByteTensor* r_, THDoubleTensor* t, double value);
void THDoubleTensor_gtValue(THByteTensor* r_, THDoubleTensor* t, double value);
void THDoubleTensor_geValue(THByteTensor* r_, THDoubleTensor* t, double value);
void THDoubleTensor_neValue(THByteTensor* r_, THDoubleTensor* t, double value);
void THDoubleTensor_eqValue(THByteTensor* r_, THDoubleTensor* t, double value);

void THDoubleTensor_ltValueT(THDoubleTensor* r_, THDoubleTensor* t,
                             double value);
void THDoubleTensor_leValueT(THDoubleTensor* r_, THDoubleTensor* t,
                             double value);
void THDoubleTensor_gtValueT(THDoubleTensor* r_, THDoubleTensor* t,
                             double value);
void THDoubleTensor_geValueT(THDoubleTensor* r_, THDoubleTensor* t,
                             double value);
void THDoubleTensor_neValueT(THDoubleTensor* r_, THDoubleTensor* t,
                             double value);
void THDoubleTensor_eqValueT(THDoubleTensor* r_, THDoubleTensor* t,
                             double value);

void THDoubleTensor_ltTensor(THByteTensor* r_, THDoubleTensor* ta,
                             THDoubleTensor* tb);
void THDoubleTensor_leTensor(THByteTensor* r_, THDoubleTensor* ta,
                             THDoubleTensor* tb);
void THDoubleTensor_gtTensor(THByteTensor* r_, THDoubleTensor* ta,
                             THDoubleTensor* tb);
void THDoubleTensor_geTensor(THByteTensor* r_, THDoubleTensor* ta,
                             THDoubleTensor* tb);
void THDoubleTensor_neTensor(THByteTensor* r_, THDoubleTensor* ta,
                             THDoubleTensor* tb);
void THDoubleTensor_eqTensor(THByteTensor* r_, THDoubleTensor* ta,
                             THDoubleTensor* tb);

void THDoubleTensor_ltTensorT(THDoubleTensor* r_, THDoubleTensor* ta,
                              THDoubleTensor* tb);
void THDoubleTensor_leTensorT(THDoubleTensor* r_, THDoubleTensor* ta,
                              THDoubleTensor* tb);
void THDoubleTensor_gtTensorT(THDoubleTensor* r_, THDoubleTensor* ta,
                              THDoubleTensor* tb);
void THDoubleTensor_geTensorT(THDoubleTensor* r_, THDoubleTensor* ta,
                              THDoubleTensor* tb);
void THDoubleTensor_neTensorT(THDoubleTensor* r_, THDoubleTensor* ta,
                              THDoubleTensor* tb);
void THDoubleTensor_eqTensorT(THDoubleTensor* r_, THDoubleTensor* ta,
                              THDoubleTensor* tb);

void THDoubleTensor_sigmoid(THDoubleTensor* r_, THDoubleTensor* t);
void THDoubleTensor_log(THDoubleTensor* r_, THDoubleTensor* t);
void THDoubleTensor_lgamma(THDoubleTensor* r_, THDoubleTensor* t);
void THDoubleTensor_log1p(THDoubleTensor* r_, THDoubleTensor* t);
void THDoubleTensor_exp(THDoubleTensor* r_, THDoubleTensor* t);
void THDoubleTensor_cos(THDoubleTensor* r_, THDoubleTensor* t);
void THDoubleTensor_acos(THDoubleTensor* r_, THDoubleTensor* t);
void THDoubleTensor_cosh(THDoubleTensor* r_, THDoubleTensor* t);
void THDoubleTensor_sin(THDoubleTensor* r_, THDoubleTensor* t);
void THDoubleTensor_asin(THDoubleTensor* r_, THDoubleTensor* t);
void THDoubleTensor_sinh(THDoubleTensor* r_, THDoubleTensor* t);
void THDoubleTensor_tan(THDoubleTensor* r_, THDoubleTensor* t);
void THDoubleTensor_atan(THDoubleTensor* r_, THDoubleTensor* t);
void THDoubleTensor_atan2(THDoubleTensor* r_, THDoubleTensor* tx,
                          THDoubleTensor* ty);
void THDoubleTensor_tanh(THDoubleTensor* r_, THDoubleTensor* t);
void THDoubleTensor_pow(THDoubleTensor* r_, THDoubleTensor* t, double value);
void THDoubleTensor_tpow(THDoubleTensor* r_, double value, THDoubleTensor* t);
void THDoubleTensor_sqrt(THDoubleTensor* r_, THDoubleTensor* t);
void THDoubleTensor_rsqrt(THDoubleTensor* r_, THDoubleTensor* t);
void THDoubleTensor_ceil(THDoubleTensor* r_, THDoubleTensor* t);
void THDoubleTensor_floor(THDoubleTensor* r_, THDoubleTensor* t);
void THDoubleTensor_round(THDoubleTensor* r_, THDoubleTensor* t);
void THDoubleTensor_abs(THDoubleTensor* r_, THDoubleTensor* t);
void THDoubleTensor_trunc(THDoubleTensor* r_, THDoubleTensor* t);
void THDoubleTensor_frac(THDoubleTensor* r_, THDoubleTensor* t);
void THDoubleTensor_lerp(THDoubleTensor* r_, THDoubleTensor* a,
                         THDoubleTensor* b, double weight);

void THDoubleTensor_mean(THDoubleTensor* r_, THDoubleTensor* t, int dimension,
                         int keepdim);
void THDoubleTensor_std(THDoubleTensor* r_, THDoubleTensor* t, int dimension,
                        int biased, int keepdim);
void THDoubleTensor_var(THDoubleTensor* r_, THDoubleTensor* t, int dimension,
                        int biased, int keepdim);
void THDoubleTensor_norm(THDoubleTensor* r_, THDoubleTensor* t, double value,
                         int dimension, int keepdim);
void THDoubleTensor_renorm(THDoubleTensor* r_, THDoubleTensor* t, double value,
                           int dimension, double maxnorm);
double THDoubleTensor_dist(THDoubleTensor* a, THDoubleTensor* b, double value);
void THDoubleTensor_histc(THDoubleTensor* hist, THDoubleTensor* tensor,
                          long nbins, double minvalue, double maxvalue);
void THDoubleTensor_bhistc(THDoubleTensor* hist, THDoubleTensor* tensor,
                           long nbins, double minvalue, double maxvalue);

double THDoubleTensor_meanall(THDoubleTensor* self);
double THDoubleTensor_varall(THDoubleTensor* self, int biased);
double THDoubleTensor_stdall(THDoubleTensor* self, int biased);
double THDoubleTensor_normall(THDoubleTensor* t, double value);

void THDoubleTensor_linspace(THDoubleTensor* r_, double a, double b, long n);
void THDoubleTensor_logspace(THDoubleTensor* r_, double a, double b, long n);
void THDoubleTensor_rand(THDoubleTensor* r_, THGenerator* _generator,
                         THLongStorage* size);
void THDoubleTensor_randn(THDoubleTensor* r_, THGenerator* _generator,
                          THLongStorage* size);

void THByteTensor_fill(THByteTensor* r_, unsigned char value);
void THByteTensor_zero(THByteTensor* r_);

void THByteTensor_maskedFill(THByteTensor* tensor, THByteTensor* mask,
                             unsigned char value);
void THByteTensor_maskedCopy(THByteTensor* tensor, THByteTensor* mask,
                             THByteTensor* src);
void THByteTensor_maskedSelect(THByteTensor* tensor, THByteTensor* src,
                               THByteTensor* mask);

void THByteTensor_nonzero(THLongTensor* subscript, THByteTensor* tensor);

void THByteTensor_indexSelect(THByteTensor* tensor, THByteTensor* src, int dim,
                              THLongTensor* index);
void THByteTensor_indexCopy(THByteTensor* tensor, int dim, THLongTensor* index,
                            THByteTensor* src);
void THByteTensor_indexAdd(THByteTensor* tensor, int dim, THLongTensor* index,
                           THByteTensor* src);
void THByteTensor_indexFill(THByteTensor* tensor, int dim, THLongTensor* index,
                            unsigned char val);

void THByteTensor_gather(THByteTensor* tensor, THByteTensor* src, int dim,
                         THLongTensor* index);
void THByteTensor_scatter(THByteTensor* tensor, int dim, THLongTensor* index,
                          THByteTensor* src);
void THByteTensor_scatterAdd(THByteTensor* tensor, int dim, THLongTensor* index,
                             THByteTensor* src);
void THByteTensor_scatterFill(THByteTensor* tensor, int dim,
                              THLongTensor* index, unsigned char val);

long THByteTensor_dot(THByteTensor* t, THByteTensor* src);

unsigned char THByteTensor_minall(THByteTensor* t);
unsigned char THByteTensor_maxall(THByteTensor* t);
unsigned char THByteTensor_medianall(THByteTensor* t);
long THByteTensor_sumall(THByteTensor* t);
long THByteTensor_prodall(THByteTensor* t);

void THByteTensor_neg(THByteTensor* self, THByteTensor* src);
void THByteTensor_cinv(THByteTensor* self, THByteTensor* src);

void THByteTensor_add(THByteTensor* r_, THByteTensor* t, unsigned char value);
void THByteTensor_sub(THByteTensor* self, THByteTensor* src,
                      unsigned char value);
void THByteTensor_mul(THByteTensor* r_, THByteTensor* t, unsigned char value);
void THByteTensor_div(THByteTensor* r_, THByteTensor* t, unsigned char value);
void THByteTensor_lshift(THByteTensor* r_, THByteTensor* t,
                         unsigned char value);
void THByteTensor_rshift(THByteTensor* r_, THByteTensor* t,
                         unsigned char value);
void THByteTensor_fmod(THByteTensor* r_, THByteTensor* t, unsigned char value);
void THByteTensor_remainder(THByteTensor* r_, THByteTensor* t,
                            unsigned char value);
void THByteTensor_clamp(THByteTensor* r_, THByteTensor* t,
                        unsigned char min_value, unsigned char max_value);
void THByteTensor_bitand(THByteTensor* r_, THByteTensor* t,
                         unsigned char value);
void THByteTensor_bitor(THByteTensor* r_, THByteTensor* t, unsigned char value);
void THByteTensor_bitxor(THByteTensor* r_, THByteTensor* t,
                         unsigned char value);

void THByteTensor_cadd(THByteTensor* r_, THByteTensor* t, unsigned char value,
                       THByteTensor* src);
void THByteTensor_csub(THByteTensor* self, THByteTensor* src1,
                       unsigned char value, THByteTensor* src2);
void THByteTensor_cmul(THByteTensor* r_, THByteTensor* t, THByteTensor* src);
void THByteTensor_cpow(THByteTensor* r_, THByteTensor* t, THByteTensor* src);
void THByteTensor_cdiv(THByteTensor* r_, THByteTensor* t, THByteTensor* src);
void THByteTensor_clshift(THByteTensor* r_, THByteTensor* t, THByteTensor* src);
void THByteTensor_crshift(THByteTensor* r_, THByteTensor* t, THByteTensor* src);
void THByteTensor_cfmod(THByteTensor* r_, THByteTensor* t, THByteTensor* src);
void THByteTensor_cremainder(THByteTensor* r_, THByteTensor* t,
                             THByteTensor* src);
void THByteTensor_cbitand(THByteTensor* r_, THByteTensor* t, THByteTensor* src);
void THByteTensor_cbitor(THByteTensor* r_, THByteTensor* t, THByteTensor* src);
void THByteTensor_cbitxor(THByteTensor* r_, THByteTensor* t, THByteTensor* src);

void THByteTensor_addcmul(THByteTensor* r_, THByteTensor* t,
                          unsigned char value, THByteTensor* src1,
                          THByteTensor* src2);
void THByteTensor_addcdiv(THByteTensor* r_, THByteTensor* t,
                          unsigned char value, THByteTensor* src1,
                          THByteTensor* src2);

void THByteTensor_addmv(THByteTensor* r_, unsigned char beta, THByteTensor* t,
                        unsigned char alpha, THByteTensor* mat,
                        THByteTensor* vec);
void THByteTensor_addmm(THByteTensor* r_, unsigned char beta, THByteTensor* t,
                        unsigned char alpha, THByteTensor* mat1,
                        THByteTensor* mat2);
void THByteTensor_addr(THByteTensor* r_, unsigned char beta, THByteTensor* t,
                       unsigned char alpha, THByteTensor* vec1,
                       THByteTensor* vec2);

void THByteTensor_addbmm(THByteTensor* r_, unsigned char beta, THByteTensor* t,
                         unsigned char alpha, THByteTensor* batch1,
                         THByteTensor* batch2);
void THByteTensor_baddbmm(THByteTensor* r_, unsigned char beta, THByteTensor* t,
                          unsigned char alpha, THByteTensor* batch1,
                          THByteTensor* batch2);

void THByteTensor_match(THByteTensor* r_, THByteTensor* m1, THByteTensor* m2,
                        unsigned char gain);

ptrdiff_t THByteTensor_numel(THByteTensor* t);
void THByteTensor_max(THByteTensor* values_, THLongTensor* indices_,
                      THByteTensor* t, int dimension, int keepdim);
void THByteTensor_min(THByteTensor* values_, THLongTensor* indices_,
                      THByteTensor* t, int dimension, int keepdim);
void THByteTensor_kthvalue(THByteTensor* values_, THLongTensor* indices_,
                           THByteTensor* t, long k, int dimension, int keepdim);
void THByteTensor_mode(THByteTensor* values_, THLongTensor* indices_,
                       THByteTensor* t, int dimension, int keepdim);
void THByteTensor_median(THByteTensor* values_, THLongTensor* indices_,
                         THByteTensor* t, int dimension, int keepdim);
void THByteTensor_sum(THByteTensor* r_, THByteTensor* t, int dimension,
                      int keepdim);
void THByteTensor_prod(THByteTensor* r_, THByteTensor* t, int dimension,
                       int keepdim);
void THByteTensor_cumsum(THByteTensor* r_, THByteTensor* t, int dimension);
void THByteTensor_cumprod(THByteTensor* r_, THByteTensor* t, int dimension);
void THByteTensor_sign(THByteTensor* r_, THByteTensor* t);
long THByteTensor_trace(THByteTensor* t);
void THByteTensor_cross(THByteTensor* r_, THByteTensor* a, THByteTensor* b,
                        int dimension);

void THByteTensor_cmax(THByteTensor* r, THByteTensor* t, THByteTensor* src);
void THByteTensor_cmin(THByteTensor* r, THByteTensor* t, THByteTensor* src);
void THByteTensor_cmaxValue(THByteTensor* r, THByteTensor* t,
                            unsigned char value);
void THByteTensor_cminValue(THByteTensor* r, THByteTensor* t,
                            unsigned char value);

void THByteTensor_zeros(THByteTensor* r_, THLongStorage* size);
void THByteTensor_zerosLike(THByteTensor* r_, THByteTensor* input);
void THByteTensor_ones(THByteTensor* r_, THLongStorage* size);
void THByteTensor_onesLike(THByteTensor* r_, THByteTensor* input);
void THByteTensor_diag(THByteTensor* r_, THByteTensor* t, int k);
void THByteTensor_eye(THByteTensor* r_, long n, long m);
void THByteTensor_arange(THByteTensor* r_, long xmin, long xmax, long step);
void THByteTensor_range(THByteTensor* r_, long xmin, long xmax, long step);
void THByteTensor_randperm(THByteTensor* r_, THGenerator* _generator, long n);

void THByteTensor_reshape(THByteTensor* r_, THByteTensor* t,
                          THLongStorage* size);
void THByteTensor_sort(THByteTensor* rt_, THLongTensor* ri_, THByteTensor* t,
                       int dimension, int descendingOrder);
void THByteTensor_topk(THByteTensor* rt_, THLongTensor* ri_, THByteTensor* t,
                       long k, int dim, int dir, int sorted);
void THByteTensor_tril(THByteTensor* r_, THByteTensor* t, long k);
void THByteTensor_triu(THByteTensor* r_, THByteTensor* t, long k);
void THByteTensor_cat(THByteTensor* r_, THByteTensor* ta, THByteTensor* tb,
                      int dimension);
void THByteTensor_catArray(THByteTensor* result, THByteTensor** inputs,
                           int numInputs, int dimension);

int THByteTensor_equal(THByteTensor* ta, THByteTensor* tb);

void THByteTensor_ltValue(THByteTensor* r_, THByteTensor* t,
                          unsigned char value);
void THByteTensor_leValue(THByteTensor* r_, THByteTensor* t,
                          unsigned char value);
void THByteTensor_gtValue(THByteTensor* r_, THByteTensor* t,
                          unsigned char value);
void THByteTensor_geValue(THByteTensor* r_, THByteTensor* t,
                          unsigned char value);
void THByteTensor_neValue(THByteTensor* r_, THByteTensor* t,
                          unsigned char value);
void THByteTensor_eqValue(THByteTensor* r_, THByteTensor* t,
                          unsigned char value);

void THByteTensor_ltValueT(THByteTensor* r_, THByteTensor* t,
                           unsigned char value);
void THByteTensor_leValueT(THByteTensor* r_, THByteTensor* t,
                           unsigned char value);
void THByteTensor_gtValueT(THByteTensor* r_, THByteTensor* t,
                           unsigned char value);
void THByteTensor_geValueT(THByteTensor* r_, THByteTensor* t,
                           unsigned char value);
void THByteTensor_neValueT(THByteTensor* r_, THByteTensor* t,
                           unsigned char value);
void THByteTensor_eqValueT(THByteTensor* r_, THByteTensor* t,
                           unsigned char value);

void THByteTensor_ltTensor(THByteTensor* r_, THByteTensor* ta,
                           THByteTensor* tb);
void THByteTensor_leTensor(THByteTensor* r_, THByteTensor* ta,
                           THByteTensor* tb);
void THByteTensor_gtTensor(THByteTensor* r_, THByteTensor* ta,
                           THByteTensor* tb);
void THByteTensor_geTensor(THByteTensor* r_, THByteTensor* ta,
                           THByteTensor* tb);
void THByteTensor_neTensor(THByteTensor* r_, THByteTensor* ta,
                           THByteTensor* tb);
void THByteTensor_eqTensor(THByteTensor* r_, THByteTensor* ta,
                           THByteTensor* tb);

void THByteTensor_ltTensorT(THByteTensor* r_, THByteTensor* ta,
                            THByteTensor* tb);
void THByteTensor_leTensorT(THByteTensor* r_, THByteTensor* ta,
                            THByteTensor* tb);
void THByteTensor_gtTensorT(THByteTensor* r_, THByteTensor* ta,
                            THByteTensor* tb);
void THByteTensor_geTensorT(THByteTensor* r_, THByteTensor* ta,
                            THByteTensor* tb);
void THByteTensor_neTensorT(THByteTensor* r_, THByteTensor* ta,
                            THByteTensor* tb);
void THByteTensor_eqTensorT(THByteTensor* r_, THByteTensor* ta,
                            THByteTensor* tb);
int THByteTensor_logicalall(THByteTensor* self);
int THByteTensor_logicalany(THByteTensor* self);

void THCharTensor_fill(THCharTensor* r_, char value);
void THCharTensor_zero(THCharTensor* r_);

void THCharTensor_maskedFill(THCharTensor* tensor, THByteTensor* mask,
                             char value);
void THCharTensor_maskedCopy(THCharTensor* tensor, THByteTensor* mask,
                             THCharTensor* src);
void THCharTensor_maskedSelect(THCharTensor* tensor, THCharTensor* src,
                               THByteTensor* mask);

void THCharTensor_nonzero(THLongTensor* subscript, THCharTensor* tensor);

void THCharTensor_indexSelect(THCharTensor* tensor, THCharTensor* src, int dim,
                              THLongTensor* index);
void THCharTensor_indexCopy(THCharTensor* tensor, int dim, THLongTensor* index,
                            THCharTensor* src);
void THCharTensor_indexAdd(THCharTensor* tensor, int dim, THLongTensor* index,
                           THCharTensor* src);
void THCharTensor_indexFill(THCharTensor* tensor, int dim, THLongTensor* index,
                            char val);

void THCharTensor_gather(THCharTensor* tensor, THCharTensor* src, int dim,
                         THLongTensor* index);
void THCharTensor_scatter(THCharTensor* tensor, int dim, THLongTensor* index,
                          THCharTensor* src);
void THCharTensor_scatterAdd(THCharTensor* tensor, int dim, THLongTensor* index,
                             THCharTensor* src);
void THCharTensor_scatterFill(THCharTensor* tensor, int dim,
                              THLongTensor* index, char val);

long THCharTensor_dot(THCharTensor* t, THCharTensor* src);

char THCharTensor_minall(THCharTensor* t);
char THCharTensor_maxall(THCharTensor* t);
char THCharTensor_medianall(THCharTensor* t);
long THCharTensor_sumall(THCharTensor* t);
long THCharTensor_prodall(THCharTensor* t);

void THCharTensor_neg(THCharTensor* self, THCharTensor* src);
void THCharTensor_cinv(THCharTensor* self, THCharTensor* src);

void THCharTensor_add(THCharTensor* r_, THCharTensor* t, char value);
void THCharTensor_sub(THCharTensor* self, THCharTensor* src, char value);
void THCharTensor_mul(THCharTensor* r_, THCharTensor* t, char value);
void THCharTensor_div(THCharTensor* r_, THCharTensor* t, char value);
void THCharTensor_lshift(THCharTensor* r_, THCharTensor* t, char value);
void THCharTensor_rshift(THCharTensor* r_, THCharTensor* t, char value);
void THCharTensor_fmod(THCharTensor* r_, THCharTensor* t, char value);
void THCharTensor_remainder(THCharTensor* r_, THCharTensor* t, char value);
void THCharTensor_clamp(THCharTensor* r_, THCharTensor* t, char min_value,
                        char max_value);
void THCharTensor_bitand(THCharTensor* r_, THCharTensor* t, char value);
void THCharTensor_bitor(THCharTensor* r_, THCharTensor* t, char value);
void THCharTensor_bitxor(THCharTensor* r_, THCharTensor* t, char value);

void THCharTensor_cadd(THCharTensor* r_, THCharTensor* t, char value,
                       THCharTensor* src);
void THCharTensor_csub(THCharTensor* self, THCharTensor* src1, char value,
                       THCharTensor* src2);
void THCharTensor_cmul(THCharTensor* r_, THCharTensor* t, THCharTensor* src);
void THCharTensor_cpow(THCharTensor* r_, THCharTensor* t, THCharTensor* src);
void THCharTensor_cdiv(THCharTensor* r_, THCharTensor* t, THCharTensor* src);
void THCharTensor_clshift(THCharTensor* r_, THCharTensor* t, THCharTensor* src);
void THCharTensor_crshift(THCharTensor* r_, THCharTensor* t, THCharTensor* src);
void THCharTensor_cfmod(THCharTensor* r_, THCharTensor* t, THCharTensor* src);
void THCharTensor_cremainder(THCharTensor* r_, THCharTensor* t,
                             THCharTensor* src);
void THCharTensor_cbitand(THCharTensor* r_, THCharTensor* t, THCharTensor* src);
void THCharTensor_cbitor(THCharTensor* r_, THCharTensor* t, THCharTensor* src);
void THCharTensor_cbitxor(THCharTensor* r_, THCharTensor* t, THCharTensor* src);

void THCharTensor_addcmul(THCharTensor* r_, THCharTensor* t, char value,
                          THCharTensor* src1, THCharTensor* src2);
void THCharTensor_addcdiv(THCharTensor* r_, THCharTensor* t, char value,
                          THCharTensor* src1, THCharTensor* src2);

void THCharTensor_addmv(THCharTensor* r_, char beta, THCharTensor* t,
                        char alpha, THCharTensor* mat, THCharTensor* vec);
void THCharTensor_addmm(THCharTensor* r_, char beta, THCharTensor* t,
                        char alpha, THCharTensor* mat1, THCharTensor* mat2);
void THCharTensor_addr(THCharTensor* r_, char beta, THCharTensor* t, char alpha,
                       THCharTensor* vec1, THCharTensor* vec2);

void THCharTensor_addbmm(THCharTensor* r_, char beta, THCharTensor* t,
                         char alpha, THCharTensor* batch1,
                         THCharTensor* batch2);
void THCharTensor_baddbmm(THCharTensor* r_, char beta, THCharTensor* t,
                          char alpha, THCharTensor* batch1,
                          THCharTensor* batch2);

void THCharTensor_match(THCharTensor* r_, THCharTensor* m1, THCharTensor* m2,
                        char gain);

ptrdiff_t THCharTensor_numel(THCharTensor* t);
void THCharTensor_max(THCharTensor* values_, THLongTensor* indices_,
                      THCharTensor* t, int dimension, int keepdim);
void THCharTensor_min(THCharTensor* values_, THLongTensor* indices_,
                      THCharTensor* t, int dimension, int keepdim);
void THCharTensor_kthvalue(THCharTensor* values_, THLongTensor* indices_,
                           THCharTensor* t, long k, int dimension, int keepdim);
void THCharTensor_mode(THCharTensor* values_, THLongTensor* indices_,
                       THCharTensor* t, int dimension, int keepdim);
void THCharTensor_median(THCharTensor* values_, THLongTensor* indices_,
                         THCharTensor* t, int dimension, int keepdim);
void THCharTensor_sum(THCharTensor* r_, THCharTensor* t, int dimension,
                      int keepdim);
void THCharTensor_prod(THCharTensor* r_, THCharTensor* t, int dimension,
                       int keepdim);
void THCharTensor_cumsum(THCharTensor* r_, THCharTensor* t, int dimension);
void THCharTensor_cumprod(THCharTensor* r_, THCharTensor* t, int dimension);
void THCharTensor_sign(THCharTensor* r_, THCharTensor* t);
long THCharTensor_trace(THCharTensor* t);
void THCharTensor_cross(THCharTensor* r_, THCharTensor* a, THCharTensor* b,
                        int dimension);

void THCharTensor_cmax(THCharTensor* r, THCharTensor* t, THCharTensor* src);
void THCharTensor_cmin(THCharTensor* r, THCharTensor* t, THCharTensor* src);
void THCharTensor_cmaxValue(THCharTensor* r, THCharTensor* t, char value);
void THCharTensor_cminValue(THCharTensor* r, THCharTensor* t, char value);

void THCharTensor_zeros(THCharTensor* r_, THLongStorage* size);
void THCharTensor_zerosLike(THCharTensor* r_, THCharTensor* input);
void THCharTensor_ones(THCharTensor* r_, THLongStorage* size);
void THCharTensor_onesLike(THCharTensor* r_, THCharTensor* input);
void THCharTensor_diag(THCharTensor* r_, THCharTensor* t, int k);
void THCharTensor_eye(THCharTensor* r_, long n, long m);
void THCharTensor_arange(THCharTensor* r_, long xmin, long xmax, long step);
void THCharTensor_range(THCharTensor* r_, long xmin, long xmax, long step);
void THCharTensor_randperm(THCharTensor* r_, THGenerator* _generator, long n);

void THCharTensor_reshape(THCharTensor* r_, THCharTensor* t,
                          THLongStorage* size);
void THCharTensor_sort(THCharTensor* rt_, THLongTensor* ri_, THCharTensor* t,
                       int dimension, int descendingOrder);
void THCharTensor_topk(THCharTensor* rt_, THLongTensor* ri_, THCharTensor* t,
                       long k, int dim, int dir, int sorted);
void THCharTensor_tril(THCharTensor* r_, THCharTensor* t, long k);
void THCharTensor_triu(THCharTensor* r_, THCharTensor* t, long k);
void THCharTensor_cat(THCharTensor* r_, THCharTensor* ta, THCharTensor* tb,
                      int dimension);
void THCharTensor_catArray(THCharTensor* result, THCharTensor** inputs,
                           int numInputs, int dimension);

int THCharTensor_equal(THCharTensor* ta, THCharTensor* tb);

void THCharTensor_ltValue(THByteTensor* r_, THCharTensor* t, char value);
void THCharTensor_leValue(THByteTensor* r_, THCharTensor* t, char value);
void THCharTensor_gtValue(THByteTensor* r_, THCharTensor* t, char value);
void THCharTensor_geValue(THByteTensor* r_, THCharTensor* t, char value);
void THCharTensor_neValue(THByteTensor* r_, THCharTensor* t, char value);
void THCharTensor_eqValue(THByteTensor* r_, THCharTensor* t, char value);

void THCharTensor_ltValueT(THCharTensor* r_, THCharTensor* t, char value);
void THCharTensor_leValueT(THCharTensor* r_, THCharTensor* t, char value);
void THCharTensor_gtValueT(THCharTensor* r_, THCharTensor* t, char value);
void THCharTensor_geValueT(THCharTensor* r_, THCharTensor* t, char value);
void THCharTensor_neValueT(THCharTensor* r_, THCharTensor* t, char value);
void THCharTensor_eqValueT(THCharTensor* r_, THCharTensor* t, char value);

void THCharTensor_ltTensor(THByteTensor* r_, THCharTensor* ta,
                           THCharTensor* tb);
void THCharTensor_leTensor(THByteTensor* r_, THCharTensor* ta,
                           THCharTensor* tb);
void THCharTensor_gtTensor(THByteTensor* r_, THCharTensor* ta,
                           THCharTensor* tb);
void THCharTensor_geTensor(THByteTensor* r_, THCharTensor* ta,
                           THCharTensor* tb);
void THCharTensor_neTensor(THByteTensor* r_, THCharTensor* ta,
                           THCharTensor* tb);
void THCharTensor_eqTensor(THByteTensor* r_, THCharTensor* ta,
                           THCharTensor* tb);

void THCharTensor_ltTensorT(THCharTensor* r_, THCharTensor* ta,
                            THCharTensor* tb);
void THCharTensor_leTensorT(THCharTensor* r_, THCharTensor* ta,
                            THCharTensor* tb);
void THCharTensor_gtTensorT(THCharTensor* r_, THCharTensor* ta,
                            THCharTensor* tb);
void THCharTensor_geTensorT(THCharTensor* r_, THCharTensor* ta,
                            THCharTensor* tb);
void THCharTensor_neTensorT(THCharTensor* r_, THCharTensor* ta,
                            THCharTensor* tb);
void THCharTensor_eqTensorT(THCharTensor* r_, THCharTensor* ta,
                            THCharTensor* tb);

void THShortTensor_fill(THShortTensor* r_, short value);
void THShortTensor_zero(THShortTensor* r_);

void THShortTensor_maskedFill(THShortTensor* tensor, THByteTensor* mask,
                              short value);
void THShortTensor_maskedCopy(THShortTensor* tensor, THByteTensor* mask,
                              THShortTensor* src);
void THShortTensor_maskedSelect(THShortTensor* tensor, THShortTensor* src,
                                THByteTensor* mask);

void THShortTensor_nonzero(THLongTensor* subscript, THShortTensor* tensor);

void THShortTensor_indexSelect(THShortTensor* tensor, THShortTensor* src,
                               int dim, THLongTensor* index);
void THShortTensor_indexCopy(THShortTensor* tensor, int dim,
                             THLongTensor* index, THShortTensor* src);
void THShortTensor_indexAdd(THShortTensor* tensor, int dim, THLongTensor* index,
                            THShortTensor* src);
void THShortTensor_indexFill(THShortTensor* tensor, int dim,
                             THLongTensor* index, short val);

void THShortTensor_gather(THShortTensor* tensor, THShortTensor* src, int dim,
                          THLongTensor* index);
void THShortTensor_scatter(THShortTensor* tensor, int dim, THLongTensor* index,
                           THShortTensor* src);
void THShortTensor_scatterAdd(THShortTensor* tensor, int dim,
                              THLongTensor* index, THShortTensor* src);
void THShortTensor_scatterFill(THShortTensor* tensor, int dim,
                               THLongTensor* index, short val);

long THShortTensor_dot(THShortTensor* t, THShortTensor* src);

short THShortTensor_minall(THShortTensor* t);
short THShortTensor_maxall(THShortTensor* t);
short THShortTensor_medianall(THShortTensor* t);
long THShortTensor_sumall(THShortTensor* t);
long THShortTensor_prodall(THShortTensor* t);

void THShortTensor_neg(THShortTensor* self, THShortTensor* src);
void THShortTensor_cinv(THShortTensor* self, THShortTensor* src);

void THShortTensor_add(THShortTensor* r_, THShortTensor* t, short value);
void THShortTensor_sub(THShortTensor* self, THShortTensor* src, short value);
void THShortTensor_mul(THShortTensor* r_, THShortTensor* t, short value);
void THShortTensor_div(THShortTensor* r_, THShortTensor* t, short value);
void THShortTensor_lshift(THShortTensor* r_, THShortTensor* t, short value);
void THShortTensor_rshift(THShortTensor* r_, THShortTensor* t, short value);
void THShortTensor_fmod(THShortTensor* r_, THShortTensor* t, short value);
void THShortTensor_remainder(THShortTensor* r_, THShortTensor* t, short value);
void THShortTensor_clamp(THShortTensor* r_, THShortTensor* t, short min_value,
                         short max_value);
void THShortTensor_bitand(THShortTensor* r_, THShortTensor* t, short value);
void THShortTensor_bitor(THShortTensor* r_, THShortTensor* t, short value);
void THShortTensor_bitxor(THShortTensor* r_, THShortTensor* t, short value);

void THShortTensor_cadd(THShortTensor* r_, THShortTensor* t, short value,
                        THShortTensor* src);
void THShortTensor_csub(THShortTensor* self, THShortTensor* src1, short value,
                        THShortTensor* src2);
void THShortTensor_cmul(THShortTensor* r_, THShortTensor* t,
                        THShortTensor* src);
void THShortTensor_cpow(THShortTensor* r_, THShortTensor* t,
                        THShortTensor* src);
void THShortTensor_cdiv(THShortTensor* r_, THShortTensor* t,
                        THShortTensor* src);
void THShortTensor_clshift(THShortTensor* r_, THShortTensor* t,
                           THShortTensor* src);
void THShortTensor_crshift(THShortTensor* r_, THShortTensor* t,
                           THShortTensor* src);
void THShortTensor_cfmod(THShortTensor* r_, THShortTensor* t,
                         THShortTensor* src);
void THShortTensor_cremainder(THShortTensor* r_, THShortTensor* t,
                              THShortTensor* src);
void THShortTensor_cbitand(THShortTensor* r_, THShortTensor* t,
                           THShortTensor* src);
void THShortTensor_cbitor(THShortTensor* r_, THShortTensor* t,
                          THShortTensor* src);
void THShortTensor_cbitxor(THShortTensor* r_, THShortTensor* t,
                           THShortTensor* src);

void THShortTensor_addcmul(THShortTensor* r_, THShortTensor* t, short value,
                           THShortTensor* src1, THShortTensor* src2);
void THShortTensor_addcdiv(THShortTensor* r_, THShortTensor* t, short value,
                           THShortTensor* src1, THShortTensor* src2);

void THShortTensor_addmv(THShortTensor* r_, short beta, THShortTensor* t,
                         short alpha, THShortTensor* mat, THShortTensor* vec);
void THShortTensor_addmm(THShortTensor* r_, short beta, THShortTensor* t,
                         short alpha, THShortTensor* mat1, THShortTensor* mat2);
void THShortTensor_addr(THShortTensor* r_, short beta, THShortTensor* t,
                        short alpha, THShortTensor* vec1, THShortTensor* vec2);

void THShortTensor_addbmm(THShortTensor* r_, short beta, THShortTensor* t,
                          short alpha, THShortTensor* batch1,
                          THShortTensor* batch2);
void THShortTensor_baddbmm(THShortTensor* r_, short beta, THShortTensor* t,
                           short alpha, THShortTensor* batch1,
                           THShortTensor* batch2);

void THShortTensor_match(THShortTensor* r_, THShortTensor* m1,
                         THShortTensor* m2, short gain);

ptrdiff_t THShortTensor_numel(THShortTensor* t);
void THShortTensor_max(THShortTensor* values_, THLongTensor* indices_,
                       THShortTensor* t, int dimension, int keepdim);
void THShortTensor_min(THShortTensor* values_, THLongTensor* indices_,
                       THShortTensor* t, int dimension, int keepdim);
void THShortTensor_kthvalue(THShortTensor* values_, THLongTensor* indices_,
                            THShortTensor* t, long k, int dimension,
                            int keepdim);
void THShortTensor_mode(THShortTensor* values_, THLongTensor* indices_,
                        THShortTensor* t, int dimension, int keepdim);
void THShortTensor_median(THShortTensor* values_, THLongTensor* indices_,
                          THShortTensor* t, int dimension, int keepdim);
void THShortTensor_sum(THShortTensor* r_, THShortTensor* t, int dimension,
                       int keepdim);
void THShortTensor_prod(THShortTensor* r_, THShortTensor* t, int dimension,
                        int keepdim);
void THShortTensor_cumsum(THShortTensor* r_, THShortTensor* t, int dimension);
void THShortTensor_cumprod(THShortTensor* r_, THShortTensor* t, int dimension);
void THShortTensor_sign(THShortTensor* r_, THShortTensor* t);
long THShortTensor_trace(THShortTensor* t);
void THShortTensor_cross(THShortTensor* r_, THShortTensor* a, THShortTensor* b,
                         int dimension);

void THShortTensor_cmax(THShortTensor* r, THShortTensor* t, THShortTensor* src);
void THShortTensor_cmin(THShortTensor* r, THShortTensor* t, THShortTensor* src);
void THShortTensor_cmaxValue(THShortTensor* r, THShortTensor* t, short value);
void THShortTensor_cminValue(THShortTensor* r, THShortTensor* t, short value);

void THShortTensor_zeros(THShortTensor* r_, THLongStorage* size);
void THShortTensor_zerosLike(THShortTensor* r_, THShortTensor* input);
void THShortTensor_ones(THShortTensor* r_, THLongStorage* size);
void THShortTensor_onesLike(THShortTensor* r_, THShortTensor* input);
void THShortTensor_diag(THShortTensor* r_, THShortTensor* t, int k);
void THShortTensor_eye(THShortTensor* r_, long n, long m);
void THShortTensor_arange(THShortTensor* r_, long xmin, long xmax, long step);
void THShortTensor_range(THShortTensor* r_, long xmin, long xmax, long step);
void THShortTensor_randperm(THShortTensor* r_, THGenerator* _generator, long n);

void THShortTensor_reshape(THShortTensor* r_, THShortTensor* t,
                           THLongStorage* size);
void THShortTensor_sort(THShortTensor* rt_, THLongTensor* ri_, THShortTensor* t,
                        int dimension, int descendingOrder);
void THShortTensor_topk(THShortTensor* rt_, THLongTensor* ri_, THShortTensor* t,
                        long k, int dim, int dir, int sorted);
void THShortTensor_tril(THShortTensor* r_, THShortTensor* t, long k);
void THShortTensor_triu(THShortTensor* r_, THShortTensor* t, long k);
void THShortTensor_cat(THShortTensor* r_, THShortTensor* ta, THShortTensor* tb,
                       int dimension);
void THShortTensor_catArray(THShortTensor* result, THShortTensor** inputs,
                            int numInputs, int dimension);

int THShortTensor_equal(THShortTensor* ta, THShortTensor* tb);

void THShortTensor_ltValue(THByteTensor* r_, THShortTensor* t, short value);
void THShortTensor_leValue(THByteTensor* r_, THShortTensor* t, short value);
void THShortTensor_gtValue(THByteTensor* r_, THShortTensor* t, short value);
void THShortTensor_geValue(THByteTensor* r_, THShortTensor* t, short value);
void THShortTensor_neValue(THByteTensor* r_, THShortTensor* t, short value);
void THShortTensor_eqValue(THByteTensor* r_, THShortTensor* t, short value);

void THShortTensor_ltValueT(THShortTensor* r_, THShortTensor* t, short value);
void THShortTensor_leValueT(THShortTensor* r_, THShortTensor* t, short value);
void THShortTensor_gtValueT(THShortTensor* r_, THShortTensor* t, short value);
void THShortTensor_geValueT(THShortTensor* r_, THShortTensor* t, short value);
void THShortTensor_neValueT(THShortTensor* r_, THShortTensor* t, short value);
void THShortTensor_eqValueT(THShortTensor* r_, THShortTensor* t, short value);

void THShortTensor_ltTensor(THByteTensor* r_, THShortTensor* ta,
                            THShortTensor* tb);
void THShortTensor_leTensor(THByteTensor* r_, THShortTensor* ta,
                            THShortTensor* tb);
void THShortTensor_gtTensor(THByteTensor* r_, THShortTensor* ta,
                            THShortTensor* tb);
void THShortTensor_geTensor(THByteTensor* r_, THShortTensor* ta,
                            THShortTensor* tb);
void THShortTensor_neTensor(THByteTensor* r_, THShortTensor* ta,
                            THShortTensor* tb);
void THShortTensor_eqTensor(THByteTensor* r_, THShortTensor* ta,
                            THShortTensor* tb);

void THShortTensor_ltTensorT(THShortTensor* r_, THShortTensor* ta,
                             THShortTensor* tb);
void THShortTensor_leTensorT(THShortTensor* r_, THShortTensor* ta,
                             THShortTensor* tb);
void THShortTensor_gtTensorT(THShortTensor* r_, THShortTensor* ta,
                             THShortTensor* tb);
void THShortTensor_geTensorT(THShortTensor* r_, THShortTensor* ta,
                             THShortTensor* tb);
void THShortTensor_neTensorT(THShortTensor* r_, THShortTensor* ta,
                             THShortTensor* tb);
void THShortTensor_eqTensorT(THShortTensor* r_, THShortTensor* ta,
                             THShortTensor* tb);

void THShortTensor_abs(THShortTensor* r_, THShortTensor* t);

void THIntTensor_fill(THIntTensor* r_, int value);
void THIntTensor_zero(THIntTensor* r_);

void THIntTensor_maskedFill(THIntTensor* tensor, THByteTensor* mask, int value);
void THIntTensor_maskedCopy(THIntTensor* tensor, THByteTensor* mask,
                            THIntTensor* src);
void THIntTensor_maskedSelect(THIntTensor* tensor, THIntTensor* src,
                              THByteTensor* mask);

void THIntTensor_nonzero(THLongTensor* subscript, THIntTensor* tensor);

void THIntTensor_indexSelect(THIntTensor* tensor, THIntTensor* src, int dim,
                             THLongTensor* index);
void THIntTensor_indexCopy(THIntTensor* tensor, int dim, THLongTensor* index,
                           THIntTensor* src);
void THIntTensor_indexAdd(THIntTensor* tensor, int dim, THLongTensor* index,
                          THIntTensor* src);
void THIntTensor_indexFill(THIntTensor* tensor, int dim, THLongTensor* index,
                           int val);

void THIntTensor_gather(THIntTensor* tensor, THIntTensor* src, int dim,
                        THLongTensor* index);
void THIntTensor_scatter(THIntTensor* tensor, int dim, THLongTensor* index,
                         THIntTensor* src);
void THIntTensor_scatterAdd(THIntTensor* tensor, int dim, THLongTensor* index,
                            THIntTensor* src);
void THIntTensor_scatterFill(THIntTensor* tensor, int dim, THLongTensor* index,
                             int val);

long THIntTensor_dot(THIntTensor* t, THIntTensor* src);

int THIntTensor_minall(THIntTensor* t);
int THIntTensor_maxall(THIntTensor* t);
int THIntTensor_medianall(THIntTensor* t);
long THIntTensor_sumall(THIntTensor* t);
long THIntTensor_prodall(THIntTensor* t);

void THIntTensor_neg(THIntTensor* self, THIntTensor* src);
void THIntTensor_cinv(THIntTensor* self, THIntTensor* src);

void THIntTensor_add(THIntTensor* r_, THIntTensor* t, int value);
void THIntTensor_sub(THIntTensor* self, THIntTensor* src, int value);
void THIntTensor_mul(THIntTensor* r_, THIntTensor* t, int value);
void THIntTensor_div(THIntTensor* r_, THIntTensor* t, int value);
void THIntTensor_lshift(THIntTensor* r_, THIntTensor* t, int value);
void THIntTensor_rshift(THIntTensor* r_, THIntTensor* t, int value);
void THIntTensor_fmod(THIntTensor* r_, THIntTensor* t, int value);
void THIntTensor_remainder(THIntTensor* r_, THIntTensor* t, int value);
void THIntTensor_clamp(THIntTensor* r_, THIntTensor* t, int min_value,
                       int max_value);
void THIntTensor_bitand(THIntTensor* r_, THIntTensor* t, int value);
void THIntTensor_bitor(THIntTensor* r_, THIntTensor* t, int value);
void THIntTensor_bitxor(THIntTensor* r_, THIntTensor* t, int value);

void THIntTensor_cadd(THIntTensor* r_, THIntTensor* t, int value,
                      THIntTensor* src);
void THIntTensor_csub(THIntTensor* self, THIntTensor* src1, int value,
                      THIntTensor* src2);
void THIntTensor_cmul(THIntTensor* r_, THIntTensor* t, THIntTensor* src);
void THIntTensor_cpow(THIntTensor* r_, THIntTensor* t, THIntTensor* src);
void THIntTensor_cdiv(THIntTensor* r_, THIntTensor* t, THIntTensor* src);
void THIntTensor_clshift(THIntTensor* r_, THIntTensor* t, THIntTensor* src);
void THIntTensor_crshift(THIntTensor* r_, THIntTensor* t, THIntTensor* src);
void THIntTensor_cfmod(THIntTensor* r_, THIntTensor* t, THIntTensor* src);
void THIntTensor_cremainder(THIntTensor* r_, THIntTensor* t, THIntTensor* src);
void THIntTensor_cbitand(THIntTensor* r_, THIntTensor* t, THIntTensor* src);
void THIntTensor_cbitor(THIntTensor* r_, THIntTensor* t, THIntTensor* src);
void THIntTensor_cbitxor(THIntTensor* r_, THIntTensor* t, THIntTensor* src);

void THIntTensor_addcmul(THIntTensor* r_, THIntTensor* t, int value,
                         THIntTensor* src1, THIntTensor* src2);
void THIntTensor_addcdiv(THIntTensor* r_, THIntTensor* t, int value,
                         THIntTensor* src1, THIntTensor* src2);

void THIntTensor_addmv(THIntTensor* r_, int beta, THIntTensor* t, int alpha,
                       THIntTensor* mat, THIntTensor* vec);
void THIntTensor_addmm(THIntTensor* r_, int beta, THIntTensor* t, int alpha,
                       THIntTensor* mat1, THIntTensor* mat2);
void THIntTensor_addr(THIntTensor* r_, int beta, THIntTensor* t, int alpha,
                      THIntTensor* vec1, THIntTensor* vec2);

void THIntTensor_addbmm(THIntTensor* r_, int beta, THIntTensor* t, int alpha,
                        THIntTensor* batch1, THIntTensor* batch2);
void THIntTensor_baddbmm(THIntTensor* r_, int beta, THIntTensor* t, int alpha,
                         THIntTensor* batch1, THIntTensor* batch2);

void THIntTensor_match(THIntTensor* r_, THIntTensor* m1, THIntTensor* m2,
                       int gain);

ptrdiff_t THIntTensor_numel(THIntTensor* t);
void THIntTensor_max(THIntTensor* values_, THLongTensor* indices_,
                     THIntTensor* t, int dimension, int keepdim);
void THIntTensor_min(THIntTensor* values_, THLongTensor* indices_,
                     THIntTensor* t, int dimension, int keepdim);
void THIntTensor_kthvalue(THIntTensor* values_, THLongTensor* indices_,
                          THIntTensor* t, long k, int dimension, int keepdim);
void THIntTensor_mode(THIntTensor* values_, THLongTensor* indices_,
                      THIntTensor* t, int dimension, int keepdim);
void THIntTensor_median(THIntTensor* values_, THLongTensor* indices_,
                        THIntTensor* t, int dimension, int keepdim);
void THIntTensor_sum(THIntTensor* r_, THIntTensor* t, int dimension,
                     int keepdim);
void THIntTensor_prod(THIntTensor* r_, THIntTensor* t, int dimension,
                      int keepdim);
void THIntTensor_cumsum(THIntTensor* r_, THIntTensor* t, int dimension);
void THIntTensor_cumprod(THIntTensor* r_, THIntTensor* t, int dimension);
void THIntTensor_sign(THIntTensor* r_, THIntTensor* t);
long THIntTensor_trace(THIntTensor* t);
void THIntTensor_cross(THIntTensor* r_, THIntTensor* a, THIntTensor* b,
                       int dimension);

void THIntTensor_cmax(THIntTensor* r, THIntTensor* t, THIntTensor* src);
void THIntTensor_cmin(THIntTensor* r, THIntTensor* t, THIntTensor* src);
void THIntTensor_cmaxValue(THIntTensor* r, THIntTensor* t, int value);
void THIntTensor_cminValue(THIntTensor* r, THIntTensor* t, int value);

void THIntTensor_zeros(THIntTensor* r_, THLongStorage* size);
void THIntTensor_zerosLike(THIntTensor* r_, THIntTensor* input);
void THIntTensor_ones(THIntTensor* r_, THLongStorage* size);
void THIntTensor_onesLike(THIntTensor* r_, THIntTensor* input);
void THIntTensor_diag(THIntTensor* r_, THIntTensor* t, int k);
void THIntTensor_eye(THIntTensor* r_, long n, long m);
void THIntTensor_arange(THIntTensor* r_, long xmin, long xmax, long step);
void THIntTensor_range(THIntTensor* r_, long xmin, long xmax, long step);
void THIntTensor_randperm(THIntTensor* r_, THGenerator* _generator, long n);

void THIntTensor_reshape(THIntTensor* r_, THIntTensor* t, THLongStorage* size);
void THIntTensor_sort(THIntTensor* rt_, THLongTensor* ri_, THIntTensor* t,
                      int dimension, int descendingOrder);
void THIntTensor_topk(THIntTensor* rt_, THLongTensor* ri_, THIntTensor* t,
                      long k, int dim, int dir, int sorted);
void THIntTensor_tril(THIntTensor* r_, THIntTensor* t, long k);
void THIntTensor_triu(THIntTensor* r_, THIntTensor* t, long k);
void THIntTensor_cat(THIntTensor* r_, THIntTensor* ta, THIntTensor* tb,
                     int dimension);
void THIntTensor_catArray(THIntTensor* result, THIntTensor** inputs,
                          int numInputs, int dimension);

int THIntTensor_equal(THIntTensor* ta, THIntTensor* tb);

void THIntTensor_ltValue(THByteTensor* r_, THIntTensor* t, int value);
void THIntTensor_leValue(THByteTensor* r_, THIntTensor* t, int value);
void THIntTensor_gtValue(THByteTensor* r_, THIntTensor* t, int value);
void THIntTensor_geValue(THByteTensor* r_, THIntTensor* t, int value);
void THIntTensor_neValue(THByteTensor* r_, THIntTensor* t, int value);
void THIntTensor_eqValue(THByteTensor* r_, THIntTensor* t, int value);

void THIntTensor_ltValueT(THIntTensor* r_, THIntTensor* t, int value);
void THIntTensor_leValueT(THIntTensor* r_, THIntTensor* t, int value);
void THIntTensor_gtValueT(THIntTensor* r_, THIntTensor* t, int value);
void THIntTensor_geValueT(THIntTensor* r_, THIntTensor* t, int value);
void THIntTensor_neValueT(THIntTensor* r_, THIntTensor* t, int value);
void THIntTensor_eqValueT(THIntTensor* r_, THIntTensor* t, int value);

void THIntTensor_ltTensor(THByteTensor* r_, THIntTensor* ta, THIntTensor* tb);
void THIntTensor_leTensor(THByteTensor* r_, THIntTensor* ta, THIntTensor* tb);
void THIntTensor_gtTensor(THByteTensor* r_, THIntTensor* ta, THIntTensor* tb);
void THIntTensor_geTensor(THByteTensor* r_, THIntTensor* ta, THIntTensor* tb);
void THIntTensor_neTensor(THByteTensor* r_, THIntTensor* ta, THIntTensor* tb);
void THIntTensor_eqTensor(THByteTensor* r_, THIntTensor* ta, THIntTensor* tb);

void THIntTensor_ltTensorT(THIntTensor* r_, THIntTensor* ta, THIntTensor* tb);
void THIntTensor_leTensorT(THIntTensor* r_, THIntTensor* ta, THIntTensor* tb);
void THIntTensor_gtTensorT(THIntTensor* r_, THIntTensor* ta, THIntTensor* tb);
void THIntTensor_geTensorT(THIntTensor* r_, THIntTensor* ta, THIntTensor* tb);
void THIntTensor_neTensorT(THIntTensor* r_, THIntTensor* ta, THIntTensor* tb);
void THIntTensor_eqTensorT(THIntTensor* r_, THIntTensor* ta, THIntTensor* tb);

void THIntTensor_abs(THIntTensor* r_, THIntTensor* t);

void THLongTensor_fill(THLongTensor* r_, long value);
void THLongTensor_zero(THLongTensor* r_);

void THLongTensor_maskedFill(THLongTensor* tensor, THByteTensor* mask,
                             long value);
void THLongTensor_maskedCopy(THLongTensor* tensor, THByteTensor* mask,
                             THLongTensor* src);
void THLongTensor_maskedSelect(THLongTensor* tensor, THLongTensor* src,
                               THByteTensor* mask);

void THLongTensor_nonzero(THLongTensor* subscript, THLongTensor* tensor);

void THLongTensor_indexSelect(THLongTensor* tensor, THLongTensor* src, int dim,
                              THLongTensor* index);
void THLongTensor_indexCopy(THLongTensor* tensor, int dim, THLongTensor* index,
                            THLongTensor* src);
void THLongTensor_indexAdd(THLongTensor* tensor, int dim, THLongTensor* index,
                           THLongTensor* src);
void THLongTensor_indexFill(THLongTensor* tensor, int dim, THLongTensor* index,
                            long val);

void THLongTensor_gather(THLongTensor* tensor, THLongTensor* src, int dim,
                         THLongTensor* index);
void THLongTensor_scatter(THLongTensor* tensor, int dim, THLongTensor* index,
                          THLongTensor* src);
void THLongTensor_scatterAdd(THLongTensor* tensor, int dim, THLongTensor* index,
                             THLongTensor* src);
void THLongTensor_scatterFill(THLongTensor* tensor, int dim,
                              THLongTensor* index, long val);

long THLongTensor_dot(THLongTensor* t, THLongTensor* src);

long THLongTensor_minall(THLongTensor* t);
long THLongTensor_maxall(THLongTensor* t);
long THLongTensor_medianall(THLongTensor* t);
long THLongTensor_sumall(THLongTensor* t);
long THLongTensor_prodall(THLongTensor* t);

void THLongTensor_neg(THLongTensor* self, THLongTensor* src);
void THLongTensor_cinv(THLongTensor* self, THLongTensor* src);

void THLongTensor_add(THLongTensor* r_, THLongTensor* t, long value);
void THLongTensor_sub(THLongTensor* self, THLongTensor* src, long value);
void THLongTensor_mul(THLongTensor* r_, THLongTensor* t, long value);
void THLongTensor_div(THLongTensor* r_, THLongTensor* t, long value);
void THLongTensor_lshift(THLongTensor* r_, THLongTensor* t, long value);
void THLongTensor_rshift(THLongTensor* r_, THLongTensor* t, long value);
void THLongTensor_fmod(THLongTensor* r_, THLongTensor* t, long value);
void THLongTensor_remainder(THLongTensor* r_, THLongTensor* t, long value);
void THLongTensor_clamp(THLongTensor* r_, THLongTensor* t, long min_value,
                        long max_value);
void THLongTensor_bitand(THLongTensor* r_, THLongTensor* t, long value);
void THLongTensor_bitor(THLongTensor* r_, THLongTensor* t, long value);
void THLongTensor_bitxor(THLongTensor* r_, THLongTensor* t, long value);

void THLongTensor_cadd(THLongTensor* r_, THLongTensor* t, long value,
                       THLongTensor* src);
void THLongTensor_csub(THLongTensor* self, THLongTensor* src1, long value,
                       THLongTensor* src2);
void THLongTensor_cmul(THLongTensor* r_, THLongTensor* t, THLongTensor* src);
void THLongTensor_cpow(THLongTensor* r_, THLongTensor* t, THLongTensor* src);
void THLongTensor_cdiv(THLongTensor* r_, THLongTensor* t, THLongTensor* src);
void THLongTensor_clshift(THLongTensor* r_, THLongTensor* t, THLongTensor* src);
void THLongTensor_crshift(THLongTensor* r_, THLongTensor* t, THLongTensor* src);
void THLongTensor_cfmod(THLongTensor* r_, THLongTensor* t, THLongTensor* src);
void THLongTensor_cremainder(THLongTensor* r_, THLongTensor* t,
                             THLongTensor* src);
void THLongTensor_cbitand(THLongTensor* r_, THLongTensor* t, THLongTensor* src);
void THLongTensor_cbitor(THLongTensor* r_, THLongTensor* t, THLongTensor* src);
void THLongTensor_cbitxor(THLongTensor* r_, THLongTensor* t, THLongTensor* src);

void THLongTensor_addcmul(THLongTensor* r_, THLongTensor* t, long value,
                          THLongTensor* src1, THLongTensor* src2);
void THLongTensor_addcdiv(THLongTensor* r_, THLongTensor* t, long value,
                          THLongTensor* src1, THLongTensor* src2);

void THLongTensor_addmv(THLongTensor* r_, long beta, THLongTensor* t,
                        long alpha, THLongTensor* mat, THLongTensor* vec);
void THLongTensor_addmm(THLongTensor* r_, long beta, THLongTensor* t,
                        long alpha, THLongTensor* mat1, THLongTensor* mat2);
void THLongTensor_addr(THLongTensor* r_, long beta, THLongTensor* t, long alpha,
                       THLongTensor* vec1, THLongTensor* vec2);

void THLongTensor_addbmm(THLongTensor* r_, long beta, THLongTensor* t,
                         long alpha, THLongTensor* batch1,
                         THLongTensor* batch2);
void THLongTensor_baddbmm(THLongTensor* r_, long beta, THLongTensor* t,
                          long alpha, THLongTensor* batch1,
                          THLongTensor* batch2);

void THLongTensor_match(THLongTensor* r_, THLongTensor* m1, THLongTensor* m2,
                        long gain);

ptrdiff_t THLongTensor_numel(THLongTensor* t);
void THLongTensor_max(THLongTensor* values_, THLongTensor* indices_,
                      THLongTensor* t, int dimension, int keepdim);
void THLongTensor_min(THLongTensor* values_, THLongTensor* indices_,
                      THLongTensor* t, int dimension, int keepdim);
void THLongTensor_kthvalue(THLongTensor* values_, THLongTensor* indices_,
                           THLongTensor* t, long k, int dimension, int keepdim);
void THLongTensor_mode(THLongTensor* values_, THLongTensor* indices_,
                       THLongTensor* t, int dimension, int keepdim);
void THLongTensor_median(THLongTensor* values_, THLongTensor* indices_,
                         THLongTensor* t, int dimension, int keepdim);
void THLongTensor_sum(THLongTensor* r_, THLongTensor* t, int dimension,
                      int keepdim);
void THLongTensor_prod(THLongTensor* r_, THLongTensor* t, int dimension,
                       int keepdim);
void THLongTensor_cumsum(THLongTensor* r_, THLongTensor* t, int dimension);
void THLongTensor_cumprod(THLongTensor* r_, THLongTensor* t, int dimension);
void THLongTensor_sign(THLongTensor* r_, THLongTensor* t);
long THLongTensor_trace(THLongTensor* t);
void THLongTensor_cross(THLongTensor* r_, THLongTensor* a, THLongTensor* b,
                        int dimension);

void THLongTensor_cmax(THLongTensor* r, THLongTensor* t, THLongTensor* src);
void THLongTensor_cmin(THLongTensor* r, THLongTensor* t, THLongTensor* src);
void THLongTensor_cmaxValue(THLongTensor* r, THLongTensor* t, long value);
void THLongTensor_cminValue(THLongTensor* r, THLongTensor* t, long value);

void THLongTensor_zeros(THLongTensor* r_, THLongStorage* size);
void THLongTensor_zerosLike(THLongTensor* r_, THLongTensor* input);
void THLongTensor_ones(THLongTensor* r_, THLongStorage* size);
void THLongTensor_onesLike(THLongTensor* r_, THLongTensor* input);
void THLongTensor_diag(THLongTensor* r_, THLongTensor* t, int k);
void THLongTensor_eye(THLongTensor* r_, long n, long m);
void THLongTensor_arange(THLongTensor* r_, long xmin, long xmax, long step);
void THLongTensor_range(THLongTensor* r_, long xmin, long xmax, long step);
void THLongTensor_randperm(THLongTensor* r_, THGenerator* _generator, long n);

void THLongTensor_reshape(THLongTensor* r_, THLongTensor* t,
                          THLongStorage* size);
void THLongTensor_sort(THLongTensor* rt_, THLongTensor* ri_, THLongTensor* t,
                       int dimension, int descendingOrder);
void THLongTensor_topk(THLongTensor* rt_, THLongTensor* ri_, THLongTensor* t,
                       long k, int dim, int dir, int sorted);
void THLongTensor_tril(THLongTensor* r_, THLongTensor* t, long k);
void THLongTensor_triu(THLongTensor* r_, THLongTensor* t, long k);
void THLongTensor_cat(THLongTensor* r_, THLongTensor* ta, THLongTensor* tb,
                      int dimension);
void THLongTensor_catArray(THLongTensor* result, THLongTensor** inputs,
                           int numInputs, int dimension);

int THLongTensor_equal(THLongTensor* ta, THLongTensor* tb);

void THLongTensor_ltValue(THByteTensor* r_, THLongTensor* t, long value);
void THLongTensor_leValue(THByteTensor* r_, THLongTensor* t, long value);
void THLongTensor_gtValue(THByteTensor* r_, THLongTensor* t, long value);
void THLongTensor_geValue(THByteTensor* r_, THLongTensor* t, long value);
void THLongTensor_neValue(THByteTensor* r_, THLongTensor* t, long value);
void THLongTensor_eqValue(THByteTensor* r_, THLongTensor* t, long value);

void THLongTensor_ltValueT(THLongTensor* r_, THLongTensor* t, long value);
void THLongTensor_leValueT(THLongTensor* r_, THLongTensor* t, long value);
void THLongTensor_gtValueT(THLongTensor* r_, THLongTensor* t, long value);
void THLongTensor_geValueT(THLongTensor* r_, THLongTensor* t, long value);
void THLongTensor_neValueT(THLongTensor* r_, THLongTensor* t, long value);
void THLongTensor_eqValueT(THLongTensor* r_, THLongTensor* t, long value);

void THLongTensor_ltTensor(THByteTensor* r_, THLongTensor* ta,
                           THLongTensor* tb);
void THLongTensor_leTensor(THByteTensor* r_, THLongTensor* ta,
                           THLongTensor* tb);
void THLongTensor_gtTensor(THByteTensor* r_, THLongTensor* ta,
                           THLongTensor* tb);
void THLongTensor_geTensor(THByteTensor* r_, THLongTensor* ta,
                           THLongTensor* tb);
void THLongTensor_neTensor(THByteTensor* r_, THLongTensor* ta,
                           THLongTensor* tb);
void THLongTensor_eqTensor(THByteTensor* r_, THLongTensor* ta,
                           THLongTensor* tb);

void THLongTensor_ltTensorT(THLongTensor* r_, THLongTensor* ta,
                            THLongTensor* tb);
void THLongTensor_leTensorT(THLongTensor* r_, THLongTensor* ta,
                            THLongTensor* tb);
void THLongTensor_gtTensorT(THLongTensor* r_, THLongTensor* ta,
                            THLongTensor* tb);
void THLongTensor_geTensorT(THLongTensor* r_, THLongTensor* ta,
                            THLongTensor* tb);
void THLongTensor_neTensorT(THLongTensor* r_, THLongTensor* ta,
                            THLongTensor* tb);
void THLongTensor_eqTensorT(THLongTensor* r_, THLongTensor* ta,
                            THLongTensor* tb);

void THLongTensor_abs(THLongTensor* r_, THLongTensor* t);

void THFloatTensor_validXCorr2Dptr(float* r_, float alpha, float* t_, long ir,
                                   long ic, float* k_, long kr, long kc,
                                   long sr, long sc);

void THFloatTensor_validConv2Dptr(float* r_, float alpha, float* t_, long ir,
                                  long ic, float* k_, long kr, long kc, long sr,
                                  long sc);

void THFloatTensor_fullXCorr2Dptr(float* r_, float alpha, float* t_, long ir,
                                  long ic, float* k_, long kr, long kc, long sr,
                                  long sc);

void THFloatTensor_fullConv2Dptr(float* r_, float alpha, float* t_, long ir,
                                 long ic, float* k_, long kr, long kc, long sr,
                                 long sc);

void THFloatTensor_validXCorr2DRevptr(float* r_, float alpha, float* t_,
                                      long ir, long ic, float* k_, long kr,
                                      long kc, long sr, long sc);

void THFloatTensor_conv2DRevger(THFloatTensor* r_, float beta, float alpha,
                                THFloatTensor* t_, THFloatTensor* k_, long srow,
                                long scol);
void THFloatTensor_conv2DRevgerm(THFloatTensor* r_, float beta, float alpha,
                                 THFloatTensor* t_, THFloatTensor* k_,
                                 long srow, long scol);
void THFloatTensor_conv2Dger(THFloatTensor* r_, float beta, float alpha,
                             THFloatTensor* t_, THFloatTensor* k_, long srow,
                             long scol, const char* vf, const char* xc);
void THFloatTensor_conv2Dmv(THFloatTensor* r_, float beta, float alpha,
                            THFloatTensor* t_, THFloatTensor* k_, long srow,
                            long scol, const char* vf, const char* xc);
void THFloatTensor_conv2Dmm(THFloatTensor* r_, float beta, float alpha,
                            THFloatTensor* t_, THFloatTensor* k_, long srow,
                            long scol, const char* vf, const char* xc);
void THFloatTensor_conv2Dmul(THFloatTensor* r_, float beta, float alpha,
                             THFloatTensor* t_, THFloatTensor* k_, long srow,
                             long scol, const char* vf, const char* xc);
void THFloatTensor_conv2Dcmul(THFloatTensor* r_, float beta, float alpha,
                              THFloatTensor* t_, THFloatTensor* k_, long srow,
                              long scol, const char* vf, const char* xc);

void THFloatTensor_validXCorr3Dptr(float* r_, float alpha, float* t_, long it,
                                   long ir, long ic, float* k_, long kt,
                                   long kr, long kc, long st, long sr, long sc);

void THFloatTensor_validConv3Dptr(float* r_, float alpha, float* t_, long it,
                                  long ir, long ic, float* k_, long kt, long kr,
                                  long kc, long st, long sr, long sc);

void THFloatTensor_fullXCorr3Dptr(float* r_, float alpha, float* t_, long it,
                                  long ir, long ic, float* k_, long kt, long kr,
                                  long kc, long st, long sr, long sc);

void THFloatTensor_fullConv3Dptr(float* r_, float alpha, float* t_, long it,
                                 long ir, long ic, float* k_, long kt, long kr,
                                 long kc, long st, long sr, long sc);

void THFloatTensor_validXCorr3DRevptr(float* r_, float alpha, float* t_,
                                      long it, long ir, long ic, float* k_,
                                      long kt, long kr, long kc, long st,
                                      long sr, long sc);

void THFloatTensor_conv3DRevger(THFloatTensor* r_, float beta, float alpha,
                                THFloatTensor* t_, THFloatTensor* k_,
                                long sdepth, long srow, long scol);
void THFloatTensor_conv3Dger(THFloatTensor* r_, float beta, float alpha,
                             THFloatTensor* t_, THFloatTensor* k_, long sdepth,
                             long srow, long scol, const char* vf,
                             const char* xc);
void THFloatTensor_conv3Dmv(THFloatTensor* r_, float beta, float alpha,
                            THFloatTensor* t_, THFloatTensor* k_, long sdepth,
                            long srow, long scol, const char* vf,
                            const char* xc);
void THFloatTensor_conv3Dmul(THFloatTensor* r_, float beta, float alpha,
                             THFloatTensor* t_, THFloatTensor* k_, long sdepth,
                             long srow, long scol, const char* vf,
                             const char* xc);
void THFloatTensor_conv3Dcmul(THFloatTensor* r_, float beta, float alpha,
                              THFloatTensor* t_, THFloatTensor* k_, long sdepth,
                              long srow, long scol, const char* vf,
                              const char* xc);

void THDoubleTensor_validXCorr2Dptr(double* r_, double alpha, double* t_,
                                    long ir, long ic, double* k_, long kr,
                                    long kc, long sr, long sc);

void THDoubleTensor_validConv2Dptr(double* r_, double alpha, double* t_,
                                   long ir, long ic, double* k_, long kr,
                                   long kc, long sr, long sc);

void THDoubleTensor_fullXCorr2Dptr(double* r_, double alpha, double* t_,
                                   long ir, long ic, double* k_, long kr,
                                   long kc, long sr, long sc);

void THDoubleTensor_fullConv2Dptr(double* r_, double alpha, double* t_, long ir,
                                  long ic, double* k_, long kr, long kc,
                                  long sr, long sc);

void THDoubleTensor_validXCorr2DRevptr(double* r_, double alpha, double* t_,
                                       long ir, long ic, double* k_, long kr,
                                       long kc, long sr, long sc);

void THDoubleTensor_conv2DRevger(THDoubleTensor* r_, double beta, double alpha,
                                 THDoubleTensor* t_, THDoubleTensor* k_,
                                 long srow, long scol);
void THDoubleTensor_conv2DRevgerm(THDoubleTensor* r_, double beta, double alpha,
                                  THDoubleTensor* t_, THDoubleTensor* k_,
                                  long srow, long scol);
void THDoubleTensor_conv2Dger(THDoubleTensor* r_, double beta, double alpha,
                              THDoubleTensor* t_, THDoubleTensor* k_, long srow,
                              long scol, const char* vf, const char* xc);
void THDoubleTensor_conv2Dmv(THDoubleTensor* r_, double beta, double alpha,
                             THDoubleTensor* t_, THDoubleTensor* k_, long srow,
                             long scol, const char* vf, const char* xc);
void THDoubleTensor_conv2Dmm(THDoubleTensor* r_, double beta, double alpha,
                             THDoubleTensor* t_, THDoubleTensor* k_, long srow,
                             long scol, const char* vf, const char* xc);
void THDoubleTensor_conv2Dmul(THDoubleTensor* r_, double beta, double alpha,
                              THDoubleTensor* t_, THDoubleTensor* k_, long srow,
                              long scol, const char* vf, const char* xc);
void THDoubleTensor_conv2Dcmul(THDoubleTensor* r_, double beta, double alpha,
                               THDoubleTensor* t_, THDoubleTensor* k_,
                               long srow, long scol, const char* vf,
                               const char* xc);

void THDoubleTensor_validXCorr3Dptr(double* r_, double alpha, double* t_,
                                    long it, long ir, long ic, double* k_,
                                    long kt, long kr, long kc, long st, long sr,
                                    long sc);

void THDoubleTensor_validConv3Dptr(double* r_, double alpha, double* t_,
                                   long it, long ir, long ic, double* k_,
                                   long kt, long kr, long kc, long st, long sr,
                                   long sc);

void THDoubleTensor_fullXCorr3Dptr(double* r_, double alpha, double* t_,
                                   long it, long ir, long ic, double* k_,
                                   long kt, long kr, long kc, long st, long sr,
                                   long sc);

void THDoubleTensor_fullConv3Dptr(double* r_, double alpha, double* t_, long it,
                                  long ir, long ic, double* k_, long kt,
                                  long kr, long kc, long st, long sr, long sc);

void THDoubleTensor_validXCorr3DRevptr(double* r_, double alpha, double* t_,
                                       long it, long ir, long ic, double* k_,
                                       long kt, long kr, long kc, long st,
                                       long sr, long sc);

void THDoubleTensor_conv3DRevger(THDoubleTensor* r_, double beta, double alpha,
                                 THDoubleTensor* t_, THDoubleTensor* k_,
                                 long sdepth, long srow, long scol);
void THDoubleTensor_conv3Dger(THDoubleTensor* r_, double beta, double alpha,
                              THDoubleTensor* t_, THDoubleTensor* k_,
                              long sdepth, long srow, long scol, const char* vf,
                              const char* xc);
void THDoubleTensor_conv3Dmv(THDoubleTensor* r_, double beta, double alpha,
                             THDoubleTensor* t_, THDoubleTensor* k_,
                             long sdepth, long srow, long scol, const char* vf,
                             const char* xc);
void THDoubleTensor_conv3Dmul(THDoubleTensor* r_, double beta, double alpha,
                              THDoubleTensor* t_, THDoubleTensor* k_,
                              long sdepth, long srow, long scol, const char* vf,
                              const char* xc);
void THDoubleTensor_conv3Dcmul(THDoubleTensor* r_, double beta, double alpha,
                               THDoubleTensor* t_, THDoubleTensor* k_,
                               long sdepth, long srow, long scol,
                               const char* vf, const char* xc);

void THByteTensor_validXCorr2Dptr(unsigned char* r_, unsigned char alpha,
                                  unsigned char* t_, long ir, long ic,
                                  unsigned char* k_, long kr, long kc, long sr,
                                  long sc);

void THByteTensor_validConv2Dptr(unsigned char* r_, unsigned char alpha,
                                 unsigned char* t_, long ir, long ic,
                                 unsigned char* k_, long kr, long kc, long sr,
                                 long sc);

void THByteTensor_fullXCorr2Dptr(unsigned char* r_, unsigned char alpha,
                                 unsigned char* t_, long ir, long ic,
                                 unsigned char* k_, long kr, long kc, long sr,
                                 long sc);

void THByteTensor_fullConv2Dptr(unsigned char* r_, unsigned char alpha,
                                unsigned char* t_, long ir, long ic,
                                unsigned char* k_, long kr, long kc, long sr,
                                long sc);

void THByteTensor_validXCorr2DRevptr(unsigned char* r_, unsigned char alpha,
                                     unsigned char* t_, long ir, long ic,
                                     unsigned char* k_, long kr, long kc,
                                     long sr, long sc);

void THByteTensor_conv2DRevger(THByteTensor* r_, unsigned char beta,
                               unsigned char alpha, THByteTensor* t_,
                               THByteTensor* k_, long srow, long scol);
void THByteTensor_conv2DRevgerm(THByteTensor* r_, unsigned char beta,
                                unsigned char alpha, THByteTensor* t_,
                                THByteTensor* k_, long srow, long scol);
void THByteTensor_conv2Dger(THByteTensor* r_, unsigned char beta,
                            unsigned char alpha, THByteTensor* t_,
                            THByteTensor* k_, long srow, long scol,
                            const char* vf, const char* xc);
void THByteTensor_conv2Dmv(THByteTensor* r_, unsigned char beta,
                           unsigned char alpha, THByteTensor* t_,
                           THByteTensor* k_, long srow, long scol,
                           const char* vf, const char* xc);
void THByteTensor_conv2Dmm(THByteTensor* r_, unsigned char beta,
                           unsigned char alpha, THByteTensor* t_,
                           THByteTensor* k_, long srow, long scol,
                           const char* vf, const char* xc);
void THByteTensor_conv2Dmul(THByteTensor* r_, unsigned char beta,
                            unsigned char alpha, THByteTensor* t_,
                            THByteTensor* k_, long srow, long scol,
                            const char* vf, const char* xc);
void THByteTensor_conv2Dcmul(THByteTensor* r_, unsigned char beta,
                             unsigned char alpha, THByteTensor* t_,
                             THByteTensor* k_, long srow, long scol,
                             const char* vf, const char* xc);

void THByteTensor_validXCorr3Dptr(unsigned char* r_, unsigned char alpha,
                                  unsigned char* t_, long it, long ir, long ic,
                                  unsigned char* k_, long kt, long kr, long kc,
                                  long st, long sr, long sc);

void THByteTensor_validConv3Dptr(unsigned char* r_, unsigned char alpha,
                                 unsigned char* t_, long it, long ir, long ic,
                                 unsigned char* k_, long kt, long kr, long kc,
                                 long st, long sr, long sc);

void THByteTensor_fullXCorr3Dptr(unsigned char* r_, unsigned char alpha,
                                 unsigned char* t_, long it, long ir, long ic,
                                 unsigned char* k_, long kt, long kr, long kc,
                                 long st, long sr, long sc);

void THByteTensor_fullConv3Dptr(unsigned char* r_, unsigned char alpha,
                                unsigned char* t_, long it, long ir, long ic,
                                unsigned char* k_, long kt, long kr, long kc,
                                long st, long sr, long sc);

void THByteTensor_validXCorr3DRevptr(unsigned char* r_, unsigned char alpha,
                                     unsigned char* t_, long it, long ir,
                                     long ic, unsigned char* k_, long kt,
                                     long kr, long kc, long st, long sr,
                                     long sc);

void THByteTensor_conv3DRevger(THByteTensor* r_, unsigned char beta,
                               unsigned char alpha, THByteTensor* t_,
                               THByteTensor* k_, long sdepth, long srow,
                               long scol);
void THByteTensor_conv3Dger(THByteTensor* r_, unsigned char beta,
                            unsigned char alpha, THByteTensor* t_,
                            THByteTensor* k_, long sdepth, long srow, long scol,
                            const char* vf, const char* xc);
void THByteTensor_conv3Dmv(THByteTensor* r_, unsigned char beta,
                           unsigned char alpha, THByteTensor* t_,
                           THByteTensor* k_, long sdepth, long srow, long scol,
                           const char* vf, const char* xc);
void THByteTensor_conv3Dmul(THByteTensor* r_, unsigned char beta,
                            unsigned char alpha, THByteTensor* t_,
                            THByteTensor* k_, long sdepth, long srow, long scol,
                            const char* vf, const char* xc);
void THByteTensor_conv3Dcmul(THByteTensor* r_, unsigned char beta,
                             unsigned char alpha, THByteTensor* t_,
                             THByteTensor* k_, long sdepth, long srow,
                             long scol, const char* vf, const char* xc);

void THCharTensor_validXCorr2Dptr(char* r_, char alpha, char* t_, long ir,
                                  long ic, char* k_, long kr, long kc, long sr,
                                  long sc);

void THCharTensor_validConv2Dptr(char* r_, char alpha, char* t_, long ir,
                                 long ic, char* k_, long kr, long kc, long sr,
                                 long sc);

void THCharTensor_fullXCorr2Dptr(char* r_, char alpha, char* t_, long ir,
                                 long ic, char* k_, long kr, long kc, long sr,
                                 long sc);

void THCharTensor_fullConv2Dptr(char* r_, char alpha, char* t_, long ir,
                                long ic, char* k_, long kr, long kc, long sr,
                                long sc);

void THCharTensor_validXCorr2DRevptr(char* r_, char alpha, char* t_, long ir,
                                     long ic, char* k_, long kr, long kc,
                                     long sr, long sc);

void THCharTensor_conv2DRevger(THCharTensor* r_, char beta, char alpha,
                               THCharTensor* t_, THCharTensor* k_, long srow,
                               long scol);
void THCharTensor_conv2DRevgerm(THCharTensor* r_, char beta, char alpha,
                                THCharTensor* t_, THCharTensor* k_, long srow,
                                long scol);
void THCharTensor_conv2Dger(THCharTensor* r_, char beta, char alpha,
                            THCharTensor* t_, THCharTensor* k_, long srow,
                            long scol, const char* vf, const char* xc);
void THCharTensor_conv2Dmv(THCharTensor* r_, char beta, char alpha,
                           THCharTensor* t_, THCharTensor* k_, long srow,
                           long scol, const char* vf, const char* xc);
void THCharTensor_conv2Dmm(THCharTensor* r_, char beta, char alpha,
                           THCharTensor* t_, THCharTensor* k_, long srow,
                           long scol, const char* vf, const char* xc);
void THCharTensor_conv2Dmul(THCharTensor* r_, char beta, char alpha,
                            THCharTensor* t_, THCharTensor* k_, long srow,
                            long scol, const char* vf, const char* xc);
void THCharTensor_conv2Dcmul(THCharTensor* r_, char beta, char alpha,
                             THCharTensor* t_, THCharTensor* k_, long srow,
                             long scol, const char* vf, const char* xc);

void THCharTensor_validXCorr3Dptr(char* r_, char alpha, char* t_, long it,
                                  long ir, long ic, char* k_, long kt, long kr,
                                  long kc, long st, long sr, long sc);

void THCharTensor_validConv3Dptr(char* r_, char alpha, char* t_, long it,
                                 long ir, long ic, char* k_, long kt, long kr,
                                 long kc, long st, long sr, long sc);

void THCharTensor_fullXCorr3Dptr(char* r_, char alpha, char* t_, long it,
                                 long ir, long ic, char* k_, long kt, long kr,
                                 long kc, long st, long sr, long sc);

void THCharTensor_fullConv3Dptr(char* r_, char alpha, char* t_, long it,
                                long ir, long ic, char* k_, long kt, long kr,
                                long kc, long st, long sr, long sc);

void THCharTensor_validXCorr3DRevptr(char* r_, char alpha, char* t_, long it,
                                     long ir, long ic, char* k_, long kt,
                                     long kr, long kc, long st, long sr,
                                     long sc);

void THCharTensor_conv3DRevger(THCharTensor* r_, char beta, char alpha,
                               THCharTensor* t_, THCharTensor* k_, long sdepth,
                               long srow, long scol);
void THCharTensor_conv3Dger(THCharTensor* r_, char beta, char alpha,
                            THCharTensor* t_, THCharTensor* k_, long sdepth,
                            long srow, long scol, const char* vf,
                            const char* xc);
void THCharTensor_conv3Dmv(THCharTensor* r_, char beta, char alpha,
                           THCharTensor* t_, THCharTensor* k_, long sdepth,
                           long srow, long scol, const char* vf,
                           const char* xc);
void THCharTensor_conv3Dmul(THCharTensor* r_, char beta, char alpha,
                            THCharTensor* t_, THCharTensor* k_, long sdepth,
                            long srow, long scol, const char* vf,
                            const char* xc);
void THCharTensor_conv3Dcmul(THCharTensor* r_, char beta, char alpha,
                             THCharTensor* t_, THCharTensor* k_, long sdepth,
                             long srow, long scol, const char* vf,
                             const char* xc);

void THShortTensor_validXCorr2Dptr(short* r_, short alpha, short* t_, long ir,
                                   long ic, short* k_, long kr, long kc,
                                   long sr, long sc);

void THShortTensor_validConv2Dptr(short* r_, short alpha, short* t_, long ir,
                                  long ic, short* k_, long kr, long kc, long sr,
                                  long sc);

void THShortTensor_fullXCorr2Dptr(short* r_, short alpha, short* t_, long ir,
                                  long ic, short* k_, long kr, long kc, long sr,
                                  long sc);

void THShortTensor_fullConv2Dptr(short* r_, short alpha, short* t_, long ir,
                                 long ic, short* k_, long kr, long kc, long sr,
                                 long sc);

void THShortTensor_validXCorr2DRevptr(short* r_, short alpha, short* t_,
                                      long ir, long ic, short* k_, long kr,
                                      long kc, long sr, long sc);

void THShortTensor_conv2DRevger(THShortTensor* r_, short beta, short alpha,
                                THShortTensor* t_, THShortTensor* k_, long srow,
                                long scol);
void THShortTensor_conv2DRevgerm(THShortTensor* r_, short beta, short alpha,
                                 THShortTensor* t_, THShortTensor* k_,
                                 long srow, long scol);
void THShortTensor_conv2Dger(THShortTensor* r_, short beta, short alpha,
                             THShortTensor* t_, THShortTensor* k_, long srow,
                             long scol, const char* vf, const char* xc);
void THShortTensor_conv2Dmv(THShortTensor* r_, short beta, short alpha,
                            THShortTensor* t_, THShortTensor* k_, long srow,
                            long scol, const char* vf, const char* xc);
void THShortTensor_conv2Dmm(THShortTensor* r_, short beta, short alpha,
                            THShortTensor* t_, THShortTensor* k_, long srow,
                            long scol, const char* vf, const char* xc);
void THShortTensor_conv2Dmul(THShortTensor* r_, short beta, short alpha,
                             THShortTensor* t_, THShortTensor* k_, long srow,
                             long scol, const char* vf, const char* xc);
void THShortTensor_conv2Dcmul(THShortTensor* r_, short beta, short alpha,
                              THShortTensor* t_, THShortTensor* k_, long srow,
                              long scol, const char* vf, const char* xc);

void THShortTensor_validXCorr3Dptr(short* r_, short alpha, short* t_, long it,
                                   long ir, long ic, short* k_, long kt,
                                   long kr, long kc, long st, long sr, long sc);

void THShortTensor_validConv3Dptr(short* r_, short alpha, short* t_, long it,
                                  long ir, long ic, short* k_, long kt, long kr,
                                  long kc, long st, long sr, long sc);

void THShortTensor_fullXCorr3Dptr(short* r_, short alpha, short* t_, long it,
                                  long ir, long ic, short* k_, long kt, long kr,
                                  long kc, long st, long sr, long sc);

void THShortTensor_fullConv3Dptr(short* r_, short alpha, short* t_, long it,
                                 long ir, long ic, short* k_, long kt, long kr,
                                 long kc, long st, long sr, long sc);

void THShortTensor_validXCorr3DRevptr(short* r_, short alpha, short* t_,
                                      long it, long ir, long ic, short* k_,
                                      long kt, long kr, long kc, long st,
                                      long sr, long sc);

void THShortTensor_conv3DRevger(THShortTensor* r_, short beta, short alpha,
                                THShortTensor* t_, THShortTensor* k_,
                                long sdepth, long srow, long scol);
void THShortTensor_conv3Dger(THShortTensor* r_, short beta, short alpha,
                             THShortTensor* t_, THShortTensor* k_, long sdepth,
                             long srow, long scol, const char* vf,
                             const char* xc);
void THShortTensor_conv3Dmv(THShortTensor* r_, short beta, short alpha,
                            THShortTensor* t_, THShortTensor* k_, long sdepth,
                            long srow, long scol, const char* vf,
                            const char* xc);
void THShortTensor_conv3Dmul(THShortTensor* r_, short beta, short alpha,
                             THShortTensor* t_, THShortTensor* k_, long sdepth,
                             long srow, long scol, const char* vf,
                             const char* xc);
void THShortTensor_conv3Dcmul(THShortTensor* r_, short beta, short alpha,
                              THShortTensor* t_, THShortTensor* k_, long sdepth,
                              long srow, long scol, const char* vf,
                              const char* xc);

void THIntTensor_validXCorr2Dptr(int* r_, int alpha, int* t_, long ir, long ic,
                                 int* k_, long kr, long kc, long sr, long sc);

void THIntTensor_validConv2Dptr(int* r_, int alpha, int* t_, long ir, long ic,
                                int* k_, long kr, long kc, long sr, long sc);

void THIntTensor_fullXCorr2Dptr(int* r_, int alpha, int* t_, long ir, long ic,
                                int* k_, long kr, long kc, long sr, long sc);

void THIntTensor_fullConv2Dptr(int* r_, int alpha, int* t_, long ir, long ic,
                               int* k_, long kr, long kc, long sr, long sc);

void THIntTensor_validXCorr2DRevptr(int* r_, int alpha, int* t_, long ir,
                                    long ic, int* k_, long kr, long kc, long sr,
                                    long sc);

void THIntTensor_conv2DRevger(THIntTensor* r_, int beta, int alpha,
                              THIntTensor* t_, THIntTensor* k_, long srow,
                              long scol);
void THIntTensor_conv2DRevgerm(THIntTensor* r_, int beta, int alpha,
                               THIntTensor* t_, THIntTensor* k_, long srow,
                               long scol);
void THIntTensor_conv2Dger(THIntTensor* r_, int beta, int alpha,
                           THIntTensor* t_, THIntTensor* k_, long srow,
                           long scol, const char* vf, const char* xc);
void THIntTensor_conv2Dmv(THIntTensor* r_, int beta, int alpha, THIntTensor* t_,
                          THIntTensor* k_, long srow, long scol, const char* vf,
                          const char* xc);
void THIntTensor_conv2Dmm(THIntTensor* r_, int beta, int alpha, THIntTensor* t_,
                          THIntTensor* k_, long srow, long scol, const char* vf,
                          const char* xc);
void THIntTensor_conv2Dmul(THIntTensor* r_, int beta, int alpha,
                           THIntTensor* t_, THIntTensor* k_, long srow,
                           long scol, const char* vf, const char* xc);
void THIntTensor_conv2Dcmul(THIntTensor* r_, int beta, int alpha,
                            THIntTensor* t_, THIntTensor* k_, long srow,
                            long scol, const char* vf, const char* xc);

void THIntTensor_validXCorr3Dptr(int* r_, int alpha, int* t_, long it, long ir,
                                 long ic, int* k_, long kt, long kr, long kc,
                                 long st, long sr, long sc);

void THIntTensor_validConv3Dptr(int* r_, int alpha, int* t_, long it, long ir,
                                long ic, int* k_, long kt, long kr, long kc,
                                long st, long sr, long sc);

void THIntTensor_fullXCorr3Dptr(int* r_, int alpha, int* t_, long it, long ir,
                                long ic, int* k_, long kt, long kr, long kc,
                                long st, long sr, long sc);

void THIntTensor_fullConv3Dptr(int* r_, int alpha, int* t_, long it, long ir,
                               long ic, int* k_, long kt, long kr, long kc,
                               long st, long sr, long sc);

void THIntTensor_validXCorr3DRevptr(int* r_, int alpha, int* t_, long it,
                                    long ir, long ic, int* k_, long kt, long kr,
                                    long kc, long st, long sr, long sc);

void THIntTensor_conv3DRevger(THIntTensor* r_, int beta, int alpha,
                              THIntTensor* t_, THIntTensor* k_, long sdepth,
                              long srow, long scol);
void THIntTensor_conv3Dger(THIntTensor* r_, int beta, int alpha,
                           THIntTensor* t_, THIntTensor* k_, long sdepth,
                           long srow, long scol, const char* vf,
                           const char* xc);
void THIntTensor_conv3Dmv(THIntTensor* r_, int beta, int alpha, THIntTensor* t_,
                          THIntTensor* k_, long sdepth, long srow, long scol,
                          const char* vf, const char* xc);
void THIntTensor_conv3Dmul(THIntTensor* r_, int beta, int alpha,
                           THIntTensor* t_, THIntTensor* k_, long sdepth,
                           long srow, long scol, const char* vf,
                           const char* xc);
void THIntTensor_conv3Dcmul(THIntTensor* r_, int beta, int alpha,
                            THIntTensor* t_, THIntTensor* k_, long sdepth,
                            long srow, long scol, const char* vf,
                            const char* xc);

void THLongTensor_validXCorr2Dptr(long* r_, long alpha, long* t_, long ir,
                                  long ic, long* k_, long kr, long kc, long sr,
                                  long sc);

void THLongTensor_validConv2Dptr(long* r_, long alpha, long* t_, long ir,
                                 long ic, long* k_, long kr, long kc, long sr,
                                 long sc);

void THLongTensor_fullXCorr2Dptr(long* r_, long alpha, long* t_, long ir,
                                 long ic, long* k_, long kr, long kc, long sr,
                                 long sc);

void THLongTensor_fullConv2Dptr(long* r_, long alpha, long* t_, long ir,
                                long ic, long* k_, long kr, long kc, long sr,
                                long sc);

void THLongTensor_validXCorr2DRevptr(long* r_, long alpha, long* t_, long ir,
                                     long ic, long* k_, long kr, long kc,
                                     long sr, long sc);

void THLongTensor_conv2DRevger(THLongTensor* r_, long beta, long alpha,
                               THLongTensor* t_, THLongTensor* k_, long srow,
                               long scol);
void THLongTensor_conv2DRevgerm(THLongTensor* r_, long beta, long alpha,
                                THLongTensor* t_, THLongTensor* k_, long srow,
                                long scol);
void THLongTensor_conv2Dger(THLongTensor* r_, long beta, long alpha,
                            THLongTensor* t_, THLongTensor* k_, long srow,
                            long scol, const char* vf, const char* xc);
void THLongTensor_conv2Dmv(THLongTensor* r_, long beta, long alpha,
                           THLongTensor* t_, THLongTensor* k_, long srow,
                           long scol, const char* vf, const char* xc);
void THLongTensor_conv2Dmm(THLongTensor* r_, long beta, long alpha,
                           THLongTensor* t_, THLongTensor* k_, long srow,
                           long scol, const char* vf, const char* xc);
void THLongTensor_conv2Dmul(THLongTensor* r_, long beta, long alpha,
                            THLongTensor* t_, THLongTensor* k_, long srow,
                            long scol, const char* vf, const char* xc);
void THLongTensor_conv2Dcmul(THLongTensor* r_, long beta, long alpha,
                             THLongTensor* t_, THLongTensor* k_, long srow,
                             long scol, const char* vf, const char* xc);

void THLongTensor_validXCorr3Dptr(long* r_, long alpha, long* t_, long it,
                                  long ir, long ic, long* k_, long kt, long kr,
                                  long kc, long st, long sr, long sc);

void THLongTensor_validConv3Dptr(long* r_, long alpha, long* t_, long it,
                                 long ir, long ic, long* k_, long kt, long kr,
                                 long kc, long st, long sr, long sc);

void THLongTensor_fullXCorr3Dptr(long* r_, long alpha, long* t_, long it,
                                 long ir, long ic, long* k_, long kt, long kr,
                                 long kc, long st, long sr, long sc);

void THLongTensor_fullConv3Dptr(long* r_, long alpha, long* t_, long it,
                                long ir, long ic, long* k_, long kt, long kr,
                                long kc, long st, long sr, long sc);

void THLongTensor_validXCorr3DRevptr(long* r_, long alpha, long* t_, long it,
                                     long ir, long ic, long* k_, long kt,
                                     long kr, long kc, long st, long sr,
                                     long sc);

void THLongTensor_conv3DRevger(THLongTensor* r_, long beta, long alpha,
                               THLongTensor* t_, THLongTensor* k_, long sdepth,
                               long srow, long scol);
void THLongTensor_conv3Dger(THLongTensor* r_, long beta, long alpha,
                            THLongTensor* t_, THLongTensor* k_, long sdepth,
                            long srow, long scol, const char* vf,
                            const char* xc);
void THLongTensor_conv3Dmv(THLongTensor* r_, long beta, long alpha,
                           THLongTensor* t_, THLongTensor* k_, long sdepth,
                           long srow, long scol, const char* vf,
                           const char* xc);
void THLongTensor_conv3Dmul(THLongTensor* r_, long beta, long alpha,
                            THLongTensor* t_, THLongTensor* k_, long sdepth,
                            long srow, long scol, const char* vf,
                            const char* xc);
void THLongTensor_conv3Dcmul(THLongTensor* r_, long beta, long alpha,
                             THLongTensor* t_, THLongTensor* k_, long sdepth,
                             long srow, long scol, const char* vf,
                             const char* xc);

void THFloatTensor_gesv(THFloatTensor* rb_, THFloatTensor* ra_,
                        THFloatTensor* b_, THFloatTensor* a_);
void THFloatTensor_trtrs(THFloatTensor* rb_, THFloatTensor* ra_,
                         THFloatTensor* b_, THFloatTensor* a_, const char* uplo,
                         const char* trans, const char* diag);
void THFloatTensor_gels(THFloatTensor* rb_, THFloatTensor* ra_,
                        THFloatTensor* b_, THFloatTensor* a_);
void THFloatTensor_syev(THFloatTensor* re_, THFloatTensor* rv_,
                        THFloatTensor* a_, const char* jobz, const char* uplo);
void THFloatTensor_geev(THFloatTensor* re_, THFloatTensor* rv_,
                        THFloatTensor* a_, const char* jobvr);
void THFloatTensor_gesvd(THFloatTensor* ru_, THFloatTensor* rs_,
                         THFloatTensor* rv_, THFloatTensor* a,
                         const char* jobu);
void THFloatTensor_gesvd2(THFloatTensor* ru_, THFloatTensor* rs_,
                          THFloatTensor* rv_, THFloatTensor* ra_,
                          THFloatTensor* a, const char* jobu);
void THFloatTensor_getri(THFloatTensor* ra_, THFloatTensor* a);
void THFloatTensor_potrf(THFloatTensor* ra_, THFloatTensor* a,
                         const char* uplo);
void THFloatTensor_potrs(THFloatTensor* rb_, THFloatTensor* b_,
                         THFloatTensor* a_, const char* uplo);
void THFloatTensor_potri(THFloatTensor* ra_, THFloatTensor* a,
                         const char* uplo);
void THFloatTensor_qr(THFloatTensor* rq_, THFloatTensor* rr_, THFloatTensor* a);
void THFloatTensor_geqrf(THFloatTensor* ra_, THFloatTensor* rtau_,
                         THFloatTensor* a);
void THFloatTensor_orgqr(THFloatTensor* ra_, THFloatTensor* a,
                         THFloatTensor* tau);
void THFloatTensor_ormqr(THFloatTensor* ra_, THFloatTensor* a,
                         THFloatTensor* tau, THFloatTensor* c, const char* side,
                         const char* trans);
void THFloatTensor_pstrf(THFloatTensor* ra_, THIntTensor* rpiv_,
                         THFloatTensor* a, const char* uplo, float tol);

void THFloatTensor_btrifact(THFloatTensor* ra_, THIntTensor* rpivots_,
                            THIntTensor* rinfo_, int pivot, THFloatTensor* a);
void THFloatTensor_btrisolve(THFloatTensor* rb_, THFloatTensor* b,
                             THFloatTensor* atf, THIntTensor* pivots);

void THDoubleTensor_gesv(THDoubleTensor* rb_, THDoubleTensor* ra_,
                         THDoubleTensor* b_, THDoubleTensor* a_);
void THDoubleTensor_trtrs(THDoubleTensor* rb_, THDoubleTensor* ra_,
                          THDoubleTensor* b_, THDoubleTensor* a_,
                          const char* uplo, const char* trans,
                          const char* diag);
void THDoubleTensor_gels(THDoubleTensor* rb_, THDoubleTensor* ra_,
                         THDoubleTensor* b_, THDoubleTensor* a_);
void THDoubleTensor_syev(THDoubleTensor* re_, THDoubleTensor* rv_,
                         THDoubleTensor* a_, const char* jobz,
                         const char* uplo);
void THDoubleTensor_geev(THDoubleTensor* re_, THDoubleTensor* rv_,
                         THDoubleTensor* a_, const char* jobvr);
void THDoubleTensor_gesvd(THDoubleTensor* ru_, THDoubleTensor* rs_,
                          THDoubleTensor* rv_, THDoubleTensor* a,
                          const char* jobu);
void THDoubleTensor_gesvd2(THDoubleTensor* ru_, THDoubleTensor* rs_,
                           THDoubleTensor* rv_, THDoubleTensor* ra_,
                           THDoubleTensor* a, const char* jobu);
void THDoubleTensor_getri(THDoubleTensor* ra_, THDoubleTensor* a);
void THDoubleTensor_potrf(THDoubleTensor* ra_, THDoubleTensor* a,
                          const char* uplo);
void THDoubleTensor_potrs(THDoubleTensor* rb_, THDoubleTensor* b_,
                          THDoubleTensor* a_, const char* uplo);
void THDoubleTensor_potri(THDoubleTensor* ra_, THDoubleTensor* a,
                          const char* uplo);
void THDoubleTensor_qr(THDoubleTensor* rq_, THDoubleTensor* rr_,
                       THDoubleTensor* a);
void THDoubleTensor_geqrf(THDoubleTensor* ra_, THDoubleTensor* rtau_,
                          THDoubleTensor* a);
void THDoubleTensor_orgqr(THDoubleTensor* ra_, THDoubleTensor* a,
                          THDoubleTensor* tau);
void THDoubleTensor_ormqr(THDoubleTensor* ra_, THDoubleTensor* a,
                          THDoubleTensor* tau, THDoubleTensor* c,
                          const char* side, const char* trans);
void THDoubleTensor_pstrf(THDoubleTensor* ra_, THIntTensor* rpiv_,
                          THDoubleTensor* a, const char* uplo, double tol);

void THDoubleTensor_btrifact(THDoubleTensor* ra_, THIntTensor* rpivots_,
                             THIntTensor* rinfo_, int pivot, THDoubleTensor* a);
void THDoubleTensor_btrisolve(THDoubleTensor* rb_, THDoubleTensor* b,
                              THDoubleTensor* atf, THIntTensor* pivots);
