// THIS FILE WAS AUTOMATICALLY GENERATED @ 2020-07-08
// DO NOT MODIFY


typedef long int ptrdiff_t;
typedef long unsigned int size_t;
typedef int wchar_t;
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld
      __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;

int THSize_isSameSizeAs(const long* sizeA, long dimsA, const long* sizeB,
                        long dimsB);
ptrdiff_t THSize_nElement(long dims, long* size);
