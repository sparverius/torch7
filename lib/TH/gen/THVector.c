// THIS FILE WAS AUTOMATICALLY GENERATED @ 2020-07-09
// DO NOT MODIFY
#include "THGeneral.h"


void THFloatVector_fill(float* x, const float c, const ptrdiff_t n);
void THFloatVector_cadd(float* z, const float* x, const float* y, const float c,
                        const ptrdiff_t n);
void THFloatVector_adds(float* y, const float* x, const float c,
                        const ptrdiff_t n);
void THFloatVector_cmul(float* z, const float* x, const float* y,
                        const ptrdiff_t n);
void THFloatVector_muls(float* y, const float* x, const float c,
                        const ptrdiff_t n);
void THFloatVector_cdiv(float* z, const float* x, const float* y,
                        const ptrdiff_t n);
void THFloatVector_divs(float* y, const float* x, const float c,
                        const ptrdiff_t n);
void THFloatVector_copy(float* y, const float* x, const ptrdiff_t n);

void THFloatVector_vectorDispatchInit(void);

void THDoubleVector_fill(double* x, const double c, const ptrdiff_t n);
void THDoubleVector_cadd(double* z, const double* x, const double* y,
                         const double c, const ptrdiff_t n);
void THDoubleVector_adds(double* y, const double* x, const double c,
                         const ptrdiff_t n);
void THDoubleVector_cmul(double* z, const double* x, const double* y,
                         const ptrdiff_t n);
void THDoubleVector_muls(double* y, const double* x, const double c,
                         const ptrdiff_t n);
void THDoubleVector_cdiv(double* z, const double* x, const double* y,
                         const ptrdiff_t n);
void THDoubleVector_divs(double* y, const double* x, const double c,
                         const ptrdiff_t n);
void THDoubleVector_copy(double* y, const double* x, const ptrdiff_t n);

void THDoubleVector_vectorDispatchInit(void);

void THByteVector_fill(unsigned char* x, const unsigned char c,
                       const ptrdiff_t n);
void THByteVector_cadd(unsigned char* z, const unsigned char* x,
                       const unsigned char* y, const unsigned char c,
                       const ptrdiff_t n);
void THByteVector_adds(unsigned char* y, const unsigned char* x,
                       const unsigned char c, const ptrdiff_t n);
void THByteVector_cmul(unsigned char* z, const unsigned char* x,
                       const unsigned char* y, const ptrdiff_t n);
void THByteVector_muls(unsigned char* y, const unsigned char* x,
                       const unsigned char c, const ptrdiff_t n);
void THByteVector_cdiv(unsigned char* z, const unsigned char* x,
                       const unsigned char* y, const ptrdiff_t n);
void THByteVector_divs(unsigned char* y, const unsigned char* x,
                       const unsigned char c, const ptrdiff_t n);
void THByteVector_copy(unsigned char* y, const unsigned char* x,
                       const ptrdiff_t n);

void THByteVector_vectorDispatchInit(void);

void THCharVector_fill(char* x, const char c, const ptrdiff_t n);
void THCharVector_cadd(char* z, const char* x, const char* y, const char c,
                       const ptrdiff_t n);
void THCharVector_adds(char* y, const char* x, const char c, const ptrdiff_t n);
void THCharVector_cmul(char* z, const char* x, const char* y,
                       const ptrdiff_t n);
void THCharVector_muls(char* y, const char* x, const char c, const ptrdiff_t n);
void THCharVector_cdiv(char* z, const char* x, const char* y,
                       const ptrdiff_t n);
void THCharVector_divs(char* y, const char* x, const char c, const ptrdiff_t n);
void THCharVector_copy(char* y, const char* x, const ptrdiff_t n);

void THCharVector_vectorDispatchInit(void);

void THShortVector_fill(short* x, const short c, const ptrdiff_t n);
void THShortVector_cadd(short* z, const short* x, const short* y, const short c,
                        const ptrdiff_t n);
void THShortVector_adds(short* y, const short* x, const short c,
                        const ptrdiff_t n);
void THShortVector_cmul(short* z, const short* x, const short* y,
                        const ptrdiff_t n);
void THShortVector_muls(short* y, const short* x, const short c,
                        const ptrdiff_t n);
void THShortVector_cdiv(short* z, const short* x, const short* y,
                        const ptrdiff_t n);
void THShortVector_divs(short* y, const short* x, const short c,
                        const ptrdiff_t n);
void THShortVector_copy(short* y, const short* x, const ptrdiff_t n);

void THShortVector_vectorDispatchInit(void);

void THIntVector_fill(int* x, const int c, const ptrdiff_t n);
void THIntVector_cadd(int* z, const int* x, const int* y, const int c,
                      const ptrdiff_t n);
void THIntVector_adds(int* y, const int* x, const int c, const ptrdiff_t n);
void THIntVector_cmul(int* z, const int* x, const int* y, const ptrdiff_t n);
void THIntVector_muls(int* y, const int* x, const int c, const ptrdiff_t n);
void THIntVector_cdiv(int* z, const int* x, const int* y, const ptrdiff_t n);
void THIntVector_divs(int* y, const int* x, const int c, const ptrdiff_t n);
void THIntVector_copy(int* y, const int* x, const ptrdiff_t n);

void THIntVector_vectorDispatchInit(void);

void THLongVector_fill(long* x, const long c, const ptrdiff_t n);
void THLongVector_cadd(long* z, const long* x, const long* y, const long c,
                       const ptrdiff_t n);
void THLongVector_adds(long* y, const long* x, const long c, const ptrdiff_t n);
void THLongVector_cmul(long* z, const long* x, const long* y,
                       const ptrdiff_t n);
void THLongVector_muls(long* y, const long* x, const long c, const ptrdiff_t n);
void THLongVector_cdiv(long* z, const long* x, const long* y,
                       const ptrdiff_t n);
void THLongVector_divs(long* y, const long* x, const long c, const ptrdiff_t n);
void THLongVector_copy(long* y, const long* x, const ptrdiff_t n);

void THLongVector_vectorDispatchInit(void);

typedef struct FunctionDescription {
  void* function;
  uint32_t supportedSimdExt;
} FunctionDescription;

enum SIMDExtensions {

  SIMDExtension_AVX2 = 0x1,
  SIMDExtension_AVX = 0x2,
  SIMDExtension_SSE = 0x4,

  SIMDExtension_DEFAULT = 0x0
};
static inline void cpuid(uint32_t* eax, uint32_t* ebx, uint32_t* ecx,
                         uint32_t* edx) {
  uint32_t a = *eax, b, c = *ecx, d;
  asm volatile("cpuid\n\t" : "+a"(a), "=b"(b), "+c"(c), "=d"(d));
  *eax = a;
  *ebx = b;
  *ecx = c;
  *edx = d;
}

static inline uint32_t detectHostSIMDExtensions() {
  uint32_t eax, ebx, ecx, edx;
  uint32_t hostSimdExts = 0x0;
  int TH_NO_AVX = 1, TH_NO_AVX2 = 1, TH_NO_SSE = 1;
  char* evar;

  evar = getenv("TH_NO_AVX2");
  if (evar == NULL || strncmp(evar, "1", 2) != 0) TH_NO_AVX2 = 0;

  eax = 0x7;
  ecx = 0x0;
  cpuid(&eax, &ebx, &ecx, &edx);
  if ((ebx & 0x20) && TH_NO_AVX2 == 0) {
    hostSimdExts |= SIMDExtension_AVX2;
  }

  eax = 0x1;
  cpuid(&eax, &ebx, &ecx, &edx);

  evar = getenv("TH_NO_AVX");
  if (evar == NULL || strncmp(evar, "1", 2) != 0) TH_NO_AVX = 0;
  if (ecx & 0x10000000 && TH_NO_AVX == 0) {
    hostSimdExts |= SIMDExtension_AVX;
  }

  evar = getenv("TH_NO_SSE");
  if (evar == NULL || strncmp(evar, "1", 2) != 0) TH_NO_SSE = 0;
  if (edx & 0x2000000 && TH_NO_SSE == 0) {
    hostSimdExts |= SIMDExtension_SSE;
  }

  return hostSimdExts;
}

void THFloatVector_copy_DEFAULT(float* x, const float* y, const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    x[i] = y[i];
    x[i + 1] = y[i + 1];
    x[i + 2] = y[i + 2];
    x[i + 3] = y[i + 3];
  }

  for (; i < n; i++) x[i] = y[i];
}

void THFloatVector_fill_DEFAULT(float* x, const float c, const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    x[i] = c;
    x[i + 1] = c;
    x[i + 2] = c;
    x[i + 3] = c;
  }

  for (; i < n; i++) x[i] = c;
}

void THFloatVector_cadd_DEFAULT(float* z, const float* x, const float* y,
                                const float c, const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    z[i] = x[i] + c * y[i];
    z[i + 1] = x[i + 1] + c * y[i + 1];
    z[i + 2] = x[i + 2] + c * y[i + 2];
    z[i + 3] = x[i + 3] + c * y[i + 3];
  }

  for (; i < n; i++) z[i] = x[i] + c * y[i];
}

void THFloatVector_adds_DEFAULT(float* y, const float* x, const float c,
                                const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    y[i] = x[i] + c;
    y[i + 1] = x[i + 1] + c;
    y[i + 2] = x[i + 2] + c;
    y[i + 3] = x[i + 3] + c;
  }

  for (; i < n; i++) y[i] = x[i] + c;
}

void THFloatVector_cmul_DEFAULT(float* z, const float* x, const float* y,
                                const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    z[i] = x[i] * y[i];
    z[i + 1] = x[i + 1] * y[i + 1];
    z[i + 2] = x[i + 2] * y[i + 2];
    z[i + 3] = x[i + 3] * y[i + 3];
  }

  for (; i < n; i++) z[i] = x[i] * y[i];
}

void THFloatVector_muls_DEFAULT(float* y, const float* x, const float c,
                                const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    y[i] = x[i] * c;
    y[i + 1] = x[i + 1] * c;
    y[i + 2] = x[i + 2] * c;
    y[i + 3] = x[i + 3] * c;
  }

  for (; i < n; i++) y[i] = x[i] * c;
}

void THFloatVector_cdiv_DEFAULT(float* z, const float* x, const float* y,
                                const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    z[i] = x[i] / y[i];
    z[i + 1] = x[i + 1] / y[i + 1];
    z[i + 2] = x[i + 2] / y[i + 2];
    z[i + 3] = x[i + 3] / y[i + 3];
  }

  for (; i < n; i++) z[i] = x[i] / y[i];
}

void THFloatVector_divs_DEFAULT(float* y, const float* x, const float c,
                                const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    y[i] = x[i] / c;
    y[i + 1] = x[i + 1] / c;
    y[i + 2] = x[i + 2] / c;
    y[i + 3] = x[i + 3] / c;
  }

  for (; i < n; i++) y[i] = x[i] / c;
}

void THDoubleVector_copy_DEFAULT(double* x, const double* y,
                                 const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    x[i] = y[i];
    x[i + 1] = y[i + 1];
    x[i + 2] = y[i + 2];
    x[i + 3] = y[i + 3];
  }

  for (; i < n; i++) x[i] = y[i];
}

void THDoubleVector_fill_DEFAULT(double* x, const double c, const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    x[i] = c;
    x[i + 1] = c;
    x[i + 2] = c;
    x[i + 3] = c;
  }

  for (; i < n; i++) x[i] = c;
}

void THDoubleVector_cadd_DEFAULT(double* z, const double* x, const double* y,
                                 const double c, const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    z[i] = x[i] + c * y[i];
    z[i + 1] = x[i + 1] + c * y[i + 1];
    z[i + 2] = x[i + 2] + c * y[i + 2];
    z[i + 3] = x[i + 3] + c * y[i + 3];
  }

  for (; i < n; i++) z[i] = x[i] + c * y[i];
}

void THDoubleVector_adds_DEFAULT(double* y, const double* x, const double c,
                                 const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    y[i] = x[i] + c;
    y[i + 1] = x[i + 1] + c;
    y[i + 2] = x[i + 2] + c;
    y[i + 3] = x[i + 3] + c;
  }

  for (; i < n; i++) y[i] = x[i] + c;
}

void THDoubleVector_cmul_DEFAULT(double* z, const double* x, const double* y,
                                 const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    z[i] = x[i] * y[i];
    z[i + 1] = x[i + 1] * y[i + 1];
    z[i + 2] = x[i + 2] * y[i + 2];
    z[i + 3] = x[i + 3] * y[i + 3];
  }

  for (; i < n; i++) z[i] = x[i] * y[i];
}

void THDoubleVector_muls_DEFAULT(double* y, const double* x, const double c,
                                 const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    y[i] = x[i] * c;
    y[i + 1] = x[i + 1] * c;
    y[i + 2] = x[i + 2] * c;
    y[i + 3] = x[i + 3] * c;
  }

  for (; i < n; i++) y[i] = x[i] * c;
}

void THDoubleVector_cdiv_DEFAULT(double* z, const double* x, const double* y,
                                 const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    z[i] = x[i] / y[i];
    z[i + 1] = x[i + 1] / y[i + 1];
    z[i + 2] = x[i + 2] / y[i + 2];
    z[i + 3] = x[i + 3] / y[i + 3];
  }

  for (; i < n; i++) z[i] = x[i] / y[i];
}

void THDoubleVector_divs_DEFAULT(double* y, const double* x, const double c,
                                 const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    y[i] = x[i] / c;
    y[i + 1] = x[i + 1] / c;
    y[i + 2] = x[i + 2] / c;
    y[i + 3] = x[i + 3] / c;
  }

  for (; i < n; i++) y[i] = x[i] / c;
}

void THByteVector_copy_DEFAULT(unsigned char* x, const unsigned char* y,
                               const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    x[i] = y[i];
    x[i + 1] = y[i + 1];
    x[i + 2] = y[i + 2];
    x[i + 3] = y[i + 3];
  }

  for (; i < n; i++) x[i] = y[i];
}

void THByteVector_fill_DEFAULT(unsigned char* x, const unsigned char c,
                               const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    x[i] = c;
    x[i + 1] = c;
    x[i + 2] = c;
    x[i + 3] = c;
  }

  for (; i < n; i++) x[i] = c;
}

void THByteVector_cadd_DEFAULT(unsigned char* z, const unsigned char* x,
                               const unsigned char* y, const unsigned char c,
                               const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    z[i] = x[i] + c * y[i];
    z[i + 1] = x[i + 1] + c * y[i + 1];
    z[i + 2] = x[i + 2] + c * y[i + 2];
    z[i + 3] = x[i + 3] + c * y[i + 3];
  }

  for (; i < n; i++) z[i] = x[i] + c * y[i];
}

void THByteVector_adds_DEFAULT(unsigned char* y, const unsigned char* x,
                               const unsigned char c, const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    y[i] = x[i] + c;
    y[i + 1] = x[i + 1] + c;
    y[i + 2] = x[i + 2] + c;
    y[i + 3] = x[i + 3] + c;
  }

  for (; i < n; i++) y[i] = x[i] + c;
}

void THByteVector_cmul_DEFAULT(unsigned char* z, const unsigned char* x,
                               const unsigned char* y, const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    z[i] = x[i] * y[i];
    z[i + 1] = x[i + 1] * y[i + 1];
    z[i + 2] = x[i + 2] * y[i + 2];
    z[i + 3] = x[i + 3] * y[i + 3];
  }

  for (; i < n; i++) z[i] = x[i] * y[i];
}

void THByteVector_muls_DEFAULT(unsigned char* y, const unsigned char* x,
                               const unsigned char c, const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    y[i] = x[i] * c;
    y[i + 1] = x[i + 1] * c;
    y[i + 2] = x[i + 2] * c;
    y[i + 3] = x[i + 3] * c;
  }

  for (; i < n; i++) y[i] = x[i] * c;
}

void THByteVector_cdiv_DEFAULT(unsigned char* z, const unsigned char* x,
                               const unsigned char* y, const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    z[i] = x[i] / y[i];
    z[i + 1] = x[i + 1] / y[i + 1];
    z[i + 2] = x[i + 2] / y[i + 2];
    z[i + 3] = x[i + 3] / y[i + 3];
  }

  for (; i < n; i++) z[i] = x[i] / y[i];
}

void THByteVector_divs_DEFAULT(unsigned char* y, const unsigned char* x,
                               const unsigned char c, const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    y[i] = x[i] / c;
    y[i + 1] = x[i + 1] / c;
    y[i + 2] = x[i + 2] / c;
    y[i + 3] = x[i + 3] / c;
  }

  for (; i < n; i++) y[i] = x[i] / c;
}

void THCharVector_copy_DEFAULT(char* x, const char* y, const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    x[i] = y[i];
    x[i + 1] = y[i + 1];
    x[i + 2] = y[i + 2];
    x[i + 3] = y[i + 3];
  }

  for (; i < n; i++) x[i] = y[i];
}

void THCharVector_fill_DEFAULT(char* x, const char c, const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    x[i] = c;
    x[i + 1] = c;
    x[i + 2] = c;
    x[i + 3] = c;
  }

  for (; i < n; i++) x[i] = c;
}

void THCharVector_cadd_DEFAULT(char* z, const char* x, const char* y,
                               const char c, const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    z[i] = x[i] + c * y[i];
    z[i + 1] = x[i + 1] + c * y[i + 1];
    z[i + 2] = x[i + 2] + c * y[i + 2];
    z[i + 3] = x[i + 3] + c * y[i + 3];
  }

  for (; i < n; i++) z[i] = x[i] + c * y[i];
}

void THCharVector_adds_DEFAULT(char* y, const char* x, const char c,
                               const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    y[i] = x[i] + c;
    y[i + 1] = x[i + 1] + c;
    y[i + 2] = x[i + 2] + c;
    y[i + 3] = x[i + 3] + c;
  }

  for (; i < n; i++) y[i] = x[i] + c;
}

void THCharVector_cmul_DEFAULT(char* z, const char* x, const char* y,
                               const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    z[i] = x[i] * y[i];
    z[i + 1] = x[i + 1] * y[i + 1];
    z[i + 2] = x[i + 2] * y[i + 2];
    z[i + 3] = x[i + 3] * y[i + 3];
  }

  for (; i < n; i++) z[i] = x[i] * y[i];
}

void THCharVector_muls_DEFAULT(char* y, const char* x, const char c,
                               const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    y[i] = x[i] * c;
    y[i + 1] = x[i + 1] * c;
    y[i + 2] = x[i + 2] * c;
    y[i + 3] = x[i + 3] * c;
  }

  for (; i < n; i++) y[i] = x[i] * c;
}

void THCharVector_cdiv_DEFAULT(char* z, const char* x, const char* y,
                               const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    z[i] = x[i] / y[i];
    z[i + 1] = x[i + 1] / y[i + 1];
    z[i + 2] = x[i + 2] / y[i + 2];
    z[i + 3] = x[i + 3] / y[i + 3];
  }

  for (; i < n; i++) z[i] = x[i] / y[i];
}

void THCharVector_divs_DEFAULT(char* y, const char* x, const char c,
                               const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    y[i] = x[i] / c;
    y[i + 1] = x[i + 1] / c;
    y[i + 2] = x[i + 2] / c;
    y[i + 3] = x[i + 3] / c;
  }

  for (; i < n; i++) y[i] = x[i] / c;
}

void THShortVector_copy_DEFAULT(short* x, const short* y, const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    x[i] = y[i];
    x[i + 1] = y[i + 1];
    x[i + 2] = y[i + 2];
    x[i + 3] = y[i + 3];
  }

  for (; i < n; i++) x[i] = y[i];
}

void THShortVector_fill_DEFAULT(short* x, const short c, const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    x[i] = c;
    x[i + 1] = c;
    x[i + 2] = c;
    x[i + 3] = c;
  }

  for (; i < n; i++) x[i] = c;
}

void THShortVector_cadd_DEFAULT(short* z, const short* x, const short* y,
                                const short c, const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    z[i] = x[i] + c * y[i];
    z[i + 1] = x[i + 1] + c * y[i + 1];
    z[i + 2] = x[i + 2] + c * y[i + 2];
    z[i + 3] = x[i + 3] + c * y[i + 3];
  }

  for (; i < n; i++) z[i] = x[i] + c * y[i];
}

void THShortVector_adds_DEFAULT(short* y, const short* x, const short c,
                                const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    y[i] = x[i] + c;
    y[i + 1] = x[i + 1] + c;
    y[i + 2] = x[i + 2] + c;
    y[i + 3] = x[i + 3] + c;
  }

  for (; i < n; i++) y[i] = x[i] + c;
}

void THShortVector_cmul_DEFAULT(short* z, const short* x, const short* y,
                                const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    z[i] = x[i] * y[i];
    z[i + 1] = x[i + 1] * y[i + 1];
    z[i + 2] = x[i + 2] * y[i + 2];
    z[i + 3] = x[i + 3] * y[i + 3];
  }

  for (; i < n; i++) z[i] = x[i] * y[i];
}

void THShortVector_muls_DEFAULT(short* y, const short* x, const short c,
                                const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    y[i] = x[i] * c;
    y[i + 1] = x[i + 1] * c;
    y[i + 2] = x[i + 2] * c;
    y[i + 3] = x[i + 3] * c;
  }

  for (; i < n; i++) y[i] = x[i] * c;
}

void THShortVector_cdiv_DEFAULT(short* z, const short* x, const short* y,
                                const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    z[i] = x[i] / y[i];
    z[i + 1] = x[i + 1] / y[i + 1];
    z[i + 2] = x[i + 2] / y[i + 2];
    z[i + 3] = x[i + 3] / y[i + 3];
  }

  for (; i < n; i++) z[i] = x[i] / y[i];
}

void THShortVector_divs_DEFAULT(short* y, const short* x, const short c,
                                const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    y[i] = x[i] / c;
    y[i + 1] = x[i + 1] / c;
    y[i + 2] = x[i + 2] / c;
    y[i + 3] = x[i + 3] / c;
  }

  for (; i < n; i++) y[i] = x[i] / c;
}

void THIntVector_copy_DEFAULT(int* x, const int* y, const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    x[i] = y[i];
    x[i + 1] = y[i + 1];
    x[i + 2] = y[i + 2];
    x[i + 3] = y[i + 3];
  }

  for (; i < n; i++) x[i] = y[i];
}

void THIntVector_fill_DEFAULT(int* x, const int c, const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    x[i] = c;
    x[i + 1] = c;
    x[i + 2] = c;
    x[i + 3] = c;
  }

  for (; i < n; i++) x[i] = c;
}

void THIntVector_cadd_DEFAULT(int* z, const int* x, const int* y, const int c,
                              const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    z[i] = x[i] + c * y[i];
    z[i + 1] = x[i + 1] + c * y[i + 1];
    z[i + 2] = x[i + 2] + c * y[i + 2];
    z[i + 3] = x[i + 3] + c * y[i + 3];
  }

  for (; i < n; i++) z[i] = x[i] + c * y[i];
}

void THIntVector_adds_DEFAULT(int* y, const int* x, const int c,
                              const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    y[i] = x[i] + c;
    y[i + 1] = x[i + 1] + c;
    y[i + 2] = x[i + 2] + c;
    y[i + 3] = x[i + 3] + c;
  }

  for (; i < n; i++) y[i] = x[i] + c;
}

void THIntVector_cmul_DEFAULT(int* z, const int* x, const int* y,
                              const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    z[i] = x[i] * y[i];
    z[i + 1] = x[i + 1] * y[i + 1];
    z[i + 2] = x[i + 2] * y[i + 2];
    z[i + 3] = x[i + 3] * y[i + 3];
  }

  for (; i < n; i++) z[i] = x[i] * y[i];
}

void THIntVector_muls_DEFAULT(int* y, const int* x, const int c,
                              const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    y[i] = x[i] * c;
    y[i + 1] = x[i + 1] * c;
    y[i + 2] = x[i + 2] * c;
    y[i + 3] = x[i + 3] * c;
  }

  for (; i < n; i++) y[i] = x[i] * c;
}

void THIntVector_cdiv_DEFAULT(int* z, const int* x, const int* y,
                              const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    z[i] = x[i] / y[i];
    z[i + 1] = x[i + 1] / y[i + 1];
    z[i + 2] = x[i + 2] / y[i + 2];
    z[i + 3] = x[i + 3] / y[i + 3];
  }

  for (; i < n; i++) z[i] = x[i] / y[i];
}

void THIntVector_divs_DEFAULT(int* y, const int* x, const int c,
                              const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    y[i] = x[i] / c;
    y[i + 1] = x[i + 1] / c;
    y[i + 2] = x[i + 2] / c;
    y[i + 3] = x[i + 3] / c;
  }

  for (; i < n; i++) y[i] = x[i] / c;
}

void THLongVector_copy_DEFAULT(long* x, const long* y, const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    x[i] = y[i];
    x[i + 1] = y[i + 1];
    x[i + 2] = y[i + 2];
    x[i + 3] = y[i + 3];
  }

  for (; i < n; i++) x[i] = y[i];
}

void THLongVector_fill_DEFAULT(long* x, const long c, const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    x[i] = c;
    x[i + 1] = c;
    x[i + 2] = c;
    x[i + 3] = c;
  }

  for (; i < n; i++) x[i] = c;
}

void THLongVector_cadd_DEFAULT(long* z, const long* x, const long* y,
                               const long c, const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    z[i] = x[i] + c * y[i];
    z[i + 1] = x[i + 1] + c * y[i + 1];
    z[i + 2] = x[i + 2] + c * y[i + 2];
    z[i + 3] = x[i + 3] + c * y[i + 3];
  }

  for (; i < n; i++) z[i] = x[i] + c * y[i];
}

void THLongVector_adds_DEFAULT(long* y, const long* x, const long c,
                               const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    y[i] = x[i] + c;
    y[i + 1] = x[i + 1] + c;
    y[i + 2] = x[i + 2] + c;
    y[i + 3] = x[i + 3] + c;
  }

  for (; i < n; i++) y[i] = x[i] + c;
}

void THLongVector_cmul_DEFAULT(long* z, const long* x, const long* y,
                               const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    z[i] = x[i] * y[i];
    z[i + 1] = x[i + 1] * y[i + 1];
    z[i + 2] = x[i + 2] * y[i + 2];
    z[i + 3] = x[i + 3] * y[i + 3];
  }

  for (; i < n; i++) z[i] = x[i] * y[i];
}

void THLongVector_muls_DEFAULT(long* y, const long* x, const long c,
                               const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    y[i] = x[i] * c;
    y[i + 1] = x[i + 1] * c;
    y[i + 2] = x[i + 2] * c;
    y[i + 3] = x[i + 3] * c;
  }

  for (; i < n; i++) y[i] = x[i] * c;
}

void THLongVector_cdiv_DEFAULT(long* z, const long* x, const long* y,
                               const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    z[i] = x[i] / y[i];
    z[i + 1] = x[i + 1] / y[i + 1];
    z[i + 2] = x[i + 2] / y[i + 2];
    z[i + 3] = x[i + 3] / y[i + 3];
  }

  for (; i < n; i++) z[i] = x[i] / y[i];
}

void THLongVector_divs_DEFAULT(long* y, const long* x, const long c,
                               const ptrdiff_t n) {
  ptrdiff_t i = 0;

  for (; i < n - 4; i += 4) {
    y[i] = x[i] / c;
    y[i + 1] = x[i + 1] / c;
    y[i + 2] = x[i + 2] / c;
    y[i + 3] = x[i + 3] / c;
  }

  for (; i < n; i++) y[i] = x[i] / c;
}

static void (*THFloatVector_fill_DISPATCHPTR)(
    float*, const float, const ptrdiff_t) = &THFloatVector_fill_DEFAULT;
static FunctionDescription THFloatVector_fill_DISPATCHTABLE[] = {
    {.function = (void*)THFloatVector_fill_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THFloatVector_fill(float* x, const float c, const ptrdiff_t n) {
  THFloatVector_fill_DISPATCHPTR(x, c, n);
}

static void (*THFloatVector_cadd_DISPATCHPTR)(
    float*, const float*, const float*, const float,
    const ptrdiff_t) = &THFloatVector_cadd_DEFAULT;
static FunctionDescription THFloatVector_cadd_DISPATCHTABLE[] = {
    {.function = (void*)THFloatVector_cadd_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THFloatVector_cadd(float* z, const float* x, const float* y, const float c,
                        const ptrdiff_t n) {
  THFloatVector_cadd_DISPATCHPTR(z, x, y, c, n);
}

static void (*THFloatVector_adds_DISPATCHPTR)(float*, const float*, const float,
                                              const ptrdiff_t) =
    &THFloatVector_adds_DEFAULT;
static FunctionDescription THFloatVector_adds_DISPATCHTABLE[] = {
    {.function = (void*)THFloatVector_adds_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};

void THFloatVector_adds(float* r_, const float* t, const float value,
                        const ptrdiff_t n) {
  THFloatVector_adds_DISPATCHPTR(r_, t, value, n);
}

static void (*THFloatVector_cmul_DISPATCHPTR)(float*, const float*,
                                              const float*, const ptrdiff_t) =
    &THFloatVector_cmul_DEFAULT;
static FunctionDescription THFloatVector_cmul_DISPATCHTABLE[] = {
    {.function = (void*)THFloatVector_cmul_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THFloatVector_cmul(float* z, const float* x, const float* y,
                        const ptrdiff_t n) {
  THFloatVector_cmul_DISPATCHPTR(z, x, y, n);
}

static void (*THFloatVector_muls_DISPATCHPTR)(float*, const float*, const float,
                                              const ptrdiff_t) =
    &THFloatVector_muls_DEFAULT;
static FunctionDescription THFloatVector_muls_DISPATCHTABLE[] = {
    {.function = (void*)THFloatVector_muls_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THFloatVector_muls(float* y, const float* x, const float c,
                        const ptrdiff_t n) {
  THFloatVector_muls_DISPATCHPTR(y, x, c, n);
}

static void (*THFloatVector_cdiv_DISPATCHPTR)(float*, const float*,
                                              const float*, const ptrdiff_t) =
    &THFloatVector_cdiv_DEFAULT;
static FunctionDescription THFloatVector_cdiv_DISPATCHTABLE[] = {
    {.function = (void*)THFloatVector_cdiv_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THFloatVector_cdiv(float* z, const float* x, const float* y,
                        const ptrdiff_t n) {
  THFloatVector_cdiv_DISPATCHPTR(z, x, y, n);
}

static void (*THFloatVector_divs_DISPATCHPTR)(float*, const float*, const float,
                                              const ptrdiff_t) =
    &THFloatVector_divs_DEFAULT;
static FunctionDescription THFloatVector_divs_DISPATCHTABLE[] = {
    {.function = (void*)THFloatVector_divs_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THFloatVector_divs(float* y, const float* x, const float c,
                        const ptrdiff_t n) {
  THFloatVector_divs_DISPATCHPTR(y, x, c, n);
}

static void (*THFloatVector_copy_DISPATCHPTR)(
    float*, const float*, const ptrdiff_t) = &THFloatVector_copy_DEFAULT;
static FunctionDescription THFloatVector_copy_DISPATCHTABLE[] = {

    {.function = (void*)THFloatVector_copy_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THFloatVector_copy(float* y, const float* x, const ptrdiff_t n) {
  THFloatVector_copy_DISPATCHPTR(y, x, n);
}
void THFloatVector_vectorDispatchInit(void) {
  uint32_t hostSimdExts = detectHostSIMDExtensions();
  do {
    int i;
    for (i = 0; i < sizeof(THFloatVector_fill_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THFloatVector_fill_DISPATCHPTR =
          THFloatVector_fill_DISPATCHTABLE[i].function;
      if (THFloatVector_fill_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THFloatVector_cadd_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THFloatVector_cadd_DISPATCHPTR =
          THFloatVector_cadd_DISPATCHTABLE[i].function;
      if (THFloatVector_cadd_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THFloatVector_adds_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THFloatVector_adds_DISPATCHPTR =
          THFloatVector_adds_DISPATCHTABLE[i].function;
      if (THFloatVector_adds_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THFloatVector_cmul_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THFloatVector_cmul_DISPATCHPTR =
          THFloatVector_cmul_DISPATCHTABLE[i].function;
      if (THFloatVector_cmul_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THFloatVector_muls_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THFloatVector_muls_DISPATCHPTR =
          THFloatVector_muls_DISPATCHTABLE[i].function;
      if (THFloatVector_muls_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THFloatVector_cdiv_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THFloatVector_cdiv_DISPATCHPTR =
          THFloatVector_cdiv_DISPATCHTABLE[i].function;
      if (THFloatVector_cdiv_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THFloatVector_divs_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THFloatVector_divs_DISPATCHPTR =
          THFloatVector_divs_DISPATCHTABLE[i].function;
      if (THFloatVector_divs_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THFloatVector_copy_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THFloatVector_copy_DISPATCHPTR =
          THFloatVector_copy_DISPATCHTABLE[i].function;
      if (THFloatVector_copy_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
}

static void (*THDoubleVector_fill_DISPATCHPTR)(
    double*, const double, const ptrdiff_t) = &THDoubleVector_fill_DEFAULT;
static FunctionDescription THDoubleVector_fill_DISPATCHTABLE[] = {
    {.function = (void*)THDoubleVector_fill_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THDoubleVector_fill(double* x, const double c, const ptrdiff_t n) {
  THDoubleVector_fill_DISPATCHPTR(x, c, n);
}

static void (*THDoubleVector_cadd_DISPATCHPTR)(
    double*, const double*, const double*, const double,
    const ptrdiff_t) = &THDoubleVector_cadd_DEFAULT;
static FunctionDescription THDoubleVector_cadd_DISPATCHTABLE[] = {
    {.function = (void*)THDoubleVector_cadd_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THDoubleVector_cadd(double* z, const double* x, const double* y,
                         const double c, const ptrdiff_t n) {
  THDoubleVector_cadd_DISPATCHPTR(z, x, y, c, n);
}

static void (*THDoubleVector_adds_DISPATCHPTR)(double*, const double*,
                                               const double, const ptrdiff_t) =
    &THDoubleVector_adds_DEFAULT;
static FunctionDescription THDoubleVector_adds_DISPATCHTABLE[] = {
    {.function = (void*)THDoubleVector_adds_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};

void THDoubleVector_adds(double* r_, const double* t, const double value,
                         const ptrdiff_t n) {
  THDoubleVector_adds_DISPATCHPTR(r_, t, value, n);
}

static void (*THDoubleVector_cmul_DISPATCHPTR)(double*, const double*,
                                               const double*, const ptrdiff_t) =
    &THDoubleVector_cmul_DEFAULT;
static FunctionDescription THDoubleVector_cmul_DISPATCHTABLE[] = {
    {.function = (void*)THDoubleVector_cmul_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THDoubleVector_cmul(double* z, const double* x, const double* y,
                         const ptrdiff_t n) {
  THDoubleVector_cmul_DISPATCHPTR(z, x, y, n);
}

static void (*THDoubleVector_muls_DISPATCHPTR)(double*, const double*,
                                               const double, const ptrdiff_t) =
    &THDoubleVector_muls_DEFAULT;
static FunctionDescription THDoubleVector_muls_DISPATCHTABLE[] = {
    {.function = (void*)THDoubleVector_muls_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THDoubleVector_muls(double* y, const double* x, const double c,
                         const ptrdiff_t n) {
  THDoubleVector_muls_DISPATCHPTR(y, x, c, n);
}

static void (*THDoubleVector_cdiv_DISPATCHPTR)(double*, const double*,
                                               const double*, const ptrdiff_t) =
    &THDoubleVector_cdiv_DEFAULT;
static FunctionDescription THDoubleVector_cdiv_DISPATCHTABLE[] = {
    {.function = (void*)THDoubleVector_cdiv_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THDoubleVector_cdiv(double* z, const double* x, const double* y,
                         const ptrdiff_t n) {
  THDoubleVector_cdiv_DISPATCHPTR(z, x, y, n);
}

static void (*THDoubleVector_divs_DISPATCHPTR)(double*, const double*,
                                               const double, const ptrdiff_t) =
    &THDoubleVector_divs_DEFAULT;
static FunctionDescription THDoubleVector_divs_DISPATCHTABLE[] = {
    {.function = (void*)THDoubleVector_divs_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THDoubleVector_divs(double* y, const double* x, const double c,
                         const ptrdiff_t n) {
  THDoubleVector_divs_DISPATCHPTR(y, x, c, n);
}

static void (*THDoubleVector_copy_DISPATCHPTR)(
    double*, const double*, const ptrdiff_t) = &THDoubleVector_copy_DEFAULT;
static FunctionDescription THDoubleVector_copy_DISPATCHTABLE[] = {

    {.function = (void*)THDoubleVector_copy_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THDoubleVector_copy(double* y, const double* x, const ptrdiff_t n) {
  THDoubleVector_copy_DISPATCHPTR(y, x, n);
}
void THDoubleVector_vectorDispatchInit(void) {
  uint32_t hostSimdExts = detectHostSIMDExtensions();
  do {
    int i;
    for (i = 0; i < sizeof(THDoubleVector_fill_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THDoubleVector_fill_DISPATCHPTR =
          THDoubleVector_fill_DISPATCHTABLE[i].function;
      if (THDoubleVector_fill_DISPATCHTABLE[i].supportedSimdExt &
          hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THDoubleVector_cadd_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THDoubleVector_cadd_DISPATCHPTR =
          THDoubleVector_cadd_DISPATCHTABLE[i].function;
      if (THDoubleVector_cadd_DISPATCHTABLE[i].supportedSimdExt &
          hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THDoubleVector_adds_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THDoubleVector_adds_DISPATCHPTR =
          THDoubleVector_adds_DISPATCHTABLE[i].function;
      if (THDoubleVector_adds_DISPATCHTABLE[i].supportedSimdExt &
          hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THDoubleVector_cmul_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THDoubleVector_cmul_DISPATCHPTR =
          THDoubleVector_cmul_DISPATCHTABLE[i].function;
      if (THDoubleVector_cmul_DISPATCHTABLE[i].supportedSimdExt &
          hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THDoubleVector_muls_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THDoubleVector_muls_DISPATCHPTR =
          THDoubleVector_muls_DISPATCHTABLE[i].function;
      if (THDoubleVector_muls_DISPATCHTABLE[i].supportedSimdExt &
          hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THDoubleVector_cdiv_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THDoubleVector_cdiv_DISPATCHPTR =
          THDoubleVector_cdiv_DISPATCHTABLE[i].function;
      if (THDoubleVector_cdiv_DISPATCHTABLE[i].supportedSimdExt &
          hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THDoubleVector_divs_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THDoubleVector_divs_DISPATCHPTR =
          THDoubleVector_divs_DISPATCHTABLE[i].function;
      if (THDoubleVector_divs_DISPATCHTABLE[i].supportedSimdExt &
          hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THDoubleVector_copy_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THDoubleVector_copy_DISPATCHPTR =
          THDoubleVector_copy_DISPATCHTABLE[i].function;
      if (THDoubleVector_copy_DISPATCHTABLE[i].supportedSimdExt &
          hostSimdExts) {
        break;
      }
    }
  } while (0);
}

static void (*THByteVector_fill_DISPATCHPTR)(
    unsigned char*, const unsigned char,
    const ptrdiff_t) = &THByteVector_fill_DEFAULT;
static FunctionDescription THByteVector_fill_DISPATCHTABLE[] = {
    {.function = (void*)THByteVector_fill_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THByteVector_fill(unsigned char* x, const unsigned char c,
                       const ptrdiff_t n) {
  THByteVector_fill_DISPATCHPTR(x, c, n);
}

static void (*THByteVector_cadd_DISPATCHPTR)(
    unsigned char*, const unsigned char*, const unsigned char*,
    const unsigned char, const ptrdiff_t) = &THByteVector_cadd_DEFAULT;
static FunctionDescription THByteVector_cadd_DISPATCHTABLE[] = {
    {.function = (void*)THByteVector_cadd_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THByteVector_cadd(unsigned char* z, const unsigned char* x,
                       const unsigned char* y, const unsigned char c,
                       const ptrdiff_t n) {
  THByteVector_cadd_DISPATCHPTR(z, x, y, c, n);
}

static void (*THByteVector_adds_DISPATCHPTR)(
    unsigned char*, const unsigned char*, const unsigned char,
    const ptrdiff_t) = &THByteVector_adds_DEFAULT;
static FunctionDescription THByteVector_adds_DISPATCHTABLE[] = {
    {.function = (void*)THByteVector_adds_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};

void THByteVector_adds(unsigned char* r_, const unsigned char* t,
                       const unsigned char value, const ptrdiff_t n) {
  THByteVector_adds_DISPATCHPTR(r_, t, value, n);
}

static void (*THByteVector_cmul_DISPATCHPTR)(
    unsigned char*, const unsigned char*, const unsigned char*,
    const ptrdiff_t) = &THByteVector_cmul_DEFAULT;
static FunctionDescription THByteVector_cmul_DISPATCHTABLE[] = {
    {.function = (void*)THByteVector_cmul_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THByteVector_cmul(unsigned char* z, const unsigned char* x,
                       const unsigned char* y, const ptrdiff_t n) {
  THByteVector_cmul_DISPATCHPTR(z, x, y, n);
}

static void (*THByteVector_muls_DISPATCHPTR)(
    unsigned char*, const unsigned char*, const unsigned char,
    const ptrdiff_t) = &THByteVector_muls_DEFAULT;
static FunctionDescription THByteVector_muls_DISPATCHTABLE[] = {
    {.function = (void*)THByteVector_muls_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THByteVector_muls(unsigned char* y, const unsigned char* x,
                       const unsigned char c, const ptrdiff_t n) {
  THByteVector_muls_DISPATCHPTR(y, x, c, n);
}

static void (*THByteVector_cdiv_DISPATCHPTR)(
    unsigned char*, const unsigned char*, const unsigned char*,
    const ptrdiff_t) = &THByteVector_cdiv_DEFAULT;
static FunctionDescription THByteVector_cdiv_DISPATCHTABLE[] = {
    {.function = (void*)THByteVector_cdiv_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THByteVector_cdiv(unsigned char* z, const unsigned char* x,
                       const unsigned char* y, const ptrdiff_t n) {
  THByteVector_cdiv_DISPATCHPTR(z, x, y, n);
}

static void (*THByteVector_divs_DISPATCHPTR)(
    unsigned char*, const unsigned char*, const unsigned char,
    const ptrdiff_t) = &THByteVector_divs_DEFAULT;
static FunctionDescription THByteVector_divs_DISPATCHTABLE[] = {
    {.function = (void*)THByteVector_divs_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THByteVector_divs(unsigned char* y, const unsigned char* x,
                       const unsigned char c, const ptrdiff_t n) {
  THByteVector_divs_DISPATCHPTR(y, x, c, n);
}

static void (*THByteVector_copy_DISPATCHPTR)(
    unsigned char*, const unsigned char*,
    const ptrdiff_t) = &THByteVector_copy_DEFAULT;
static FunctionDescription THByteVector_copy_DISPATCHTABLE[] = {

    {.function = (void*)THByteVector_copy_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THByteVector_copy(unsigned char* y, const unsigned char* x,
                       const ptrdiff_t n) {
  THByteVector_copy_DISPATCHPTR(y, x, n);
}
void THByteVector_vectorDispatchInit(void) {
  uint32_t hostSimdExts = detectHostSIMDExtensions();
  do {
    int i;
    for (i = 0; i < sizeof(THByteVector_fill_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THByteVector_fill_DISPATCHPTR =
          THByteVector_fill_DISPATCHTABLE[i].function;
      if (THByteVector_fill_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THByteVector_cadd_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THByteVector_cadd_DISPATCHPTR =
          THByteVector_cadd_DISPATCHTABLE[i].function;
      if (THByteVector_cadd_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THByteVector_adds_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THByteVector_adds_DISPATCHPTR =
          THByteVector_adds_DISPATCHTABLE[i].function;
      if (THByteVector_adds_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THByteVector_cmul_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THByteVector_cmul_DISPATCHPTR =
          THByteVector_cmul_DISPATCHTABLE[i].function;
      if (THByteVector_cmul_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THByteVector_muls_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THByteVector_muls_DISPATCHPTR =
          THByteVector_muls_DISPATCHTABLE[i].function;
      if (THByteVector_muls_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THByteVector_cdiv_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THByteVector_cdiv_DISPATCHPTR =
          THByteVector_cdiv_DISPATCHTABLE[i].function;
      if (THByteVector_cdiv_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THByteVector_divs_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THByteVector_divs_DISPATCHPTR =
          THByteVector_divs_DISPATCHTABLE[i].function;
      if (THByteVector_divs_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THByteVector_copy_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THByteVector_copy_DISPATCHPTR =
          THByteVector_copy_DISPATCHTABLE[i].function;
      if (THByteVector_copy_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
}

static void (*THCharVector_fill_DISPATCHPTR)(
    char*, const char, const ptrdiff_t) = &THCharVector_fill_DEFAULT;
static FunctionDescription THCharVector_fill_DISPATCHTABLE[] = {
    {.function = (void*)THCharVector_fill_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THCharVector_fill(char* x, const char c, const ptrdiff_t n) {
  THCharVector_fill_DISPATCHPTR(x, c, n);
}

static void (*THCharVector_cadd_DISPATCHPTR)(char*, const char*, const char*,
                                             const char, const ptrdiff_t) =
    &THCharVector_cadd_DEFAULT;
static FunctionDescription THCharVector_cadd_DISPATCHTABLE[] = {
    {.function = (void*)THCharVector_cadd_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THCharVector_cadd(char* z, const char* x, const char* y, const char c,
                       const ptrdiff_t n) {
  THCharVector_cadd_DISPATCHPTR(z, x, y, c, n);
}

static void (*THCharVector_adds_DISPATCHPTR)(char*, const char*, const char,
                                             const ptrdiff_t) =
    &THCharVector_adds_DEFAULT;
static FunctionDescription THCharVector_adds_DISPATCHTABLE[] = {
    {.function = (void*)THCharVector_adds_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};

void THCharVector_adds(char* r_, const char* t, const char value,
                       const ptrdiff_t n) {
  THCharVector_adds_DISPATCHPTR(r_, t, value, n);
}

static void (*THCharVector_cmul_DISPATCHPTR)(char*, const char*, const char*,
                                             const ptrdiff_t) =
    &THCharVector_cmul_DEFAULT;
static FunctionDescription THCharVector_cmul_DISPATCHTABLE[] = {
    {.function = (void*)THCharVector_cmul_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THCharVector_cmul(char* z, const char* x, const char* y,
                       const ptrdiff_t n) {
  THCharVector_cmul_DISPATCHPTR(z, x, y, n);
}

static void (*THCharVector_muls_DISPATCHPTR)(char*, const char*, const char,
                                             const ptrdiff_t) =
    &THCharVector_muls_DEFAULT;
static FunctionDescription THCharVector_muls_DISPATCHTABLE[] = {
    {.function = (void*)THCharVector_muls_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THCharVector_muls(char* y, const char* x, const char c,
                       const ptrdiff_t n) {
  THCharVector_muls_DISPATCHPTR(y, x, c, n);
}

static void (*THCharVector_cdiv_DISPATCHPTR)(char*, const char*, const char*,
                                             const ptrdiff_t) =
    &THCharVector_cdiv_DEFAULT;
static FunctionDescription THCharVector_cdiv_DISPATCHTABLE[] = {
    {.function = (void*)THCharVector_cdiv_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THCharVector_cdiv(char* z, const char* x, const char* y,
                       const ptrdiff_t n) {
  THCharVector_cdiv_DISPATCHPTR(z, x, y, n);
}

static void (*THCharVector_divs_DISPATCHPTR)(char*, const char*, const char,
                                             const ptrdiff_t) =
    &THCharVector_divs_DEFAULT;
static FunctionDescription THCharVector_divs_DISPATCHTABLE[] = {
    {.function = (void*)THCharVector_divs_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THCharVector_divs(char* y, const char* x, const char c,
                       const ptrdiff_t n) {
  THCharVector_divs_DISPATCHPTR(y, x, c, n);
}

static void (*THCharVector_copy_DISPATCHPTR)(
    char*, const char*, const ptrdiff_t) = &THCharVector_copy_DEFAULT;
static FunctionDescription THCharVector_copy_DISPATCHTABLE[] = {

    {.function = (void*)THCharVector_copy_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THCharVector_copy(char* y, const char* x, const ptrdiff_t n) {
  THCharVector_copy_DISPATCHPTR(y, x, n);
}
void THCharVector_vectorDispatchInit(void) {
  uint32_t hostSimdExts = detectHostSIMDExtensions();
  do {
    int i;
    for (i = 0; i < sizeof(THCharVector_fill_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THCharVector_fill_DISPATCHPTR =
          THCharVector_fill_DISPATCHTABLE[i].function;
      if (THCharVector_fill_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THCharVector_cadd_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THCharVector_cadd_DISPATCHPTR =
          THCharVector_cadd_DISPATCHTABLE[i].function;
      if (THCharVector_cadd_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THCharVector_adds_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THCharVector_adds_DISPATCHPTR =
          THCharVector_adds_DISPATCHTABLE[i].function;
      if (THCharVector_adds_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THCharVector_cmul_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THCharVector_cmul_DISPATCHPTR =
          THCharVector_cmul_DISPATCHTABLE[i].function;
      if (THCharVector_cmul_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THCharVector_muls_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THCharVector_muls_DISPATCHPTR =
          THCharVector_muls_DISPATCHTABLE[i].function;
      if (THCharVector_muls_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THCharVector_cdiv_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THCharVector_cdiv_DISPATCHPTR =
          THCharVector_cdiv_DISPATCHTABLE[i].function;
      if (THCharVector_cdiv_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THCharVector_divs_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THCharVector_divs_DISPATCHPTR =
          THCharVector_divs_DISPATCHTABLE[i].function;
      if (THCharVector_divs_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THCharVector_copy_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THCharVector_copy_DISPATCHPTR =
          THCharVector_copy_DISPATCHTABLE[i].function;
      if (THCharVector_copy_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
}

static void (*THShortVector_fill_DISPATCHPTR)(
    short*, const short, const ptrdiff_t) = &THShortVector_fill_DEFAULT;
static FunctionDescription THShortVector_fill_DISPATCHTABLE[] = {
    {.function = (void*)THShortVector_fill_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THShortVector_fill(short* x, const short c, const ptrdiff_t n) {
  THShortVector_fill_DISPATCHPTR(x, c, n);
}

static void (*THShortVector_cadd_DISPATCHPTR)(
    short*, const short*, const short*, const short,
    const ptrdiff_t) = &THShortVector_cadd_DEFAULT;
static FunctionDescription THShortVector_cadd_DISPATCHTABLE[] = {
    {.function = (void*)THShortVector_cadd_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THShortVector_cadd(short* z, const short* x, const short* y, const short c,
                        const ptrdiff_t n) {
  THShortVector_cadd_DISPATCHPTR(z, x, y, c, n);
}

static void (*THShortVector_adds_DISPATCHPTR)(short*, const short*, const short,
                                              const ptrdiff_t) =
    &THShortVector_adds_DEFAULT;
static FunctionDescription THShortVector_adds_DISPATCHTABLE[] = {
    {.function = (void*)THShortVector_adds_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};

void THShortVector_adds(short* r_, const short* t, const short value,
                        const ptrdiff_t n) {
  THShortVector_adds_DISPATCHPTR(r_, t, value, n);
}

static void (*THShortVector_cmul_DISPATCHPTR)(short*, const short*,
                                              const short*, const ptrdiff_t) =
    &THShortVector_cmul_DEFAULT;
static FunctionDescription THShortVector_cmul_DISPATCHTABLE[] = {
    {.function = (void*)THShortVector_cmul_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THShortVector_cmul(short* z, const short* x, const short* y,
                        const ptrdiff_t n) {
  THShortVector_cmul_DISPATCHPTR(z, x, y, n);
}

static void (*THShortVector_muls_DISPATCHPTR)(short*, const short*, const short,
                                              const ptrdiff_t) =
    &THShortVector_muls_DEFAULT;
static FunctionDescription THShortVector_muls_DISPATCHTABLE[] = {
    {.function = (void*)THShortVector_muls_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THShortVector_muls(short* y, const short* x, const short c,
                        const ptrdiff_t n) {
  THShortVector_muls_DISPATCHPTR(y, x, c, n);
}

static void (*THShortVector_cdiv_DISPATCHPTR)(short*, const short*,
                                              const short*, const ptrdiff_t) =
    &THShortVector_cdiv_DEFAULT;
static FunctionDescription THShortVector_cdiv_DISPATCHTABLE[] = {
    {.function = (void*)THShortVector_cdiv_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THShortVector_cdiv(short* z, const short* x, const short* y,
                        const ptrdiff_t n) {
  THShortVector_cdiv_DISPATCHPTR(z, x, y, n);
}

static void (*THShortVector_divs_DISPATCHPTR)(short*, const short*, const short,
                                              const ptrdiff_t) =
    &THShortVector_divs_DEFAULT;
static FunctionDescription THShortVector_divs_DISPATCHTABLE[] = {
    {.function = (void*)THShortVector_divs_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THShortVector_divs(short* y, const short* x, const short c,
                        const ptrdiff_t n) {
  THShortVector_divs_DISPATCHPTR(y, x, c, n);
}

static void (*THShortVector_copy_DISPATCHPTR)(
    short*, const short*, const ptrdiff_t) = &THShortVector_copy_DEFAULT;
static FunctionDescription THShortVector_copy_DISPATCHTABLE[] = {

    {.function = (void*)THShortVector_copy_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THShortVector_copy(short* y, const short* x, const ptrdiff_t n) {
  THShortVector_copy_DISPATCHPTR(y, x, n);
}
void THShortVector_vectorDispatchInit(void) {
  uint32_t hostSimdExts = detectHostSIMDExtensions();
  do {
    int i;
    for (i = 0; i < sizeof(THShortVector_fill_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THShortVector_fill_DISPATCHPTR =
          THShortVector_fill_DISPATCHTABLE[i].function;
      if (THShortVector_fill_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THShortVector_cadd_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THShortVector_cadd_DISPATCHPTR =
          THShortVector_cadd_DISPATCHTABLE[i].function;
      if (THShortVector_cadd_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THShortVector_adds_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THShortVector_adds_DISPATCHPTR =
          THShortVector_adds_DISPATCHTABLE[i].function;
      if (THShortVector_adds_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THShortVector_cmul_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THShortVector_cmul_DISPATCHPTR =
          THShortVector_cmul_DISPATCHTABLE[i].function;
      if (THShortVector_cmul_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THShortVector_muls_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THShortVector_muls_DISPATCHPTR =
          THShortVector_muls_DISPATCHTABLE[i].function;
      if (THShortVector_muls_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THShortVector_cdiv_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THShortVector_cdiv_DISPATCHPTR =
          THShortVector_cdiv_DISPATCHTABLE[i].function;
      if (THShortVector_cdiv_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THShortVector_divs_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THShortVector_divs_DISPATCHPTR =
          THShortVector_divs_DISPATCHTABLE[i].function;
      if (THShortVector_divs_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THShortVector_copy_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THShortVector_copy_DISPATCHPTR =
          THShortVector_copy_DISPATCHTABLE[i].function;
      if (THShortVector_copy_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
}

static void (*THIntVector_fill_DISPATCHPTR)(int*, const int, const ptrdiff_t) =
    &THIntVector_fill_DEFAULT;
static FunctionDescription THIntVector_fill_DISPATCHTABLE[] = {
    {.function = (void*)THIntVector_fill_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THIntVector_fill(int* x, const int c, const ptrdiff_t n) {
  THIntVector_fill_DISPATCHPTR(x, c, n);
}

static void (*THIntVector_cadd_DISPATCHPTR)(int*, const int*, const int*,
                                            const int, const ptrdiff_t) =
    &THIntVector_cadd_DEFAULT;
static FunctionDescription THIntVector_cadd_DISPATCHTABLE[] = {
    {.function = (void*)THIntVector_cadd_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THIntVector_cadd(int* z, const int* x, const int* y, const int c,
                      const ptrdiff_t n) {
  THIntVector_cadd_DISPATCHPTR(z, x, y, c, n);
}

static void (*THIntVector_adds_DISPATCHPTR)(
    int*, const int*, const int, const ptrdiff_t) = &THIntVector_adds_DEFAULT;
static FunctionDescription THIntVector_adds_DISPATCHTABLE[] = {
    {.function = (void*)THIntVector_adds_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};

void THIntVector_adds(int* r_, const int* t, const int value,
                      const ptrdiff_t n) {
  THIntVector_adds_DISPATCHPTR(r_, t, value, n);
}

static void (*THIntVector_cmul_DISPATCHPTR)(
    int*, const int*, const int*, const ptrdiff_t) = &THIntVector_cmul_DEFAULT;
static FunctionDescription THIntVector_cmul_DISPATCHTABLE[] = {
    {.function = (void*)THIntVector_cmul_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THIntVector_cmul(int* z, const int* x, const int* y, const ptrdiff_t n) {
  THIntVector_cmul_DISPATCHPTR(z, x, y, n);
}

static void (*THIntVector_muls_DISPATCHPTR)(
    int*, const int*, const int, const ptrdiff_t) = &THIntVector_muls_DEFAULT;
static FunctionDescription THIntVector_muls_DISPATCHTABLE[] = {
    {.function = (void*)THIntVector_muls_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THIntVector_muls(int* y, const int* x, const int c, const ptrdiff_t n) {
  THIntVector_muls_DISPATCHPTR(y, x, c, n);
}

static void (*THIntVector_cdiv_DISPATCHPTR)(
    int*, const int*, const int*, const ptrdiff_t) = &THIntVector_cdiv_DEFAULT;
static FunctionDescription THIntVector_cdiv_DISPATCHTABLE[] = {
    {.function = (void*)THIntVector_cdiv_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THIntVector_cdiv(int* z, const int* x, const int* y, const ptrdiff_t n) {
  THIntVector_cdiv_DISPATCHPTR(z, x, y, n);
}

static void (*THIntVector_divs_DISPATCHPTR)(
    int*, const int*, const int, const ptrdiff_t) = &THIntVector_divs_DEFAULT;
static FunctionDescription THIntVector_divs_DISPATCHTABLE[] = {
    {.function = (void*)THIntVector_divs_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THIntVector_divs(int* y, const int* x, const int c, const ptrdiff_t n) {
  THIntVector_divs_DISPATCHPTR(y, x, c, n);
}

static void (*THIntVector_copy_DISPATCHPTR)(int*, const int*, const ptrdiff_t) =
    &THIntVector_copy_DEFAULT;
static FunctionDescription THIntVector_copy_DISPATCHTABLE[] = {

    {.function = (void*)THIntVector_copy_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THIntVector_copy(int* y, const int* x, const ptrdiff_t n) {
  THIntVector_copy_DISPATCHPTR(y, x, n);
}
void THIntVector_vectorDispatchInit(void) {
  uint32_t hostSimdExts = detectHostSIMDExtensions();
  do {
    int i;
    for (i = 0; i < sizeof(THIntVector_fill_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THIntVector_fill_DISPATCHPTR = THIntVector_fill_DISPATCHTABLE[i].function;
      if (THIntVector_fill_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THIntVector_cadd_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THIntVector_cadd_DISPATCHPTR = THIntVector_cadd_DISPATCHTABLE[i].function;
      if (THIntVector_cadd_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THIntVector_adds_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THIntVector_adds_DISPATCHPTR = THIntVector_adds_DISPATCHTABLE[i].function;
      if (THIntVector_adds_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THIntVector_cmul_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THIntVector_cmul_DISPATCHPTR = THIntVector_cmul_DISPATCHTABLE[i].function;
      if (THIntVector_cmul_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THIntVector_muls_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THIntVector_muls_DISPATCHPTR = THIntVector_muls_DISPATCHTABLE[i].function;
      if (THIntVector_muls_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THIntVector_cdiv_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THIntVector_cdiv_DISPATCHPTR = THIntVector_cdiv_DISPATCHTABLE[i].function;
      if (THIntVector_cdiv_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THIntVector_divs_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THIntVector_divs_DISPATCHPTR = THIntVector_divs_DISPATCHTABLE[i].function;
      if (THIntVector_divs_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THIntVector_copy_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THIntVector_copy_DISPATCHPTR = THIntVector_copy_DISPATCHTABLE[i].function;
      if (THIntVector_copy_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
}

static void (*THLongVector_fill_DISPATCHPTR)(
    long*, const long, const ptrdiff_t) = &THLongVector_fill_DEFAULT;
static FunctionDescription THLongVector_fill_DISPATCHTABLE[] = {
    {.function = (void*)THLongVector_fill_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THLongVector_fill(long* x, const long c, const ptrdiff_t n) {
  THLongVector_fill_DISPATCHPTR(x, c, n);
}

static void (*THLongVector_cadd_DISPATCHPTR)(long*, const long*, const long*,
                                             const long, const ptrdiff_t) =
    &THLongVector_cadd_DEFAULT;
static FunctionDescription THLongVector_cadd_DISPATCHTABLE[] = {
    {.function = (void*)THLongVector_cadd_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THLongVector_cadd(long* z, const long* x, const long* y, const long c,
                       const ptrdiff_t n) {
  THLongVector_cadd_DISPATCHPTR(z, x, y, c, n);
}

static void (*THLongVector_adds_DISPATCHPTR)(long*, const long*, const long,
                                             const ptrdiff_t) =
    &THLongVector_adds_DEFAULT;
static FunctionDescription THLongVector_adds_DISPATCHTABLE[] = {
    {.function = (void*)THLongVector_adds_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};

void THLongVector_adds(long* r_, const long* t, const long value,
                       const ptrdiff_t n) {
  THLongVector_adds_DISPATCHPTR(r_, t, value, n);
}

static void (*THLongVector_cmul_DISPATCHPTR)(long*, const long*, const long*,
                                             const ptrdiff_t) =
    &THLongVector_cmul_DEFAULT;
static FunctionDescription THLongVector_cmul_DISPATCHTABLE[] = {
    {.function = (void*)THLongVector_cmul_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THLongVector_cmul(long* z, const long* x, const long* y,
                       const ptrdiff_t n) {
  THLongVector_cmul_DISPATCHPTR(z, x, y, n);
}

static void (*THLongVector_muls_DISPATCHPTR)(long*, const long*, const long,
                                             const ptrdiff_t) =
    &THLongVector_muls_DEFAULT;
static FunctionDescription THLongVector_muls_DISPATCHTABLE[] = {
    {.function = (void*)THLongVector_muls_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THLongVector_muls(long* y, const long* x, const long c,
                       const ptrdiff_t n) {
  THLongVector_muls_DISPATCHPTR(y, x, c, n);
}

static void (*THLongVector_cdiv_DISPATCHPTR)(long*, const long*, const long*,
                                             const ptrdiff_t) =
    &THLongVector_cdiv_DEFAULT;
static FunctionDescription THLongVector_cdiv_DISPATCHTABLE[] = {
    {.function = (void*)THLongVector_cdiv_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THLongVector_cdiv(long* z, const long* x, const long* y,
                       const ptrdiff_t n) {
  THLongVector_cdiv_DISPATCHPTR(z, x, y, n);
}

static void (*THLongVector_divs_DISPATCHPTR)(long*, const long*, const long,
                                             const ptrdiff_t) =
    &THLongVector_divs_DEFAULT;
static FunctionDescription THLongVector_divs_DISPATCHTABLE[] = {
    {.function = (void*)THLongVector_divs_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THLongVector_divs(long* y, const long* x, const long c,
                       const ptrdiff_t n) {
  THLongVector_divs_DISPATCHPTR(y, x, c, n);
}

static void (*THLongVector_copy_DISPATCHPTR)(
    long*, const long*, const ptrdiff_t) = &THLongVector_copy_DEFAULT;
static FunctionDescription THLongVector_copy_DISPATCHTABLE[] = {

    {.function = (void*)THLongVector_copy_DEFAULT,
     .supportedSimdExt = SIMDExtension_DEFAULT}};
void THLongVector_copy(long* y, const long* x, const ptrdiff_t n) {
  THLongVector_copy_DISPATCHPTR(y, x, n);
}
void THLongVector_vectorDispatchInit(void) {
  uint32_t hostSimdExts = detectHostSIMDExtensions();
  do {
    int i;
    for (i = 0; i < sizeof(THLongVector_fill_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THLongVector_fill_DISPATCHPTR =
          THLongVector_fill_DISPATCHTABLE[i].function;
      if (THLongVector_fill_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THLongVector_cadd_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THLongVector_cadd_DISPATCHPTR =
          THLongVector_cadd_DISPATCHTABLE[i].function;
      if (THLongVector_cadd_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THLongVector_adds_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THLongVector_adds_DISPATCHPTR =
          THLongVector_adds_DISPATCHTABLE[i].function;
      if (THLongVector_adds_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THLongVector_cmul_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THLongVector_cmul_DISPATCHPTR =
          THLongVector_cmul_DISPATCHTABLE[i].function;
      if (THLongVector_cmul_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THLongVector_muls_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THLongVector_muls_DISPATCHPTR =
          THLongVector_muls_DISPATCHTABLE[i].function;
      if (THLongVector_muls_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THLongVector_cdiv_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THLongVector_cdiv_DISPATCHPTR =
          THLongVector_cdiv_DISPATCHTABLE[i].function;
      if (THLongVector_cdiv_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THLongVector_divs_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THLongVector_divs_DISPATCHPTR =
          THLongVector_divs_DISPATCHTABLE[i].function;
      if (THLongVector_divs_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
  do {
    int i;
    for (i = 0; i < sizeof(THLongVector_copy_DISPATCHTABLE) /
                        sizeof(FunctionDescription);
         ++i) {
      THLongVector_copy_DISPATCHPTR =
          THLongVector_copy_DISPATCHTABLE[i].function;
      if (THLongVector_copy_DISPATCHTABLE[i].supportedSimdExt & hostSimdExts) {
        break;
      }
    }
  } while (0);
}
