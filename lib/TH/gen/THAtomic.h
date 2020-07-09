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
