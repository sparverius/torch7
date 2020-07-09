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

THFile* THMemoryFile_newWithStorage(THCharStorage* storage, const char* mode);
THFile* THMemoryFile_new(const char* mode);

THCharStorage* THMemoryFile_storage(THFile* self);
void THMemoryFile_longSize(THFile* self, int size);

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

typedef struct THMemoryFile__ {
  THFile file;
  THCharStorage* storage;
  size_t size;
  size_t position;
  int longSize;

} THMemoryFile;

static int THMemoryFile_isOpened(THFile* self) {
  THMemoryFile* mfself = (THMemoryFile*)self;
  return (mfself->storage != NULL);
}

static char* THMemoryFile_strnextspace(char* str_, char* c_) {
  char c;

  while ((c = *str_)) {
    if ((c != ' ') && (c != '\n') && (c != ':') && (c != ';')) break;
    str_++;
  }

  while ((c = *str_)) {
    if ((c == ' ') || (c == '\n') || (c == ':') || (c == ';')) {
      *c_ = c;
      *str_ = '\0';
      return (str_);
    }
    str_++;
  }
  return NULL;
}

static void THMemoryFile_grow(THMemoryFile* self, size_t size) {
  size_t missingSpace;

  if (size <= self->size)
    return;
  else {
    if (size < self->storage->size) {
      self->size = size;
      self->storage->data[self->size] = '\0';
      return;
    }
  }

  missingSpace = size - self->storage->size + 1;
  THCharStorage_resize(self->storage,
                       (self->storage->size / 2 > missingSpace
                            ? self->storage->size + (self->storage->size / 2)
                            : self->storage->size + missingSpace));
}

static int THMemoryFile_mode(const char* mode, int* isReadable,
                             int* isWritable) {
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
void THMemoryFile_longSize(THFile* self, int size) {
  THMemoryFile* dfself = (THMemoryFile*)(self);
  do {
    _THArgCheck("THMemoryFile.c", 196, size == 0 || size == 4 || size == 8, 1,
                "Invalid long size specified");
  } while (0);
  dfself->longSize = size;
}

THCharStorage* THMemoryFile_storage(THFile* self) {
  THMemoryFile* mfself = (THMemoryFile*)self;
  do {
    _THArgCheck("THMemoryFile.c", 203, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);

  THCharStorage_resize(mfself->storage, mfself->size + 1);

  return mfself->storage;
}

static void THMemoryFile_synchronize(THFile* self) {
  THMemoryFile* mfself = (THMemoryFile*)self;
  do {
    _THArgCheck("THMemoryFile.c", 212, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);
}

static void THMemoryFile_seek(THFile* self, size_t position) {
  THMemoryFile* mfself = (THMemoryFile*)self;

  do {
    _THArgCheck("THMemoryFile.c", 218, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THMemoryFile.c", 219, position >= 0, 2,
                "position must be positive");
  } while (0);

  if (position <= mfself->size)
    mfself->position = position;
  else {
    mfself->file.hasError = 1;
    if (!mfself->file.isQuiet)
      _THError("THMemoryFile.c", 226, "unable to seek at position %zu",
               position);
  }
}

static void THMemoryFile_seekEnd(THFile* self) {
  THMemoryFile* mfself = (THMemoryFile*)self;
  do {
    _THArgCheck("THMemoryFile.c", 232, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);

  mfself->position = mfself->size;
}

static size_t THMemoryFile_position(THFile* self) {
  THMemoryFile* mfself = (THMemoryFile*)self;
  do {
    _THArgCheck("THMemoryFile.c", 239, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  return mfself->position;
}

static void THMemoryFile_close(THFile* self) {
  THMemoryFile* mfself = (THMemoryFile*)self;
  do {
    _THArgCheck("THMemoryFile.c", 245, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  THCharStorage_free(mfself->storage);
  mfself->storage = NULL;
}

static void THMemoryFile_free(THFile* self) {
  THMemoryFile* mfself = (THMemoryFile*)self;

  if (mfself->storage) THCharStorage_free(mfself->storage);

  THFree(mfself);
}
static size_t THMemoryFile_readByte(THFile* self, unsigned char* data,
                                    size_t n) {
  THMemoryFile* mfself = (THMemoryFile*)self;
  size_t nread = 0;
  do {
    _THArgCheck("THMemoryFile.c", 267, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THMemoryFile.c", 267, mfself->file.isReadable, 1,
                "attempt to read in a write-only file");
  } while (0);
  if (n == 0) return 0;
  if (mfself->file.isBinary) {
    size_t nByte = sizeof(unsigned char) * n;
    size_t nByteRemaining = (mfself->position + nByte <= mfself->size
                                 ? nByte
                                 : mfself->size - mfself->position);
    nread = nByteRemaining / sizeof(unsigned char);
    memmove(data, mfself->storage->data + mfself->position,
            nread * sizeof(unsigned char));
    mfself->position += nread * sizeof(unsigned char);
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      size_t nByteRead = 0;
      char spaceChar = 0;
      char* spacePtr = THMemoryFile_strnextspace(
          mfself->storage->data + mfself->position, &spaceChar);
      size_t ret = (mfself->position + n <= mfself->size
                        ? n
                        : mfself->size - mfself->position);
      if (spacePtr) *spacePtr = spaceChar;
      nByteRead = ret;
      nread = ret;
      i = n - 1;
      memmove(data, mfself->storage->data + mfself->position, nByteRead);
      if (ret == EOF) {
        while (mfself->storage->data[mfself->position]) mfself->position++;
      } else
        mfself->position += nByteRead;
      if (spacePtr) *spacePtr = spaceChar;
    }
    if (mfself->file.isAutoSpacing && (n > 0)) {
      if ((mfself->position < mfself->size) &&
          (mfself->storage->data[mfself->position] == '\n'))
        mfself->position++;
    }
  }
  if (nread != n) {
    mfself->file.hasError = 1;
    if (!mfself->file.isQuiet)
      _THError("THMemoryFile.c", 267,
               "read error: read %d blocks instead of %d", nread, n);
  }
  return nread;
}
static size_t THMemoryFile_writeByte(THFile* self, unsigned char* data,
                                     size_t n) {
  THMemoryFile* mfself = (THMemoryFile*)self;
  do {
    _THArgCheck("THMemoryFile.c", 267, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THMemoryFile.c", 267, mfself->file.isWritable, 1,
                "attempt to write in a read-only file");
  } while (0);
  if (n == 0) return 0;
  if (mfself->file.isBinary) {
    size_t nByte = sizeof(unsigned char) * n;
    THMemoryFile_grow(mfself, mfself->position + nByte);
    memmove(mfself->storage->data + mfself->position, data, nByte);
    mfself->position += nByte;
    if (mfself->position > mfself->size) {
      mfself->size = mfself->position;
      mfself->storage->data[mfself->size] = '\0';
    }
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      ssize_t nByteWritten;
      while (1) {
        nByteWritten = (n < mfself->storage->size - mfself->position ? n : -1);
        i = n - 1;
        if (nByteWritten > -1)
          memmove(mfself->storage->data + mfself->position, data, nByteWritten);
        if ((nByteWritten > -1) &&
            (nByteWritten < mfself->storage->size - mfself->position)) {
          mfself->position += nByteWritten;
          break;
        }
        THMemoryFile_grow(
            mfself, mfself->storage->size + (mfself->storage->size / 2) + 2);
      }
      if (mfself->file.isAutoSpacing) {
        if (i < n - 1) {
          THMemoryFile_grow(mfself, mfself->position + 1);
          sprintf(mfself->storage->data + mfself->position, " ");
          mfself->position++;
        }
        if (i == n - 1) {
          THMemoryFile_grow(mfself, mfself->position + 1);
          sprintf(mfself->storage->data + mfself->position, "\n");
          mfself->position++;
        }
      }
    }
    if (mfself->position > mfself->size) {
      mfself->size = mfself->position;
      mfself->storage->data[mfself->size] = '\0';
    }
  }
  return n;
}
static size_t THMemoryFile_readChar(THFile* self, char* data, size_t n) {
  THMemoryFile* mfself = (THMemoryFile*)self;
  size_t nread = 0;
  do {
    _THArgCheck("THMemoryFile.c", 284, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THMemoryFile.c", 284, mfself->file.isReadable, 1,
                "attempt to read in a write-only file");
  } while (0);
  if (n == 0) return 0;
  if (mfself->file.isBinary) {
    size_t nByte = sizeof(char) * n;
    size_t nByteRemaining = (mfself->position + nByte <= mfself->size
                                 ? nByte
                                 : mfself->size - mfself->position);
    nread = nByteRemaining / sizeof(char);
    memmove(data, mfself->storage->data + mfself->position,
            nread * sizeof(char));
    mfself->position += nread * sizeof(char);
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      size_t nByteRead = 0;
      char spaceChar = 0;
      char* spacePtr = THMemoryFile_strnextspace(
          mfself->storage->data + mfself->position, &spaceChar);
      size_t ret = (mfself->position + n <= mfself->size
                        ? n
                        : mfself->size - mfself->position);
      if (spacePtr) *spacePtr = spaceChar;
      nByteRead = ret;
      nread = ret;
      i = n - 1;
      memmove(data, mfself->storage->data + mfself->position, nByteRead);
      if (ret == EOF) {
        while (mfself->storage->data[mfself->position]) mfself->position++;
      } else
        mfself->position += nByteRead;
      if (spacePtr) *spacePtr = spaceChar;
    }
    if (mfself->file.isAutoSpacing && (n > 0)) {
      if ((mfself->position < mfself->size) &&
          (mfself->storage->data[mfself->position] == '\n'))
        mfself->position++;
    }
  }
  if (nread != n) {
    mfself->file.hasError = 1;
    if (!mfself->file.isQuiet)
      _THError("THMemoryFile.c", 284,
               "read error: read %d blocks instead of %d", nread, n);
  }
  return nread;
}
static size_t THMemoryFile_writeChar(THFile* self, char* data, size_t n) {
  THMemoryFile* mfself = (THMemoryFile*)self;
  do {
    _THArgCheck("THMemoryFile.c", 284, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THMemoryFile.c", 284, mfself->file.isWritable, 1,
                "attempt to write in a read-only file");
  } while (0);
  if (n == 0) return 0;
  if (mfself->file.isBinary) {
    size_t nByte = sizeof(char) * n;
    THMemoryFile_grow(mfself, mfself->position + nByte);
    memmove(mfself->storage->data + mfself->position, data, nByte);
    mfself->position += nByte;
    if (mfself->position > mfself->size) {
      mfself->size = mfself->position;
      mfself->storage->data[mfself->size] = '\0';
    }
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      ssize_t nByteWritten;
      while (1) {
        nByteWritten = (n < mfself->storage->size - mfself->position ? n : -1);
        i = n - 1;
        if (nByteWritten > -1)
          memmove(mfself->storage->data + mfself->position, data, nByteWritten);
        if ((nByteWritten > -1) &&
            (nByteWritten < mfself->storage->size - mfself->position)) {
          mfself->position += nByteWritten;
          break;
        }
        THMemoryFile_grow(
            mfself, mfself->storage->size + (mfself->storage->size / 2) + 2);
      }
      if (mfself->file.isAutoSpacing) {
        if (i < n - 1) {
          THMemoryFile_grow(mfself, mfself->position + 1);
          sprintf(mfself->storage->data + mfself->position, " ");
          mfself->position++;
        }
        if (i == n - 1) {
          THMemoryFile_grow(mfself, mfself->position + 1);
          sprintf(mfself->storage->data + mfself->position, "\n");
          mfself->position++;
        }
      }
    }
    if (mfself->position > mfself->size) {
      mfself->size = mfself->position;
      mfself->storage->data[mfself->size] = '\0';
    }
  }
  return n;
}
static size_t THMemoryFile_readShort(THFile* self, short* data, size_t n) {
  THMemoryFile* mfself = (THMemoryFile*)self;
  size_t nread = 0;
  do {
    _THArgCheck("THMemoryFile.c", 298, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THMemoryFile.c", 298, mfself->file.isReadable, 1,
                "attempt to read in a write-only file");
  } while (0);
  if (n == 0) return 0;
  if (mfself->file.isBinary) {
    size_t nByte = sizeof(short) * n;
    size_t nByteRemaining = (mfself->position + nByte <= mfself->size
                                 ? nByte
                                 : mfself->size - mfself->position);
    nread = nByteRemaining / sizeof(short);
    memmove(data, mfself->storage->data + mfself->position,
            nread * sizeof(short));
    mfself->position += nread * sizeof(short);
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      size_t nByteRead = 0;
      char spaceChar = 0;
      char* spacePtr = THMemoryFile_strnextspace(
          mfself->storage->data + mfself->position, &spaceChar);
      int nByteRead_;
      int ret = sscanf(mfself->storage->data + mfself->position, "%hd%n",
                       &data[i], &nByteRead_);
      nByteRead = nByteRead_;
      if (ret <= 0)
        break;
      else
        nread++;
      if (ret == EOF) {
        while (mfself->storage->data[mfself->position]) mfself->position++;
      } else
        mfself->position += nByteRead;
      if (spacePtr) *spacePtr = spaceChar;
    }
    if (mfself->file.isAutoSpacing && (n > 0)) {
      if ((mfself->position < mfself->size) &&
          (mfself->storage->data[mfself->position] == '\n'))
        mfself->position++;
    }
  }
  if (nread != n) {
    mfself->file.hasError = 1;
    if (!mfself->file.isQuiet)
      _THError("THMemoryFile.c", 298,
               "read error: read %d blocks instead of %d", nread, n);
  }
  return nread;
}
static size_t THMemoryFile_writeShort(THFile* self, short* data, size_t n) {
  THMemoryFile* mfself = (THMemoryFile*)self;
  do {
    _THArgCheck("THMemoryFile.c", 298, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THMemoryFile.c", 298, mfself->file.isWritable, 1,
                "attempt to write in a read-only file");
  } while (0);
  if (n == 0) return 0;
  if (mfself->file.isBinary) {
    size_t nByte = sizeof(short) * n;
    THMemoryFile_grow(mfself, mfself->position + nByte);
    memmove(mfself->storage->data + mfself->position, data, nByte);
    mfself->position += nByte;
    if (mfself->position > mfself->size) {
      mfself->size = mfself->position;
      mfself->storage->data[mfself->size] = '\0';
    }
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      ssize_t nByteWritten;
      while (1) {
        nByteWritten =
            snprintf(mfself->storage->data + mfself->position,
                     mfself->storage->size - mfself->position, "%hd", data[i]);
        if ((nByteWritten > -1) &&
            (nByteWritten < mfself->storage->size - mfself->position)) {
          mfself->position += nByteWritten;
          break;
        }
        THMemoryFile_grow(
            mfself, mfself->storage->size + (mfself->storage->size / 2) + 2);
      }
      if (mfself->file.isAutoSpacing) {
        if (i < n - 1) {
          THMemoryFile_grow(mfself, mfself->position + 1);
          sprintf(mfself->storage->data + mfself->position, " ");
          mfself->position++;
        }
        if (i == n - 1) {
          THMemoryFile_grow(mfself, mfself->position + 1);
          sprintf(mfself->storage->data + mfself->position, "\n");
          mfself->position++;
        }
      }
    }
    if (mfself->position > mfself->size) {
      mfself->size = mfself->position;
      mfself->storage->data[mfself->size] = '\0';
    }
  }
  return n;
}
static size_t THMemoryFile_readInt(THFile* self, int* data, size_t n) {
  THMemoryFile* mfself = (THMemoryFile*)self;
  size_t nread = 0;
  do {
    _THArgCheck("THMemoryFile.c", 309, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THMemoryFile.c", 309, mfself->file.isReadable, 1,
                "attempt to read in a write-only file");
  } while (0);
  if (n == 0) return 0;
  if (mfself->file.isBinary) {
    size_t nByte = sizeof(int) * n;
    size_t nByteRemaining = (mfself->position + nByte <= mfself->size
                                 ? nByte
                                 : mfself->size - mfself->position);
    nread = nByteRemaining / sizeof(int);
    memmove(data, mfself->storage->data + mfself->position,
            nread * sizeof(int));
    mfself->position += nread * sizeof(int);
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      size_t nByteRead = 0;
      char spaceChar = 0;
      char* spacePtr = THMemoryFile_strnextspace(
          mfself->storage->data + mfself->position, &spaceChar);
      int nByteRead_;
      int ret = sscanf(mfself->storage->data + mfself->position, "%d%n",
                       &data[i], &nByteRead_);
      nByteRead = nByteRead_;
      if (ret <= 0)
        break;
      else
        nread++;
      if (ret == EOF) {
        while (mfself->storage->data[mfself->position]) mfself->position++;
      } else
        mfself->position += nByteRead;
      if (spacePtr) *spacePtr = spaceChar;
    }
    if (mfself->file.isAutoSpacing && (n > 0)) {
      if ((mfself->position < mfself->size) &&
          (mfself->storage->data[mfself->position] == '\n'))
        mfself->position++;
    }
  }
  if (nread != n) {
    mfself->file.hasError = 1;
    if (!mfself->file.isQuiet)
      _THError("THMemoryFile.c", 309,
               "read error: read %d blocks instead of %d", nread, n);
  }
  return nread;
}
static size_t THMemoryFile_writeInt(THFile* self, int* data, size_t n) {
  THMemoryFile* mfself = (THMemoryFile*)self;
  do {
    _THArgCheck("THMemoryFile.c", 309, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THMemoryFile.c", 309, mfself->file.isWritable, 1,
                "attempt to write in a read-only file");
  } while (0);
  if (n == 0) return 0;
  if (mfself->file.isBinary) {
    size_t nByte = sizeof(int) * n;
    THMemoryFile_grow(mfself, mfself->position + nByte);
    memmove(mfself->storage->data + mfself->position, data, nByte);
    mfself->position += nByte;
    if (mfself->position > mfself->size) {
      mfself->size = mfself->position;
      mfself->storage->data[mfself->size] = '\0';
    }
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      ssize_t nByteWritten;
      while (1) {
        nByteWritten =
            snprintf(mfself->storage->data + mfself->position,
                     mfself->storage->size - mfself->position, "%d", data[i]);
        if ((nByteWritten > -1) &&
            (nByteWritten < mfself->storage->size - mfself->position)) {
          mfself->position += nByteWritten;
          break;
        }
        THMemoryFile_grow(
            mfself, mfself->storage->size + (mfself->storage->size / 2) + 2);
      }
      if (mfself->file.isAutoSpacing) {
        if (i < n - 1) {
          THMemoryFile_grow(mfself, mfself->position + 1);
          sprintf(mfself->storage->data + mfself->position, " ");
          mfself->position++;
        }
        if (i == n - 1) {
          THMemoryFile_grow(mfself, mfself->position + 1);
          sprintf(mfself->storage->data + mfself->position, "\n");
          mfself->position++;
        }
      }
    }
    if (mfself->position > mfself->size) {
      mfself->size = mfself->position;
      mfself->storage->data[mfself->size] = '\0';
    }
  }
  return n;
}
static size_t THMemoryFile_readFloat(THFile* self, float* data, size_t n) {
  THMemoryFile* mfself = (THMemoryFile*)self;
  size_t nread = 0;
  do {
    _THArgCheck("THMemoryFile.c", 319, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THMemoryFile.c", 319, mfself->file.isReadable, 1,
                "attempt to read in a write-only file");
  } while (0);
  if (n == 0) return 0;
  if (mfself->file.isBinary) {
    size_t nByte = sizeof(float) * n;
    size_t nByteRemaining = (mfself->position + nByte <= mfself->size
                                 ? nByte
                                 : mfself->size - mfself->position);
    nread = nByteRemaining / sizeof(float);
    memmove(data, mfself->storage->data + mfself->position,
            nread * sizeof(float));
    mfself->position += nread * sizeof(float);
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      size_t nByteRead = 0;
      char spaceChar = 0;
      char* spacePtr = THMemoryFile_strnextspace(
          mfself->storage->data + mfself->position, &spaceChar);
      int nByteRead_;
      int ret = sscanf(mfself->storage->data + mfself->position, "%g%n",
                       &data[i], &nByteRead_);
      nByteRead = nByteRead_;
      if (ret <= 0)
        break;
      else
        nread++;
      if (ret == EOF) {
        while (mfself->storage->data[mfself->position]) mfself->position++;
      } else
        mfself->position += nByteRead;
      if (spacePtr) *spacePtr = spaceChar;
    }
    if (mfself->file.isAutoSpacing && (n > 0)) {
      if ((mfself->position < mfself->size) &&
          (mfself->storage->data[mfself->position] == '\n'))
        mfself->position++;
    }
  }
  if (nread != n) {
    mfself->file.hasError = 1;
    if (!mfself->file.isQuiet)
      _THError("THMemoryFile.c", 319,
               "read error: read %d blocks instead of %d", nread, n);
  }
  return nread;
}
static size_t THMemoryFile_writeFloat(THFile* self, float* data, size_t n) {
  THMemoryFile* mfself = (THMemoryFile*)self;
  do {
    _THArgCheck("THMemoryFile.c", 319, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THMemoryFile.c", 319, mfself->file.isWritable, 1,
                "attempt to write in a read-only file");
  } while (0);
  if (n == 0) return 0;
  if (mfself->file.isBinary) {
    size_t nByte = sizeof(float) * n;
    THMemoryFile_grow(mfself, mfself->position + nByte);
    memmove(mfself->storage->data + mfself->position, data, nByte);
    mfself->position += nByte;
    if (mfself->position > mfself->size) {
      mfself->size = mfself->position;
      mfself->storage->data[mfself->size] = '\0';
    }
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      ssize_t nByteWritten;
      while (1) {
        nByteWritten =
            snprintf(mfself->storage->data + mfself->position,
                     mfself->storage->size - mfself->position, "%.9g", data[i]);
        if ((nByteWritten > -1) &&
            (nByteWritten < mfself->storage->size - mfself->position)) {
          mfself->position += nByteWritten;
          break;
        }
        THMemoryFile_grow(
            mfself, mfself->storage->size + (mfself->storage->size / 2) + 2);
      }
      if (mfself->file.isAutoSpacing) {
        if (i < n - 1) {
          THMemoryFile_grow(mfself, mfself->position + 1);
          sprintf(mfself->storage->data + mfself->position, " ");
          mfself->position++;
        }
        if (i == n - 1) {
          THMemoryFile_grow(mfself, mfself->position + 1);
          sprintf(mfself->storage->data + mfself->position, "\n");
          mfself->position++;
        }
      }
    }
    if (mfself->position > mfself->size) {
      mfself->size = mfself->position;
      mfself->storage->data[mfself->size] = '\0';
    }
  }
  return n;
}
static size_t THMemoryFile_readHalf(THFile* self, THHalf* data, size_t n) {
  THMemoryFile* mfself = (THMemoryFile*)self;
  size_t nread = 0;
  do {
    _THArgCheck("THMemoryFile.c", 330, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THMemoryFile.c", 330, mfself->file.isReadable, 1,
                "attempt to read in a write-only file");
  } while (0);
  if (n == 0) return 0;
  if (mfself->file.isBinary) {
    size_t nByte = sizeof(THHalf) * n;
    size_t nByteRemaining = (mfself->position + nByte <= mfself->size
                                 ? nByte
                                 : mfself->size - mfself->position);
    nread = nByteRemaining / sizeof(THHalf);
    memmove(data, mfself->storage->data + mfself->position,
            nread * sizeof(THHalf));
    mfself->position += nread * sizeof(THHalf);
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      size_t nByteRead = 0;
      char spaceChar = 0;
      char* spacePtr = THMemoryFile_strnextspace(
          mfself->storage->data + mfself->position, &spaceChar);
      int nByteRead_;
      float buf;
      int ret = sscanf(mfself->storage->data + mfself->position, "%g%n", &buf,
                       &nByteRead_);
      data[i] = TH_float2half(buf);
      nByteRead = nByteRead_;
      if (ret <= 0)
        break;
      else
        nread++;
      if (ret == EOF) {
        while (mfself->storage->data[mfself->position]) mfself->position++;
      } else
        mfself->position += nByteRead;
      if (spacePtr) *spacePtr = spaceChar;
    }
    if (mfself->file.isAutoSpacing && (n > 0)) {
      if ((mfself->position < mfself->size) &&
          (mfself->storage->data[mfself->position] == '\n'))
        mfself->position++;
    }
  }
  if (nread != n) {
    mfself->file.hasError = 1;
    if (!mfself->file.isQuiet)
      _THError("THMemoryFile.c", 330,
               "read error: read %d blocks instead of %d", nread, n);
  }
  return nread;
}
static size_t THMemoryFile_writeHalf(THFile* self, THHalf* data, size_t n) {
  THMemoryFile* mfself = (THMemoryFile*)self;
  do {
    _THArgCheck("THMemoryFile.c", 330, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THMemoryFile.c", 330, mfself->file.isWritable, 1,
                "attempt to write in a read-only file");
  } while (0);
  if (n == 0) return 0;
  if (mfself->file.isBinary) {
    size_t nByte = sizeof(THHalf) * n;
    THMemoryFile_grow(mfself, mfself->position + nByte);
    memmove(mfself->storage->data + mfself->position, data, nByte);
    mfself->position += nByte;
    if (mfself->position > mfself->size) {
      mfself->size = mfself->position;
      mfself->storage->data[mfself->size] = '\0';
    }
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      ssize_t nByteWritten;
      while (1) {
        nByteWritten = snprintf(mfself->storage->data + mfself->position,
                                mfself->storage->size - mfself->position,
                                "%.9g", TH_half2float(data[i]));
        if ((nByteWritten > -1) &&
            (nByteWritten < mfself->storage->size - mfself->position)) {
          mfself->position += nByteWritten;
          break;
        }
        THMemoryFile_grow(
            mfself, mfself->storage->size + (mfself->storage->size / 2) + 2);
      }
      if (mfself->file.isAutoSpacing) {
        if (i < n - 1) {
          THMemoryFile_grow(mfself, mfself->position + 1);
          sprintf(mfself->storage->data + mfself->position, " ");
          mfself->position++;
        }
        if (i == n - 1) {
          THMemoryFile_grow(mfself, mfself->position + 1);
          sprintf(mfself->storage->data + mfself->position, "\n");
          mfself->position++;
        }
      }
    }
    if (mfself->position > mfself->size) {
      mfself->size = mfself->position;
      mfself->storage->data[mfself->size] = '\0';
    }
  }
  return n;
}
static size_t THMemoryFile_readDouble(THFile* self, double* data, size_t n) {
  THMemoryFile* mfself = (THMemoryFile*)self;
  size_t nread = 0;
  do {
    _THArgCheck("THMemoryFile.c", 341, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THMemoryFile.c", 341, mfself->file.isReadable, 1,
                "attempt to read in a write-only file");
  } while (0);
  if (n == 0) return 0;
  if (mfself->file.isBinary) {
    size_t nByte = sizeof(double) * n;
    size_t nByteRemaining = (mfself->position + nByte <= mfself->size
                                 ? nByte
                                 : mfself->size - mfself->position);
    nread = nByteRemaining / sizeof(double);
    memmove(data, mfself->storage->data + mfself->position,
            nread * sizeof(double));
    mfself->position += nread * sizeof(double);
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      size_t nByteRead = 0;
      char spaceChar = 0;
      char* spacePtr = THMemoryFile_strnextspace(
          mfself->storage->data + mfself->position, &spaceChar);
      int nByteRead_;
      int ret = sscanf(mfself->storage->data + mfself->position, "%lg%n",
                       &data[i], &nByteRead_);
      nByteRead = nByteRead_;
      if (ret <= 0)
        break;
      else
        nread++;
      if (ret == EOF) {
        while (mfself->storage->data[mfself->position]) mfself->position++;
      } else
        mfself->position += nByteRead;
      if (spacePtr) *spacePtr = spaceChar;
    }
    if (mfself->file.isAutoSpacing && (n > 0)) {
      if ((mfself->position < mfself->size) &&
          (mfself->storage->data[mfself->position] == '\n'))
        mfself->position++;
    }
  }
  if (nread != n) {
    mfself->file.hasError = 1;
    if (!mfself->file.isQuiet)
      _THError("THMemoryFile.c", 341,
               "read error: read %d blocks instead of %d", nread, n);
  }
  return nread;
}
static size_t THMemoryFile_writeDouble(THFile* self, double* data, size_t n) {
  THMemoryFile* mfself = (THMemoryFile*)self;
  do {
    _THArgCheck("THMemoryFile.c", 341, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THMemoryFile.c", 341, mfself->file.isWritable, 1,
                "attempt to write in a read-only file");
  } while (0);
  if (n == 0) return 0;
  if (mfself->file.isBinary) {
    size_t nByte = sizeof(double) * n;
    THMemoryFile_grow(mfself, mfself->position + nByte);
    memmove(mfself->storage->data + mfself->position, data, nByte);
    mfself->position += nByte;
    if (mfself->position > mfself->size) {
      mfself->size = mfself->position;
      mfself->storage->data[mfself->size] = '\0';
    }
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      ssize_t nByteWritten;
      while (1) {
        nByteWritten = snprintf(mfself->storage->data + mfself->position,
                                mfself->storage->size - mfself->position,
                                "%.17g", data[i]);
        if ((nByteWritten > -1) &&
            (nByteWritten < mfself->storage->size - mfself->position)) {
          mfself->position += nByteWritten;
          break;
        }
        THMemoryFile_grow(
            mfself, mfself->storage->size + (mfself->storage->size / 2) + 2);
      }
      if (mfself->file.isAutoSpacing) {
        if (i < n - 1) {
          THMemoryFile_grow(mfself, mfself->position + 1);
          sprintf(mfself->storage->data + mfself->position, " ");
          mfself->position++;
        }
        if (i == n - 1) {
          THMemoryFile_grow(mfself, mfself->position + 1);
          sprintf(mfself->storage->data + mfself->position, "\n");
          mfself->position++;
        }
      }
    }
    if (mfself->position > mfself->size) {
      mfself->size = mfself->position;
      mfself->storage->data[mfself->size] = '\0';
    }
  }
  return n;
}
int THDiskFile_isLittleEndianCPU(void);

static size_t THMemoryFile_readLong(THFile* self, long* data, size_t n) {
  THMemoryFile* mfself = (THMemoryFile*)self;
  size_t nread = 0L;

  do {
    _THArgCheck("THMemoryFile.c", 358, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THMemoryFile.c", 359, mfself->file.isReadable, 1,
                "attempt to read in a write-only file");
  } while (0);

  if (n == 0) return 0;

  if (mfself->file.isBinary) {
    if (mfself->longSize == 0 || mfself->longSize == sizeof(long)) {
      size_t nByte = sizeof(long) * n;
      size_t nByteRemaining = (mfself->position + nByte <= mfself->size
                                   ? nByte
                                   : mfself->size - mfself->position);
      nread = nByteRemaining / sizeof(long);
      memmove(data, mfself->storage->data + mfself->position,
              nread * sizeof(long));
      mfself->position += nread * sizeof(long);
    } else if (mfself->longSize == 4) {
      size_t nByte = 4 * n;
      size_t nByteRemaining = (mfself->position + nByte <= mfself->size
                                   ? nByte
                                   : mfself->size - mfself->position);
      int32_t* storage = (int32_t*)(mfself->storage->data + mfself->position);
      nread = nByteRemaining / 4;
      size_t i;
      for (i = 0; i < nread; i++) data[i] = storage[i];
      mfself->position += nread * 4;
    } else {
      int big_endian = !THDiskFile_isLittleEndianCPU();
      size_t nByte = 8 * n;
      int32_t* storage = (int32_t*)(mfself->storage->data + mfself->position);
      size_t nByteRemaining = (mfself->position + nByte <= mfself->size
                                   ? nByte
                                   : mfself->size - mfself->position);
      nread = nByteRemaining / 8;
      size_t i;
      for (i = 0; i < nread; i++) data[i] = storage[2 * i + big_endian];
      mfself->position += nread * 8;
    }
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      size_t nByteRead = 0;
      char spaceChar = 0;
      char* spacePtr = THMemoryFile_strnextspace(
          mfself->storage->data + mfself->position, &spaceChar);
      int nByteRead_;
      int ret = sscanf(mfself->storage->data + mfself->position, "%ld%n",
                       &data[i], &nByteRead_);
      nByteRead = nByteRead_;
      if (ret <= 0)
        break;
      else
        nread++;
      if (ret == EOF) {
        while (mfself->storage->data[mfself->position]) mfself->position++;
      } else
        mfself->position += nByteRead;
      if (spacePtr) *spacePtr = spaceChar;
    }
    if (mfself->file.isAutoSpacing && (n > 0)) {
      if ((mfself->position < mfself->size) &&
          (mfself->storage->data[mfself->position] == '\n'))
        mfself->position++;
    }
  }

  if (nread != n) {
    mfself->file.hasError = 1;
    if (!mfself->file.isQuiet)
      _THError("THMemoryFile.c", 429,
               "read error: read %d blocks instead of %d", nread, n);
  }

  return nread;
}

static size_t THMemoryFile_writeLong(THFile* self, long* data, size_t n) {
  THMemoryFile* mfself = (THMemoryFile*)self;

  do {
    _THArgCheck("THMemoryFile.c", 438, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THMemoryFile.c", 439, mfself->file.isWritable, 1,
                "attempt to write in a read-only file");
  } while (0);

  if (n == 0) return 0;

  if (mfself->file.isBinary) {
    if (mfself->longSize == 0 || mfself->longSize == sizeof(long)) {
      size_t nByte = sizeof(long) * n;
      THMemoryFile_grow(mfself, mfself->position + nByte);
      memmove(mfself->storage->data + mfself->position, data, nByte);
      mfself->position += nByte;
    } else if (mfself->longSize == 4) {
      size_t nByte = 4 * n;
      THMemoryFile_grow(mfself, mfself->position + nByte);
      int32_t* storage = (int32_t*)(mfself->storage->data + mfself->position);
      size_t i;
      for (i = 0; i < n; i++) storage[i] = data[i];
      mfself->position += nByte;
    } else {
      int big_endian = !THDiskFile_isLittleEndianCPU();
      size_t nByte = 8 * n;
      THMemoryFile_grow(mfself, mfself->position + nByte);
      int32_t* storage = (int32_t*)(mfself->storage->data + mfself->position);
      size_t i;
      for (i = 0; i < n; i++) {
        storage[2 * i + !big_endian] = 0;
        storage[2 * i + big_endian] = data[i];
      }
      mfself->position += nByte;
    }
    if (mfself->position > mfself->size) {
      mfself->size = mfself->position;
      mfself->storage->data[mfself->size] = '\0';
    }
  } else {
    size_t i;
    for (i = 0; i < n; i++) {
      ssize_t nByteWritten;
      while (1) {
        nByteWritten =
            snprintf(mfself->storage->data + mfself->position,
                     mfself->storage->size - mfself->position, "%ld", data[i]);
        if ((nByteWritten > -1) &&
            (nByteWritten < mfself->storage->size - mfself->position)) {
          mfself->position += nByteWritten;
          break;
        }
        THMemoryFile_grow(
            mfself, mfself->storage->size + (mfself->storage->size / 2) + 2);
      }
      if (mfself->file.isAutoSpacing) {
        if (i < n - 1) {
          THMemoryFile_grow(mfself, mfself->position + 1);
          sprintf(mfself->storage->data + mfself->position, " ");
          mfself->position++;
        }
        if (i == n - 1) {
          THMemoryFile_grow(mfself, mfself->position + 1);
          sprintf(mfself->storage->data + mfself->position, "\n");
          mfself->position++;
        }
      }
    }
    if (mfself->position > mfself->size) {
      mfself->size = mfself->position;
      mfself->storage->data[mfself->size] = '\0';
    }
  }

  return n;
}

static char* THMemoryFile_cloneString(const char* str, ptrdiff_t size) {
  char* cstr = THAlloc(size);
  memcpy(cstr, str, size);
  return cstr;
}

static size_t THMemoryFile_readString(THFile* self, const char* format,
                                      char** str_) {
  THMemoryFile* mfself = (THMemoryFile*)self;

  do {
    _THArgCheck("THMemoryFile.c", 522, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THMemoryFile.c", 523, mfself->file.isReadable, 1,
                "attempt to read in a write-only file");
  } while (0);
  do {
    _THArgCheck(
        "THMemoryFile.c", 525,
        (strlen(format) >= 2
             ? (format[0] == '*') && (format[1] == 'a' || format[1] == 'l')
             : 0),
        2, "format must be '*a' or '*l'");
  } while (0)

      ;

  if (mfself->position == mfself->size) {
    mfself->file.hasError = 1;
    if (!mfself->file.isQuiet)
      _THError("THMemoryFile.c", 534, "read error: read 0 blocks instead of 1");

    *str_ = NULL;
    return 0;
  }

  if (format[1] == 'a') {
    size_t str_size = mfself->size - mfself->position;

    *str_ = THMemoryFile_cloneString(mfself->storage->data + mfself->position,
                                     str_size);
    mfself->position = mfself->size;

    return str_size;
  } else {
    char* p = mfself->storage->data + mfself->position;
    int eolFound = 0;
    size_t posEol;
    size_t i;
    for (i = 0; i < mfself->size - mfself->position; i++) {
      if (p[i] == '\n') {
        posEol = i;
        eolFound = 1;
        break;
      }
    }

    if (eolFound) {
      *str_ = THMemoryFile_cloneString(mfself->storage->data + mfself->position,
                                       posEol);
      mfself->position += posEol + 1;
      return posEol;
    } else {
      size_t str_size = mfself->size - mfself->position;

      *str_ = THMemoryFile_cloneString(mfself->storage->data + mfself->position,
                                       str_size);
      mfself->position = mfself->size;

      return str_size;
    }
  }

  *str_ = NULL;
  return 0;
}

static size_t THMemoryFile_writeString(THFile* self, const char* str,
                                       size_t size) {
  THMemoryFile* mfself = (THMemoryFile*)self;

  do {
    _THArgCheck("THMemoryFile.c", 586, mfself->storage != NULL, 1,
                "attempt to use a closed file");
  } while (0);
  do {
    _THArgCheck("THMemoryFile.c", 587, mfself->file.isWritable, 1,
                "attempt to write in a read-only file");
  } while (0);

  THMemoryFile_grow(mfself, mfself->position + size);
  memmove(mfself->storage->data + mfself->position, str, size);
  mfself->position += size;
  if (mfself->position > mfself->size) {
    mfself->size = mfself->position;
    mfself->storage->data[mfself->size] = '\0';
  }

  return size;
}

THFile* THMemoryFile_newWithStorage(THCharStorage* storage, const char* mode) {
  static struct THFileVTable vtable = {
      THMemoryFile_isOpened,

      THMemoryFile_readByte,    THMemoryFile_readChar,
      THMemoryFile_readShort,   THMemoryFile_readInt,
      THMemoryFile_readLong,    THMemoryFile_readFloat,
      THMemoryFile_readDouble,  THMemoryFile_readHalf,
      THMemoryFile_readString,

      THMemoryFile_writeByte,   THMemoryFile_writeChar,
      THMemoryFile_writeShort,  THMemoryFile_writeInt,
      THMemoryFile_writeLong,   THMemoryFile_writeFloat,
      THMemoryFile_writeDouble, THMemoryFile_writeHalf,
      THMemoryFile_writeString,

      THMemoryFile_synchronize, THMemoryFile_seek,
      THMemoryFile_seekEnd,     THMemoryFile_position,
      THMemoryFile_close,       THMemoryFile_free};

  THMemoryFile* mfself;
  int isReadable;
  int isWritable;

  if (storage) {
    do {
      _THArgCheck("THMemoryFile.c", 626,
                  storage->data[storage->size - 1] == '\0', 1,
                  "provided CharStorage must be terminated by 0");
    } while (0);
    do {
      _THArgCheck("THMemoryFile.c", 628,
                  THMemoryFile_mode(mode, &isReadable, &isWritable), 2,
                  "file mode should be 'r','w' or 'rw'");
    } while (0);
    THCharStorage_retain(storage);
  } else {
    do {
      _THArgCheck("THMemoryFile.c", 632,
                  THMemoryFile_mode(mode, &isReadable, &isWritable), 2,
                  "file mode should be 'r','w' or 'rw'");
    } while (0);
    storage = THCharStorage_newWithSize(1);
    storage->data[0] = '\0';
  }

  mfself = THAlloc(sizeof(THMemoryFile));

  mfself->storage = storage;
  mfself->size = (storage ? storage->size - 1 : 0);
  mfself->position = 0;
  mfself->longSize = 0;

  mfself->file.vtable = &vtable;
  mfself->file.isQuiet = 0;
  mfself->file.isReadable = isReadable;
  mfself->file.isWritable = isWritable;
  mfself->file.isBinary = 0;
  mfself->file.isAutoSpacing = 1;
  mfself->file.hasError = 0;

  return (THFile*)mfself;
}

THFile* THMemoryFile_new(const char* mode) {
  return THMemoryFile_newWithStorage(NULL, mode);
}
