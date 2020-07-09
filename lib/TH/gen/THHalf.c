// THIS FILE WAS AUTOMATICALLY GENERATED @ 2020-07-09
// DO NOT MODIFY
#include "THGeneral.h"


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

THHalf TH_float2half(float f) {
  THHalf h;
  TH_float2halfbits(&f, &h.x);
  return h;
}

float TH_half2float(THHalf h) {
  float f;
  TH_halfbits2float(&h.x, &f);
  return f;
}

void TH_halfbits2float(unsigned short* src, float* res) {
  unsigned h = *src;
  unsigned sign = ((h >> 15) & 1);
  unsigned exponent = ((h >> 10) & 0x1f);
  unsigned mantissa = ((h & 0x3ff) << 13);

  if (exponent == 0x1f) {
    mantissa = (mantissa ? (sign = 0, 0x7fffff) : 0);
    exponent = 0xff;
  } else if (!exponent) {
    if (mantissa) {
      unsigned int msb;
      exponent = 0x71;
      do {
        msb = (mantissa & 0x400000);
        mantissa <<= 1;
        --exponent;
      } while (!msb);
      mantissa &= 0x7fffff;
    }
  } else {
    exponent += 0x70;
  }

  *(unsigned*)res = ((sign << 31) | (exponent << 23) | mantissa);
}

void TH_float2halfbits(float* src, unsigned short* dest) {
  unsigned x = *(unsigned*)src;
  unsigned u = (x & 0x7fffffff), remainder, shift, lsb, lsb_s1, lsb_m1;
  unsigned sign, exponent, mantissa;

  if (u > 0x7f800000) {
    *dest = 0x7fffU;
    return;
  }

  sign = ((x >> 16) & 0x8000);

  if (u > 0x477fefff) {
    *dest = sign | 0x7c00U;
    return;
  }
  if (u < 0x33000001) {
    *dest = (sign | 0x0000);
    return;
  }

  exponent = ((u >> 23) & 0xff);
  mantissa = (u & 0x7fffff);

  if (exponent > 0x70) {
    shift = 13;
    exponent -= 0x70;
  } else {
    shift = 0x7e - exponent;
    exponent = 0;
    mantissa |= 0x800000;
  }
  lsb = (1 << shift);
  lsb_s1 = (lsb >> 1);
  lsb_m1 = (lsb - 1);

  remainder = (mantissa & lsb_m1);
  mantissa >>= shift;
  if (remainder > lsb_s1 || (remainder == lsb_s1 && (mantissa & 0x1))) {
    ++mantissa;
    if (!(mantissa & 0x3ff)) {
      ++exponent;
      mantissa = 0;
    }
  }

  *dest = (sign | (exponent << 10) | mantissa);
}
