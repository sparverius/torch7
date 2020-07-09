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
size_t THFile_readByteRaw(THFile* self, unsigned char* data, size_t n) {
  return (*self->vtable->readByte)(self, data, n);
}
size_t THFile_writeByteRaw(THFile* self, unsigned char* data, size_t n) {
  return (*self->vtable->writeByte)(self, data, n);
}
size_t THFile_readCharRaw(THFile* self, char* data, size_t n) {
  return (*self->vtable->readChar)(self, data, n);
}
size_t THFile_writeCharRaw(THFile* self, char* data, size_t n) {
  return (*self->vtable->writeChar)(self, data, n);
}
size_t THFile_readShortRaw(THFile* self, short* data, size_t n) {
  return (*self->vtable->readShort)(self, data, n);
}
size_t THFile_writeShortRaw(THFile* self, short* data, size_t n) {
  return (*self->vtable->writeShort)(self, data, n);
}
size_t THFile_readIntRaw(THFile* self, int* data, size_t n) {
  return (*self->vtable->readInt)(self, data, n);
}
size_t THFile_writeIntRaw(THFile* self, int* data, size_t n) {
  return (*self->vtable->writeInt)(self, data, n);
}
size_t THFile_readLongRaw(THFile* self, long* data, size_t n) {
  return (*self->vtable->readLong)(self, data, n);
}
size_t THFile_writeLongRaw(THFile* self, long* data, size_t n) {
  return (*self->vtable->writeLong)(self, data, n);
}
size_t THFile_readFloatRaw(THFile* self, float* data, size_t n) {
  return (*self->vtable->readFloat)(self, data, n);
}
size_t THFile_writeFloatRaw(THFile* self, float* data, size_t n) {
  return (*self->vtable->writeFloat)(self, data, n);
}
size_t THFile_readDoubleRaw(THFile* self, double* data, size_t n) {
  return (*self->vtable->readDouble)(self, data, n);
}
size_t THFile_writeDoubleRaw(THFile* self, double* data, size_t n) {
  return (*self->vtable->writeDouble)(self, data, n);
}
size_t THFile_readHalfRaw(THFile* self, THHalf* data, size_t n) {
  return (*self->vtable->readHalf)(self, data, n);
}
size_t THFile_writeHalfRaw(THFile* self, THHalf* data, size_t n) {
  return (*self->vtable->writeHalf)(self, data, n);
}

size_t THFile_readStringRaw(THFile* self, const char* format, char** str_) {
  return self->vtable->readString(self, format, str_);
}

size_t THFile_writeStringRaw(THFile* self, const char* str, size_t size) {
  return self->vtable->writeString(self, str, size);
}

void THFile_synchronize(THFile* self) { self->vtable->synchronize(self); }

void THFile_seek(THFile* self, size_t position) {
  self->vtable->seek(self, position);
}

void THFile_seekEnd(THFile* self) { self->vtable->seekEnd(self); }

size_t THFile_position(THFile* self) { return self->vtable->position(self); }

void THFile_close(THFile* self) { self->vtable->close(self); }

void THFile_free(THFile* self) { self->vtable->free(self); }

int THFile_isOpened(THFile* self) { return self->vtable->isOpened(self); }

int THFile_isQuiet(THFile* self) { return self->isQuiet; }
int THFile_isReadable(THFile* self) { return self->isReadable; }
int THFile_isWritable(THFile* self) { return self->isWritable; }
int THFile_isBinary(THFile* self) { return self->isBinary; }
int THFile_isAutoSpacing(THFile* self) { return self->isAutoSpacing; }
int THFile_hasError(THFile* self) { return self->hasError; }

void THFile_binary(THFile* self) { self->isBinary = 1; }

void THFile_ascii(THFile* self) { self->isBinary = 0; }

void THFile_autoSpacing(THFile* self) { self->isAutoSpacing = 1; }

void THFile_noAutoSpacing(THFile* self) { self->isAutoSpacing = 0; }

void THFile_quiet(THFile* self) { self->isQuiet = 1; }

void THFile_pedantic(THFile* self) { self->isQuiet = 0; }

void THFile_clearError(THFile* self) { self->hasError = 0; }
unsigned char THFile_readByteScalar(THFile* self) {
  unsigned char scalar;
  THFile_readByteRaw(self, &scalar, 1);
  return scalar;
}
void THFile_writeByteScalar(THFile* self, unsigned char scalar) {
  THFile_writeByteRaw(self, &scalar, 1);
}
char THFile_readCharScalar(THFile* self) {
  char scalar;
  THFile_readCharRaw(self, &scalar, 1);
  return scalar;
}
void THFile_writeCharScalar(THFile* self, char scalar) {
  THFile_writeCharRaw(self, &scalar, 1);
}
short THFile_readShortScalar(THFile* self) {
  short scalar;
  THFile_readShortRaw(self, &scalar, 1);
  return scalar;
}
void THFile_writeShortScalar(THFile* self, short scalar) {
  THFile_writeShortRaw(self, &scalar, 1);
}
int THFile_readIntScalar(THFile* self) {
  int scalar;
  THFile_readIntRaw(self, &scalar, 1);
  return scalar;
}
void THFile_writeIntScalar(THFile* self, int scalar) {
  THFile_writeIntRaw(self, &scalar, 1);
}
long THFile_readLongScalar(THFile* self) {
  long scalar;
  THFile_readLongRaw(self, &scalar, 1);
  return scalar;
}
void THFile_writeLongScalar(THFile* self, long scalar) {
  THFile_writeLongRaw(self, &scalar, 1);
}
float THFile_readFloatScalar(THFile* self) {
  float scalar;
  THFile_readFloatRaw(self, &scalar, 1);
  return scalar;
}
void THFile_writeFloatScalar(THFile* self, float scalar) {
  THFile_writeFloatRaw(self, &scalar, 1);
}
double THFile_readDoubleScalar(THFile* self) {
  double scalar;
  THFile_readDoubleRaw(self, &scalar, 1);
  return scalar;
}
void THFile_writeDoubleScalar(THFile* self, double scalar) {
  THFile_writeDoubleRaw(self, &scalar, 1);
}
THHalf THFile_readHalfScalar(THFile* self) {
  THHalf scalar;
  THFile_readHalfRaw(self, &scalar, 1);
  return scalar;
}
void THFile_writeHalfScalar(THFile* self, THHalf scalar) {
  THFile_writeHalfRaw(self, &scalar, 1);
}
size_t THFile_readByte(THFile* self, THByteStorage* storage) {
  return THFile_readByteRaw(self, storage->data, storage->size);
}
size_t THFile_writeByte(THFile* self, THByteStorage* storage) {
  return THFile_writeByteRaw(self, storage->data, storage->size);
}
size_t THFile_readChar(THFile* self, THCharStorage* storage) {
  return THFile_readCharRaw(self, storage->data, storage->size);
}
size_t THFile_writeChar(THFile* self, THCharStorage* storage) {
  return THFile_writeCharRaw(self, storage->data, storage->size);
}
size_t THFile_readShort(THFile* self, THShortStorage* storage) {
  return THFile_readShortRaw(self, storage->data, storage->size);
}
size_t THFile_writeShort(THFile* self, THShortStorage* storage) {
  return THFile_writeShortRaw(self, storage->data, storage->size);
}
size_t THFile_readInt(THFile* self, THIntStorage* storage) {
  return THFile_readIntRaw(self, storage->data, storage->size);
}
size_t THFile_writeInt(THFile* self, THIntStorage* storage) {
  return THFile_writeIntRaw(self, storage->data, storage->size);
}
size_t THFile_readLong(THFile* self, THLongStorage* storage) {
  return THFile_readLongRaw(self, storage->data, storage->size);
}
size_t THFile_writeLong(THFile* self, THLongStorage* storage) {
  return THFile_writeLongRaw(self, storage->data, storage->size);
}
size_t THFile_readFloat(THFile* self, THFloatStorage* storage) {
  return THFile_readFloatRaw(self, storage->data, storage->size);
}
size_t THFile_writeFloat(THFile* self, THFloatStorage* storage) {
  return THFile_writeFloatRaw(self, storage->data, storage->size);
}
size_t THFile_readDouble(THFile* self, THDoubleStorage* storage) {
  return THFile_readDoubleRaw(self, storage->data, storage->size);
}
size_t THFile_writeDouble(THFile* self, THDoubleStorage* storage) {
  return THFile_writeDoubleRaw(self, storage->data, storage->size);
}
size_t THFile_readHalf(THFile* self, THHalfStorage* storage) {
  return THFile_readHalfRaw(self, storage->data, storage->size);
}
size_t THFile_writeHalf(THFile* self, THHalfStorage* storage) {
  return THFile_writeHalfRaw(self, storage->data, storage->size);
}
