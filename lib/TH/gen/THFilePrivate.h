// THIS FILE WAS AUTOMATICALLY GENERATED @ 2020-07-08
// DO NOT MODIFY


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
