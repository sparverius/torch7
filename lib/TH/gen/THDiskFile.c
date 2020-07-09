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

typedef struct THFile__ THFile;

int THFile_isOpened(THFile* self);
int THFile_isQuiet(THFile* self);
int THFile_isReadable(THFile* self);
int THFile_isWritable(THFile* self);
int THFile_isBinary(THFile* self);
int THFile_isAutoSpacing(THFile* self);
int THFile_hasError(THFile* self);

void THFile_binary(THFile* self);
void THFile_ascii(THFile* self);
void THFile_autoSpacing(THFile* self);
void THFile_noAutoSpacing(THFile* self);
void THFile_quiet(THFile* self);
void THFile_pedantic(THFile* self);
void THFile_clearError(THFile* self);

unsigned char THFile_readByteScalar(THFile* self);
char THFile_readCharScalar(THFile* self);
short THFile_readShortScalar(THFile* self);
int THFile_readIntScalar(THFile* self);
long THFile_readLongScalar(THFile* self);
float THFile_readFloatScalar(THFile* self);
double THFile_readDoubleScalar(THFile* self);

void THFile_writeByteScalar(THFile* self, unsigned char scalar);
void THFile_writeCharScalar(THFile* self, char scalar);
void THFile_writeShortScalar(THFile* self, short scalar);
void THFile_writeIntScalar(THFile* self, int scalar);
void THFile_writeLongScalar(THFile* self, long scalar);
void THFile_writeFloatScalar(THFile* self, float scalar);
void THFile_writeDoubleScalar(THFile* self, double scalar);

size_t THFile_readByte(THFile* self, THByteStorage* storage);
size_t THFile_readChar(THFile* self, THCharStorage* storage);
size_t THFile_readShort(THFile* self, THShortStorage* storage);
size_t THFile_readInt(THFile* self, THIntStorage* storage);
size_t THFile_readLong(THFile* self, THLongStorage* storage);
size_t THFile_readFloat(THFile* self, THFloatStorage* storage);
size_t THFile_readDouble(THFile* self, THDoubleStorage* storage);

size_t THFile_writeByte(THFile* self, THByteStorage* storage);
size_t THFile_writeChar(THFile* self, THCharStorage* storage);
size_t THFile_writeShort(THFile* self, THShortStorage* storage);
size_t THFile_writeInt(THFile* self, THIntStorage* storage);
size_t THFile_writeLong(THFile* self, THLongStorage* storage);
size_t THFile_writeFloat(THFile* self, THFloatStorage* storage);
size_t THFile_writeDouble(THFile* self, THDoubleStorage* storage);

size_t THFile_readByteRaw(THFile* self, unsigned char* data, size_t n);
size_t THFile_readCharRaw(THFile* self, char* data, size_t n);
size_t THFile_readShortRaw(THFile* self, short* data, size_t n);
size_t THFile_readIntRaw(THFile* self, int* data, size_t n);
size_t THFile_readLongRaw(THFile* self, long* data, size_t n);
size_t THFile_readFloatRaw(THFile* self, float* data, size_t n);
size_t THFile_readDoubleRaw(THFile* self, double* data, size_t n);
size_t THFile_readStringRaw(THFile* self, const char* format, char** str_);

size_t THFile_writeByteRaw(THFile* self, unsigned char* data, size_t n);
size_t THFile_writeCharRaw(THFile* self, char* data, size_t n);
size_t THFile_writeShortRaw(THFile* self, short* data, size_t n);
size_t THFile_writeIntRaw(THFile* self, int* data, size_t n);
size_t THFile_writeLongRaw(THFile* self, long* data, size_t n);
size_t THFile_writeFloatRaw(THFile* self, float* data, size_t n);
size_t THFile_writeDoubleRaw(THFile* self, double* data, size_t n);
size_t THFile_writeStringRaw(THFile* self, const char* str, size_t size);

THHalf THFile_readHalfScalar(THFile* self);
void THFile_writeHalfScalar(THFile* self, THHalf scalar);
size_t THFile_readHalf(THFile* self, THHalfStorage* storage);
size_t THFile_writeHalf(THFile* self, THHalfStorage* storage);
size_t THFile_readHalfRaw(THFile* self, THHalf* data, size_t size);
size_t THFile_writeHalfRaw(THFile* self, THHalf* data, size_t size);

void THFile_synchronize(THFile* self);
void THFile_seek(THFile* self, size_t position);
void THFile_seekEnd(THFile* self);
size_t THFile_position(THFile* self);
void THFile_close(THFile* self);
void THFile_free(THFile* self);

THFile* THDiskFile_new(const char* name, const char* mode, int isQuiet);
THFile* THPipeFile_new(const char* name, const char* mode, int isQuiet);

const char* THDiskFile_name(THFile* self);

int THDiskFile_isLittleEndianCPU(void);
int THDiskFile_isBigEndianCPU(void);
void THDiskFile_nativeEndianEncoding(THFile* self);
void THDiskFile_littleEndianEncoding(THFile* self);
void THDiskFile_bigEndianEncoding(THFile* self);
void THDiskFile_longSize(THFile* self, int size);
void THDiskFile_noBuffer(THFile* self);

struct THFile__ {
  struct THFileVTable* vtable;

  int isQuiet;
  int isReadable;
  int isWritable;
  int isBinary;
  int isAutoSpacing;
  int hasError;
};

struct THFileVTable {
  int (*isOpened)(THFile* self);

  size_t (*readByte)(THFile* self, unsigned char* data, size_t n);
  size_t (*readChar)(THFile* self, char* data, size_t n);
  size_t (*readShort)(THFile* self, short* data, size_t n);
  size_t (*readInt)(THFile* self, int* data, size_t n);
  size_t (*readLong)(THFile* self, long* data, size_t n);
  size_t (*readFloat)(THFile* self, float* data, size_t n);
  size_t (*readDouble)(THFile* self, double* data, size_t n);
  size_t (*readHalf)(THFile* self, THHalf* data, size_t n);
  size_t (*readString)(THFile* self, const char* format, char** str_);

  size_t (*writeByte)(THFile* self, unsigned char* data, size_t n);
  size_t (*writeChar)(THFile* self, char* data, size_t n);
  size_t (*writeShort)(THFile* self, short* data, size_t n);
  size_t (*writeInt)(THFile* self, int* data, size_t n);
  size_t (*writeLong)(THFile* self, long* data, size_t n);
  size_t (*writeFloat)(THFile* self, float* data, size_t n);
  size_t (*writeDouble)(THFile* self, double* data, size_t n);
  size_t (*writeHalf)(THFile* self, THHalf* data, size_t n);
  size_t (*writeString)(THFile* self, const char* str, size_t size);

  void (*synchronize)(THFile* self);
  void (*seek)(THFile* self, size_t position);
  void (*seekEnd)(THFile* self);
  size_t (*position)(THFile* self);
  void (*close)(THFile* self);
  void (*free)(THFile* self);
};

typedef struct THDiskFile__ {
  THFile file;

  FILE* handle;
  char* name;
  int isNativeEncoding;
  int longSize;

} THDiskFile;

static int THDiskFile_isOpened(THFile* self) {
  THDiskFile* dfself = (THDiskFile*)self;
  return (dfself->handle != NULL);
}

const char* THDiskFile_name(THFile* self) {
  THDiskFile* dfself = (THDiskFile*)self;
  return dfself->name;
}
static int THDiskFile_mode(const char* mode, int* isReadable, int* isWritable) {
  *isReadable = 0;
  *isWritable = 0;
  if (strlen(mode) == 1) {
    if (*mode == 'r') {
      *isReadable = 1;
      return 1;
    } else if (*mode == 'w') {
      *isWritable = 1;
      return 1;
    }
  } else if (strlen(mode) == 2) {
    if (mode[0] == 'r' && mode[1] == 'w') {
      *isReadable = 1;
      *isWritable = 1;
      return 1;
    }
  }
  return 0;
}

static void THDiskFile_synchronize(THFile* self) {
  THDiskFile* dfself = (THDiskFile*)(self);
  do {
    _THArgCheck("THDiskFile.c", 145, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  fflush(dfself->handle);
}

static void THDiskFile_seek(THFile* self, size_t position) {
  THDiskFile* dfself = (THDiskFile*)(self);

  do {
    _THArgCheck("THDiskFile.c", 152, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THDiskFile.c", 163, position <= (size_t)9223372036854775807LL,
                2, "position must be smaller than LLONG_MAX");
  } while (0);
  if (fseeko(dfself->handle, (off_t)position, SEEK_SET) < 0)

  {
    dfself->file.hasError = 1;
    if (!dfself->file.isQuiet)
      _THError("THDiskFile.c", 170, "unable to seek to position %zu", position);
  }
}

static void THDiskFile_seekEnd(THFile* self) {
  THDiskFile* dfself = (THDiskFile*)(self);

  do {
    _THArgCheck("THDiskFile.c", 177, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);

  if (fseeko(dfself->handle, 0, SEEK_END) < 0)

  {
    dfself->file.hasError = 1;
    if (!dfself->file.isQuiet)
      _THError("THDiskFile.c", 188, "unable to seek at end of file");
  }
}

static size_t THDiskFile_position(THFile* self) {
  THDiskFile* dfself = (THDiskFile*)(self);
  do {
    _THArgCheck("THDiskFile.c", 194, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);

  off_t offset = ftello(dfself->handle);

  if (offset > -1)
    return (size_t)offset;
  else if (!dfself->file.isQuiet)
    _THError(
        "THDiskFile.c", 206,
        "unable to obtain disk file offset (maybe a long overflow occurred)");

  return 0;
}

static void THDiskFile_close(THFile* self) {
  THDiskFile* dfself = (THDiskFile*)(self);
  do {
    _THArgCheck("THDiskFile.c", 214, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  fclose(dfself->handle);
  dfself->handle = NULL;
}

static void THDiskFile_reverseMemory(void* dst, const void* src,
                                     size_t blockSize, size_t numBlocks) {
  if (blockSize > 1) {
    size_t halfBlockSize = blockSize / 2;
    char* charSrc = (char*)src;
    char* charDst = (char*)dst;
    size_t b, i;
    for (b = 0; b < numBlocks; b++) {
      for (i = 0; i < halfBlockSize; i++) {
        char z = charSrc[i];
        charDst[i] = charSrc[blockSize - 1 - i];
        charDst[blockSize - 1 - i] = z;
      }
      charSrc += blockSize;
      charDst += blockSize;
    }
  }
}

int THDiskFile_isLittleEndianCPU(void) {
  int x = 7;
  char* ptr = (char*)&x;

  if (ptr[0] == 0)
    return 0;
  else
    return 1;
}

int THDiskFile_isBigEndianCPU(void) {
  return (!THDiskFile_isLittleEndianCPU());
}

void THDiskFile_nativeEndianEncoding(THFile* self) {
  THDiskFile* dfself = (THDiskFile*)(self);
  do {
    _THArgCheck("THDiskFile.c", 256, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  dfself->isNativeEncoding = 1;
}

void THDiskFile_littleEndianEncoding(THFile* self) {
  THDiskFile* dfself = (THDiskFile*)(self);
  do {
    _THArgCheck("THDiskFile.c", 262, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  dfself->isNativeEncoding = THDiskFile_isLittleEndianCPU();
}

void THDiskFile_bigEndianEncoding(THFile* self) {
  THDiskFile* dfself = (THDiskFile*)(self);
  do {
    _THArgCheck("THDiskFile.c", 268, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  dfself->isNativeEncoding = !THDiskFile_isLittleEndianCPU();
}

void THDiskFile_longSize(THFile* self, int size) {
  THDiskFile* dfself = (THDiskFile*)(self);
  do {
    _THArgCheck("THDiskFile.c", 276, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THDiskFile.c", 277, size == 0 || size == 4 || size == 8, 1,
                "Invalid long size specified");
  } while (0);
  dfself->longSize = size;
}

void THDiskFile_noBuffer(THFile* self) {
  THDiskFile* dfself = (THDiskFile*)(self);
  do {
    _THArgCheck("THDiskFile.c", 284, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  if (setvbuf(dfself->handle, NULL, _IONBF, 0)) {
    _THError("THDiskFile.c", 286, "error: cannot disable buffer");
  }
}

static void THDiskFile_free(THFile* self) {
  THDiskFile* dfself = (THDiskFile*)(self);
  if (dfself->handle) fclose(dfself->handle);
  THFree(dfself->name);
  THFree(dfself);
}
static size_t THDiskFile_readByte(THFile* self, unsigned char* data, size_t n) {
  THDiskFile* dfself = (THDiskFile*)(self);
  size_t nread = 0L;
  do {
    _THArgCheck("THDiskFile.c", 305, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THDiskFile.c", 305, dfself->file.isReadable, 1,
                "attempt to read in a write-only file");
  } while (0);
  if (dfself->file.isBinary) {
    nread = fread(data, sizeof(unsigned char), n, dfself->handle);
    if (!dfself->isNativeEncoding && (sizeof(unsigned char) > 1) && (nread > 0))
      THDiskFile_reverseMemory(data, data, sizeof(unsigned char), nread);
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      nread = fread(data, 1, n, dfself->handle);
      break;
    }
    if (dfself->file.isAutoSpacing && (n > 0)) {
      int c = fgetc(dfself->handle);
      if ((c != '\n') && (c != EOF)) ungetc(c, dfself->handle);
    }
  }
  if (nread != n) {
    dfself->file.hasError = 1;
    if (!dfself->file.isQuiet)
      _THError("THDiskFile.c", 305, "read error: read %d blocks instead of %d",
               nread, n);
  }
  return nread;
}
static size_t THDiskFile_writeByte(THFile* self, unsigned char* data,
                                   size_t n) {
  THDiskFile* dfself = (THDiskFile*)(self);
  size_t nwrite = 0L;
  do {
    _THArgCheck("THDiskFile.c", 305, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THDiskFile.c", 305, dfself->file.isWritable, 1,
                "attempt to write in a read-only file");
  } while (0);
  if (dfself->file.isBinary) {
    if (dfself->isNativeEncoding) {
      nwrite = fwrite(data, sizeof(unsigned char), n, dfself->handle);
    } else {
      if (sizeof(unsigned char) > 1) {
        char* buffer = THAlloc(sizeof(unsigned char) * n);
        THDiskFile_reverseMemory(buffer, data, sizeof(unsigned char), n);
        nwrite = fwrite(buffer, sizeof(unsigned char), n, dfself->handle);
        THFree(buffer);
      } else
        nwrite = fwrite(data, sizeof(unsigned char), n, dfself->handle);
    }
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      nwrite = fwrite(data, 1, n, dfself->handle);
      break;
      if (dfself->file.isAutoSpacing && (i < n - 1))
        fprintf(dfself->handle, " ");
    }
    if (dfself->file.isAutoSpacing && (n > 0)) fprintf(dfself->handle, "\n");
  }
  if (nwrite != n) {
    dfself->file.hasError = 1;
    if (!dfself->file.isQuiet)
      _THError("THDiskFile.c", 305,
               "write error: wrote %d blocks instead of %d", nwrite, n);
  }
  return nwrite;
}

static size_t THDiskFile_readChar(THFile* self, char* data, size_t n) {
  THDiskFile* dfself = (THDiskFile*)(self);
  size_t nread = 0L;
  do {
    _THArgCheck("THDiskFile.c", 309, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THDiskFile.c", 309, dfself->file.isReadable, 1,
                "attempt to read in a write-only file");
  } while (0);
  if (dfself->file.isBinary) {
    nread = fread(data, sizeof(char), n, dfself->handle);
    if (!dfself->isNativeEncoding && (sizeof(char) > 1) && (nread > 0))
      THDiskFile_reverseMemory(data, data, sizeof(char), nread);
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      nread = fread(data, 1, n, dfself->handle);
      break;
    }
    if (dfself->file.isAutoSpacing && (n > 0)) {
      int c = fgetc(dfself->handle);
      if ((c != '\n') && (c != EOF)) ungetc(c, dfself->handle);
    }
  }
  if (nread != n) {
    dfself->file.hasError = 1;
    if (!dfself->file.isQuiet)
      _THError("THDiskFile.c", 309, "read error: read %d blocks instead of %d",
               nread, n);
  }
  return nread;
}
static size_t THDiskFile_writeChar(THFile* self, char* data, size_t n) {
  THDiskFile* dfself = (THDiskFile*)(self);
  size_t nwrite = 0L;
  do {
    _THArgCheck("THDiskFile.c", 309, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THDiskFile.c", 309, dfself->file.isWritable, 1,
                "attempt to write in a read-only file");
  } while (0);
  if (dfself->file.isBinary) {
    if (dfself->isNativeEncoding) {
      nwrite = fwrite(data, sizeof(char), n, dfself->handle);
    } else {
      if (sizeof(char) > 1) {
        char* buffer = THAlloc(sizeof(char) * n);
        THDiskFile_reverseMemory(buffer, data, sizeof(char), n);
        nwrite = fwrite(buffer, sizeof(char), n, dfself->handle);
        THFree(buffer);
      } else
        nwrite = fwrite(data, sizeof(char), n, dfself->handle);
    }
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      nwrite = fwrite(data, 1, n, dfself->handle);
      break;
      if (dfself->file.isAutoSpacing && (i < n - 1))
        fprintf(dfself->handle, " ");
    }
    if (dfself->file.isAutoSpacing && (n > 0)) fprintf(dfself->handle, "\n");
  }
  if (nwrite != n) {
    dfself->file.hasError = 1;
    if (!dfself->file.isQuiet)
      _THError("THDiskFile.c", 309,
               "write error: wrote %d blocks instead of %d", nwrite, n);
  }
  return nwrite;
}

static size_t THDiskFile_readShort(THFile* self, short* data, size_t n) {
  THDiskFile* dfself = (THDiskFile*)(self);
  size_t nread = 0L;
  do {
    _THArgCheck("THDiskFile.c", 312, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THDiskFile.c", 312, dfself->file.isReadable, 1,
                "attempt to read in a write-only file");
  } while (0);
  if (dfself->file.isBinary) {
    nread = fread(data, sizeof(short), n, dfself->handle);
    if (!dfself->isNativeEncoding && (sizeof(short) > 1) && (nread > 0))
      THDiskFile_reverseMemory(data, data, sizeof(short), nread);
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      int ret = fscanf(dfself->handle, "%hd", &data[i]);
      if (ret <= 0)
        break;
      else
        nread++;
    }
    if (dfself->file.isAutoSpacing && (n > 0)) {
      int c = fgetc(dfself->handle);
      if ((c != '\n') && (c != EOF)) ungetc(c, dfself->handle);
    }
  }
  if (nread != n) {
    dfself->file.hasError = 1;
    if (!dfself->file.isQuiet)
      _THError("THDiskFile.c", 312, "read error: read %d blocks instead of %d",
               nread, n);
  }
  return nread;
}
static size_t THDiskFile_writeShort(THFile* self, short* data, size_t n) {
  THDiskFile* dfself = (THDiskFile*)(self);
  size_t nwrite = 0L;
  do {
    _THArgCheck("THDiskFile.c", 312, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THDiskFile.c", 312, dfself->file.isWritable, 1,
                "attempt to write in a read-only file");
  } while (0);
  if (dfself->file.isBinary) {
    if (dfself->isNativeEncoding) {
      nwrite = fwrite(data, sizeof(short), n, dfself->handle);
    } else {
      if (sizeof(short) > 1) {
        char* buffer = THAlloc(sizeof(short) * n);
        THDiskFile_reverseMemory(buffer, data, sizeof(short), n);
        nwrite = fwrite(buffer, sizeof(short), n, dfself->handle);
        THFree(buffer);
      } else
        nwrite = fwrite(data, sizeof(short), n, dfself->handle);
    }
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      int ret = fprintf(dfself->handle, "%hd", data[i]);
      if (ret <= 0)
        break;
      else
        nwrite++;
      if (dfself->file.isAutoSpacing && (i < n - 1))
        fprintf(dfself->handle, " ");
    }
    if (dfself->file.isAutoSpacing && (n > 0)) fprintf(dfself->handle, "\n");
  }
  if (nwrite != n) {
    dfself->file.hasError = 1;
    if (!dfself->file.isQuiet)
      _THError("THDiskFile.c", 312,
               "write error: wrote %d blocks instead of %d", nwrite, n);
  }
  return nwrite;
}

static size_t THDiskFile_readInt(THFile* self, int* data, size_t n) {
  THDiskFile* dfself = (THDiskFile*)(self);
  size_t nread = 0L;
  do {
    _THArgCheck("THDiskFile.c", 319, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THDiskFile.c", 319, dfself->file.isReadable, 1,
                "attempt to read in a write-only file");
  } while (0);
  if (dfself->file.isBinary) {
    nread = fread(data, sizeof(int), n, dfself->handle);
    if (!dfself->isNativeEncoding && (sizeof(int) > 1) && (nread > 0))
      THDiskFile_reverseMemory(data, data, sizeof(int), nread);
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      int ret = fscanf(dfself->handle, "%d", &data[i]);
      if (ret <= 0)
        break;
      else
        nread++;
    }
    if (dfself->file.isAutoSpacing && (n > 0)) {
      int c = fgetc(dfself->handle);
      if ((c != '\n') && (c != EOF)) ungetc(c, dfself->handle);
    }
  }
  if (nread != n) {
    dfself->file.hasError = 1;
    if (!dfself->file.isQuiet)
      _THError("THDiskFile.c", 319, "read error: read %d blocks instead of %d",
               nread, n);
  }
  return nread;
}
static size_t THDiskFile_writeInt(THFile* self, int* data, size_t n) {
  THDiskFile* dfself = (THDiskFile*)(self);
  size_t nwrite = 0L;
  do {
    _THArgCheck("THDiskFile.c", 319, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THDiskFile.c", 319, dfself->file.isWritable, 1,
                "attempt to write in a read-only file");
  } while (0);
  if (dfself->file.isBinary) {
    if (dfself->isNativeEncoding) {
      nwrite = fwrite(data, sizeof(int), n, dfself->handle);
    } else {
      if (sizeof(int) > 1) {
        char* buffer = THAlloc(sizeof(int) * n);
        THDiskFile_reverseMemory(buffer, data, sizeof(int), n);
        nwrite = fwrite(buffer, sizeof(int), n, dfself->handle);
        THFree(buffer);
      } else
        nwrite = fwrite(data, sizeof(int), n, dfself->handle);
    }
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      int ret = fprintf(dfself->handle, "%d", data[i]);
      if (ret <= 0)
        break;
      else
        nwrite++;
      if (dfself->file.isAutoSpacing && (i < n - 1))
        fprintf(dfself->handle, " ");
    }
    if (dfself->file.isAutoSpacing && (n > 0)) fprintf(dfself->handle, "\n");
  }
  if (nwrite != n) {
    dfself->file.hasError = 1;
    if (!dfself->file.isQuiet)
      _THError("THDiskFile.c", 319,
               "write error: wrote %d blocks instead of %d", nwrite, n);
  }
  return nwrite;
}

static size_t THDiskFile_readFloat(THFile* self, float* data, size_t n) {
  THDiskFile* dfself = (THDiskFile*)(self);
  size_t nread = 0L;
  do {
    _THArgCheck("THDiskFile.c", 325, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THDiskFile.c", 325, dfself->file.isReadable, 1,
                "attempt to read in a write-only file");
  } while (0);
  if (dfself->file.isBinary) {
    nread = fread(data, sizeof(float), n, dfself->handle);
    if (!dfself->isNativeEncoding && (sizeof(float) > 1) && (nread > 0))
      THDiskFile_reverseMemory(data, data, sizeof(float), nread);
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      int ret = fscanf(dfself->handle, "%g", &data[i]);
      if (ret <= 0)
        break;
      else
        nread++;
    }
    if (dfself->file.isAutoSpacing && (n > 0)) {
      int c = fgetc(dfself->handle);
      if ((c != '\n') && (c != EOF)) ungetc(c, dfself->handle);
    }
  }
  if (nread != n) {
    dfself->file.hasError = 1;
    if (!dfself->file.isQuiet)
      _THError("THDiskFile.c", 325, "read error: read %d blocks instead of %d",
               nread, n);
  }
  return nread;
}
static size_t THDiskFile_writeFloat(THFile* self, float* data, size_t n) {
  THDiskFile* dfself = (THDiskFile*)(self);
  size_t nwrite = 0L;
  do {
    _THArgCheck("THDiskFile.c", 325, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THDiskFile.c", 325, dfself->file.isWritable, 1,
                "attempt to write in a read-only file");
  } while (0);
  if (dfself->file.isBinary) {
    if (dfself->isNativeEncoding) {
      nwrite = fwrite(data, sizeof(float), n, dfself->handle);
    } else {
      if (sizeof(float) > 1) {
        char* buffer = THAlloc(sizeof(float) * n);
        THDiskFile_reverseMemory(buffer, data, sizeof(float), n);
        nwrite = fwrite(buffer, sizeof(float), n, dfself->handle);
        THFree(buffer);
      } else
        nwrite = fwrite(data, sizeof(float), n, dfself->handle);
    }
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      int ret = fprintf(dfself->handle, "%.9g", data[i]);
      if (ret <= 0)
        break;
      else
        nwrite++;
      if (dfself->file.isAutoSpacing && (i < n - 1))
        fprintf(dfself->handle, " ");
    }
    if (dfself->file.isAutoSpacing && (n > 0)) fprintf(dfself->handle, "\n");
  }
  if (nwrite != n) {
    dfself->file.hasError = 1;
    if (!dfself->file.isQuiet)
      _THError("THDiskFile.c", 325,
               "write error: wrote %d blocks instead of %d", nwrite, n);
  }
  return nwrite;
}

static size_t THDiskFile_readHalf(THFile* self, THHalf* data, size_t n) {
  THDiskFile* dfself = (THDiskFile*)(self);
  size_t nread = 0L;
  do {
    _THArgCheck("THDiskFile.c", 332, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THDiskFile.c", 332, dfself->file.isReadable, 1,
                "attempt to read in a write-only file");
  } while (0);
  if (dfself->file.isBinary) {
    nread = fread(data, sizeof(THHalf), n, dfself->handle);
    if (!dfself->isNativeEncoding && (sizeof(THHalf) > 1) && (nread > 0))
      THDiskFile_reverseMemory(data, data, sizeof(THHalf), nread);
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      float buf;
      int ret = fscanf(dfself->handle, "%g", &buf);
      if (ret <= 0)
        break;
      else {
        data[i] = TH_float2half(buf);
        nread++;
      };
    }
    if (dfself->file.isAutoSpacing && (n > 0)) {
      int c = fgetc(dfself->handle);
      if ((c != '\n') && (c != EOF)) ungetc(c, dfself->handle);
    }
  }
  if (nread != n) {
    dfself->file.hasError = 1;
    if (!dfself->file.isQuiet)
      _THError("THDiskFile.c", 332, "read error: read %d blocks instead of %d",
               nread, n);
  }
  return nread;
}
static size_t THDiskFile_writeHalf(THFile* self, THHalf* data, size_t n) {
  THDiskFile* dfself = (THDiskFile*)(self);
  size_t nwrite = 0L;
  do {
    _THArgCheck("THDiskFile.c", 332, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THDiskFile.c", 332, dfself->file.isWritable, 1,
                "attempt to write in a read-only file");
  } while (0);
  if (dfself->file.isBinary) {
    if (dfself->isNativeEncoding) {
      nwrite = fwrite(data, sizeof(THHalf), n, dfself->handle);
    } else {
      if (sizeof(THHalf) > 1) {
        char* buffer = THAlloc(sizeof(THHalf) * n);
        THDiskFile_reverseMemory(buffer, data, sizeof(THHalf), n);
        nwrite = fwrite(buffer, sizeof(THHalf), n, dfself->handle);
        THFree(buffer);
      } else
        nwrite = fwrite(data, sizeof(THHalf), n, dfself->handle);
    }
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      int ret = fprintf(dfself->handle, "%.9g", TH_half2float(data[i]));
      if (ret <= 0)
        break;
      else
        nwrite++;
      if (dfself->file.isAutoSpacing && (i < n - 1))
        fprintf(dfself->handle, " ");
    }
    if (dfself->file.isAutoSpacing && (n > 0)) fprintf(dfself->handle, "\n");
  }
  if (nwrite != n) {
    dfself->file.hasError = 1;
    if (!dfself->file.isQuiet)
      _THError("THDiskFile.c", 332,
               "write error: wrote %d blocks instead of %d", nwrite, n);
  }
  return nwrite;
}
static size_t THDiskFile_readDouble(THFile* self, double* data, size_t n) {
  THDiskFile* dfself = (THDiskFile*)(self);
  size_t nread = 0L;
  do {
    _THArgCheck("THDiskFile.c", 342, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THDiskFile.c", 342, dfself->file.isReadable, 1,
                "attempt to read in a write-only file");
  } while (0);
  if (dfself->file.isBinary) {
    nread = fread(data, sizeof(double), n, dfself->handle);
    if (!dfself->isNativeEncoding && (sizeof(double) > 1) && (nread > 0))
      THDiskFile_reverseMemory(data, data, sizeof(double), nread);
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      int ret = fscanf(dfself->handle, "%lg", &data[i]);
      if (ret <= 0)
        break;
      else
        nread++;
    }
    if (dfself->file.isAutoSpacing && (n > 0)) {
      int c = fgetc(dfself->handle);
      if ((c != '\n') && (c != EOF)) ungetc(c, dfself->handle);
    }
  }
  if (nread != n) {
    dfself->file.hasError = 1;
    if (!dfself->file.isQuiet)
      _THError("THDiskFile.c", 342, "read error: read %d blocks instead of %d",
               nread, n);
  }
  return nread;
}
static size_t THDiskFile_writeDouble(THFile* self, double* data, size_t n) {
  THDiskFile* dfself = (THDiskFile*)(self);
  size_t nwrite = 0L;
  do {
    _THArgCheck("THDiskFile.c", 342, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THDiskFile.c", 342, dfself->file.isWritable, 1,
                "attempt to write in a read-only file");
  } while (0);
  if (dfself->file.isBinary) {
    if (dfself->isNativeEncoding) {
      nwrite = fwrite(data, sizeof(double), n, dfself->handle);
    } else {
      if (sizeof(double) > 1) {
        char* buffer = THAlloc(sizeof(double) * n);
        THDiskFile_reverseMemory(buffer, data, sizeof(double), n);
        nwrite = fwrite(buffer, sizeof(double), n, dfself->handle);
        THFree(buffer);
      } else
        nwrite = fwrite(data, sizeof(double), n, dfself->handle);
    }
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      int ret = fprintf(dfself->handle, "%.17g", data[i]);
      if (ret <= 0)
        break;
      else
        nwrite++;
      if (dfself->file.isAutoSpacing && (i < n - 1))
        fprintf(dfself->handle, " ");
    }
    if (dfself->file.isAutoSpacing && (n > 0)) fprintf(dfself->handle, "\n");
  }
  if (nwrite != n) {
    dfself->file.hasError = 1;
    if (!dfself->file.isQuiet)
      _THError("THDiskFile.c", 342,
               "write error: wrote %d blocks instead of %d", nwrite, n);
  }
  return nwrite;
}
static size_t THDiskFile_readLong(THFile* self, long* data, size_t n) {
  THDiskFile* dfself = (THDiskFile*)(self);
  size_t nread = 0L;

  do {
    _THArgCheck("THDiskFile.c", 355, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THDiskFile.c", 356, dfself->file.isReadable, 1,
                "attempt to read in a write-only file");
  } while (0);

  if (dfself->file.isBinary) {
    if (dfself->longSize == 0 || dfself->longSize == sizeof(long)) {
      nread = fread(data, sizeof(long), n, dfself->handle);
      if (!dfself->isNativeEncoding && (sizeof(long) > 1) && (nread > 0))
        THDiskFile_reverseMemory(data, data, sizeof(long), nread);
    } else if (dfself->longSize == 4) {
      nread = fread(data, 4, n, dfself->handle);
      if (!dfself->isNativeEncoding && (nread > 0))
        THDiskFile_reverseMemory(data, data, 4, nread);
      size_t i;
      for (i = nread; i > 0; i--) data[i - 1] = ((int*)data)[i - 1];
    } else {
      int big_endian = !THDiskFile_isLittleEndianCPU();
      int32_t* buffer = THAlloc(8 * n);
      nread = fread(buffer, 8, n, dfself->handle);
      size_t i;
      for (i = nread; i > 0; i--)
        data[i - 1] = buffer[2 * (i - 1) + big_endian];
      THFree(buffer);
      if (!dfself->isNativeEncoding && (nread > 0))
        THDiskFile_reverseMemory(data, data, 4, nread);
    }
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      int ret = fscanf(dfself->handle, "%ld", &data[i]);
      if (ret <= 0)
        break;
      else
        nread++;
    }
    if (dfself->file.isAutoSpacing && (n > 0)) {
      int c = fgetc(dfself->handle);
      if ((c != '\n') && (c != EOF)) ungetc(c, dfself->handle);
    }
  }

  if (nread != n) {
    dfself->file.hasError = 1;
    if (!dfself->file.isQuiet)
      _THError("THDiskFile.c", 401, "read error: read %d blocks instead of %d",
               nread, n);
  }

  return nread;
}

static size_t THDiskFile_writeLong(THFile* self, long* data, size_t n) {
  THDiskFile* dfself = (THDiskFile*)(self);
  size_t nwrite = 0L;

  do {
    _THArgCheck("THDiskFile.c", 411, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THDiskFile.c", 412, dfself->file.isWritable, 1,
                "attempt to write in a read-only file");
  } while (0);

  if (dfself->file.isBinary) {
    if (dfself->longSize == 0 || dfself->longSize == sizeof(long)) {
      if (dfself->isNativeEncoding) {
        nwrite = fwrite(data, sizeof(long), n, dfself->handle);
      } else {
        char* buffer = THAlloc(sizeof(long) * n);
        THDiskFile_reverseMemory(buffer, data, sizeof(long), n);
        nwrite = fwrite(buffer, sizeof(long), n, dfself->handle);
        THFree(buffer);
      }
    } else if (dfself->longSize == 4) {
      int32_t* buffer = THAlloc(4 * n);
      size_t i;
      for (i = 0; i < n; i++) buffer[i] = data[i];
      if (!dfself->isNativeEncoding)
        THDiskFile_reverseMemory(buffer, buffer, 4, n);
      nwrite = fwrite(buffer, 4, n, dfself->handle);
      THFree(buffer);
    } else {
      int big_endian = !THDiskFile_isLittleEndianCPU();
      int32_t* buffer = THAlloc(8 * n);
      size_t i;
      for (i = 0; i < n; i++) {
        buffer[2 * i + !big_endian] = 0;
        buffer[2 * i + big_endian] = data[i];
      }
      if (!dfself->isNativeEncoding)
        THDiskFile_reverseMemory(buffer, buffer, 8, n);
      nwrite = fwrite(buffer, 8, n, dfself->handle);
      THFree(buffer);
    }
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      int ret = fprintf(dfself->handle, "%ld", data[i]);
      if (ret <= 0)
        break;
      else
        nwrite++;
      if (dfself->file.isAutoSpacing && (i < n - 1))
        fprintf(dfself->handle, " ");
    }
    if (dfself->file.isAutoSpacing && (n > 0)) fprintf(dfself->handle, "\n");
  }

  if (nwrite != n) {
    dfself->file.hasError = 1;
    if (!dfself->file.isQuiet)
      _THError("THDiskFile.c", 464,
               "write error: wrote %d blocks instead of %d", nwrite, n);
  }

  return nwrite;
}

static size_t THDiskFile_readString(THFile* self, const char* format,
                                    char** str_) {
  THDiskFile* dfself = (THDiskFile*)(self);
  do {
    _THArgCheck("THDiskFile.c", 473, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THDiskFile.c", 474, dfself->file.isReadable, 1,
                "attempt to read in a write-only file");
  } while (0);
  do {
    _THArgCheck(
        "THDiskFile.c", 476,
        (strlen(format) >= 2
             ? (format[0] == '*') && (format[1] == 'a' || format[1] == 'l')
             : 0),
        2, "format must be '*a' or '*l'");
  } while (0)

      ;

  if (format[1] == 'a') {
    char* p = THAlloc(1024L);
    size_t total = 1024L;
    size_t pos = 0;

    for (;;) {
      if (total - pos == 0) {
        total += 1024L;
        p = THRealloc(p, total);
      }
      pos += fread(p + pos, 1, total - pos, dfself->handle);
      if (pos < total) {
        if (pos == 0) {
          THFree(p);
          dfself->file.hasError = 1;
          if (!dfself->file.isQuiet)
            _THError("THDiskFile.c", 503,
                     "read error: read 0 blocks instead of 1");

          *str_ = NULL;
          return 0;
        }
        *str_ = p;
        return pos;
      }
    }
  } else {
    char* p = THAlloc(1024L);
    size_t total = 1024L;
    size_t pos = 0;
    size_t size;

    for (;;) {
      if (total - pos <= 1) {
        total += 1024L;
        p = THRealloc(p, total);
      }
      if (fgets(p + pos, total - pos, dfself->handle) == NULL) {
        if (pos == 0) {
          THFree(p);
          dfself->file.hasError = 1;
          if (!dfself->file.isQuiet)
            _THError("THDiskFile.c", 530,
                     "read error: read 0 blocks instead of 1");

          *str_ = NULL;
          return 0;
        }
        *str_ = p;
        return pos;
      }
      size = strlen(p + pos);
      if (size == 0 || (p + pos)[size - 1] != '\n') {
        pos += size;
      } else {
        pos += size - 1;
        *str_ = p;
        return pos;
      }
    }
  }

  *str_ = NULL;
  return 0;
}

static size_t THDiskFile_writeString(THFile* self, const char* str,
                                     size_t size) {
  THDiskFile* dfself = (THDiskFile*)(self);
  size_t nwrite;

  do {
    _THArgCheck("THDiskFile.c", 558, dfself->handle != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THDiskFile.c", 559, dfself->file.isWritable, 1,
                "attempt to write in a read-only file");
  } while (0);

  nwrite = fwrite(str, 1, size, dfself->handle);
  if (nwrite != size) {
    dfself->file.hasError = 1;
    if (!dfself->file.isQuiet)
      _THError("THDiskFile.c", 566,
               "write error: wrote %zu blocks instead of %zu", nwrite, size);
  }

  return nwrite;
}

THFile* THDiskFile_new(const char* name, const char* mode, int isQuiet) {
  static struct THFileVTable vtable = {
      THDiskFile_isOpened,

      THDiskFile_readByte,    THDiskFile_readChar,  THDiskFile_readShort,
      THDiskFile_readInt,     THDiskFile_readLong,  THDiskFile_readFloat,
      THDiskFile_readDouble,  THDiskFile_readHalf,  THDiskFile_readString,

      THDiskFile_writeByte,   THDiskFile_writeChar, THDiskFile_writeShort,
      THDiskFile_writeInt,    THDiskFile_writeLong, THDiskFile_writeFloat,
      THDiskFile_writeDouble, THDiskFile_writeHalf, THDiskFile_writeString,

      THDiskFile_synchronize, THDiskFile_seek,      THDiskFile_seekEnd,
      THDiskFile_position,    THDiskFile_close,     THDiskFile_free};

  int isReadable;
  int isWritable;
  FILE* handle;
  THDiskFile* self;

  do {
    _THArgCheck("THDiskFile.c", 592,
                THDiskFile_mode(mode, &isReadable, &isWritable), 2,
                "file mode should be 'r','w' or 'rw'");
  } while (0);

  if (isReadable && isWritable) {
    handle = fopen(name, "r+b");
    if (!handle) {
      handle = fopen(name, "wb");
      if (handle) {
        fclose(handle);
        handle = fopen(name, "r+b");
      }
    }
  } else
    handle = fopen(name, (isReadable ? "rb" : "wb"));

  if (!handle) {
    if (isQuiet)
      return 0;
    else
      _THError("THDiskFile.c", 611, "cannot open <%s> in mode %c%c", name,
               (isReadable ? 'r' : ' '), (isWritable ? 'w' : ' '));
  }

  self = THAlloc(sizeof(THDiskFile));

  self->handle = handle;
  self->name = THAlloc(strlen(name) + 1);
  strcpy(self->name, name);
  self->isNativeEncoding = 1;
  self->longSize = 0;

  self->file.vtable = &vtable;
  self->file.isQuiet = isQuiet;
  self->file.isReadable = isReadable;
  self->file.isWritable = isWritable;
  self->file.isBinary = 0;
  self->file.isAutoSpacing = 1;
  self->file.hasError = 0;

  return (THFile*)self;
}

static int THPipeFile_mode(const char* mode, int* isReadable, int* isWritable) {
  *isReadable = 0;
  *isWritable = 0;
  if (strlen(mode) == 1) {
    if (*mode == 'r') {
      *isReadable = 1;
      return 1;
    } else if (*mode == 'w') {
      *isWritable = 1;
      return 1;
    }
  }
  return 0;
}

static void THPipeFile_free(THFile* self) {
  THDiskFile* dfself = (THDiskFile*)(self);
  if (dfself->handle) pclose(dfself->handle);
  THFree(dfself->name);
  THFree(dfself);
}

THFile* THPipeFile_new(const char* name, const char* mode, int isQuiet) {
  static struct THFileVTable vtable = {
      THDiskFile_isOpened,

      THDiskFile_readByte,    THDiskFile_readChar,  THDiskFile_readShort,
      THDiskFile_readInt,     THDiskFile_readLong,  THDiskFile_readFloat,
      THDiskFile_readDouble,  THDiskFile_readHalf,  THDiskFile_readString,

      THDiskFile_writeByte,   THDiskFile_writeChar, THDiskFile_writeShort,
      THDiskFile_writeInt,    THDiskFile_writeLong, THDiskFile_writeFloat,
      THDiskFile_writeDouble, THDiskFile_writeHalf, THDiskFile_writeString,

      THDiskFile_synchronize, THDiskFile_seek,      THDiskFile_seekEnd,
      THDiskFile_position,    THDiskFile_close,     THPipeFile_free};

  int isReadable;
  int isWritable;
  FILE* handle;
  THDiskFile* self;

  do {
    _THArgCheck("THDiskFile.c", 678,
                THPipeFile_mode(mode, &isReadable, &isWritable), 2,
                "file mode should be 'r','w'");
  } while (0);

  handle = popen(name, (isReadable ? "r" : "w"));

  if (!handle) {
    if (isQuiet)
      return 0;
    else
      _THError(
          "THDiskFile.c", 691,
          "cannot open <%s> in mode %c%c.  This might be because eg the "
          "executable doesn't exist, but it could also be because you are out "
          "of memory.",
          name, (isReadable ? 'r' : ' '), (isWritable ? 'w' : ' '))

          ;
  }

  self = THAlloc(sizeof(THDiskFile));

  self->handle = handle;
  self->name = THAlloc(strlen(name) + 1);
  strcpy(self->name, name);
  self->isNativeEncoding = 1;
  self->longSize = 0;

  self->file.vtable = &vtable;
  self->file.isQuiet = isQuiet;
  self->file.isReadable = isReadable;
  self->file.isWritable = isWritable;
  self->file.isBinary = 0;
  self->file.isAutoSpacing = 1;
  self->file.hasError = 0;

  return (THFile*)self;
}
