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
void THAtomicSet(int volatile* a, int newvalue) {
  int oldvalue;
  do {
    oldvalue = *a;
  } while (!THAtomicCompareAndSwap(a, oldvalue, newvalue));
}

int THAtomicGet(int volatile* a) {
  int value;
  do {
    value = *a;
  } while (!THAtomicCompareAndSwap(a, value, value));
  return value;
}

int THAtomicAdd(int volatile* a, int value) {
  int oldvalue;
  do {
    oldvalue = *a;
  } while (!THAtomicCompareAndSwap(a, oldvalue, (oldvalue + value)));
  return oldvalue;
}

void THAtomicIncrementRef(int volatile* a) { THAtomicAdd(a, 1); }

int THAtomicDecrementRef(int volatile* a) { return (THAtomicAdd(a, -1) == 1); }

int THAtomicCompareAndSwap(int volatile* a, int oldvalue, int newvalue) {
  if (*a == oldvalue) {
    *a = newvalue;
    return 1;
  } else
    return 0;
}

void THAtomicSetLong(long volatile* a, long newvalue) {
  long oldvalue;
  do {
    oldvalue = *a;
  } while (!THAtomicCompareAndSwapLong(a, oldvalue, newvalue));
}

long THAtomicGetLong(long volatile* a) {
  long value;
  do {
    value = *a;
  } while (!THAtomicCompareAndSwapLong(a, value, value));
  return value;
}

long THAtomicAddLong(long volatile* a, long value) {
  long oldvalue;
  do {
    oldvalue = *a;
  } while (!THAtomicCompareAndSwapLong(a, oldvalue, (oldvalue + value)));
  return oldvalue;
}

long THAtomicCompareAndSwapLong(long volatile* a, long oldvalue,
                                long newvalue) {
  if (*a == oldvalue) {
    *a = newvalue;
    return 1;
  } else
    return 0;
}

void THAtomicSetPtrdiff(ptrdiff_t volatile* a, ptrdiff_t newvalue) {
  ptrdiff_t oldvalue;
  do {
    oldvalue = *a;
  } while (!THAtomicCompareAndSwapPtrdiff(a, oldvalue, newvalue));
}

ptrdiff_t THAtomicGetPtrdiff(ptrdiff_t volatile* a) {
  ptrdiff_t value;
  do {
    value = *a;
  } while (!THAtomicCompareAndSwapPtrdiff(a, value, value));
  return value;
}

ptrdiff_t THAtomicAddPtrdiff(ptrdiff_t volatile* a, ptrdiff_t value) {
  ptrdiff_t oldvalue;
  do {
    oldvalue = *a;
  } while (!THAtomicCompareAndSwapPtrdiff(a, oldvalue, (oldvalue + value)));
  return oldvalue;
}

ptrdiff_t THAtomicCompareAndSwapPtrdiff(ptrdiff_t volatile* a,
                                        ptrdiff_t oldvalue,
                                        ptrdiff_t newvalue) {
  if (*a == oldvalue) {
    *a = newvalue;
    return 1;
  } else
    return 0;
}
