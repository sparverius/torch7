// THIS FILE WAS AUTOMATICALLY GENERATED @ 2020-07-09
// DO NOT MODIFY
#include "THGeneral.h"


void THFloatBlas_swap(long n, float* x, long incx, float* y, long incy);
void THFloatBlas_scal(long n, float a, float* x, long incx);
void THFloatBlas_copy(long n, float* x, long incx, float* y, long incy);
void THFloatBlas_axpy(long n, float a, float* x, long incx, float* y,
                      long incy);
float THFloatBlas_dot(long n, float* x, long incx, float* y, long incy);

void THFloatBlas_gemv(char trans, long m, long n, float alpha, float* a,
                      long lda, float* x, long incx, float beta, float* y,
                      long incy);
void THFloatBlas_ger(long m, long n, float alpha, float* x, long incx, float* y,
                     long incy, float* a, long lda);

void THFloatBlas_gemm(char transa, char transb, long m, long n, long k,
                      float alpha, float* a, long lda, float* b, long ldb,
                      float beta, float* c, long ldc);

void THDoubleBlas_swap(long n, double* x, long incx, double* y, long incy);
void THDoubleBlas_scal(long n, double a, double* x, long incx);
void THDoubleBlas_copy(long n, double* x, long incx, double* y, long incy);
void THDoubleBlas_axpy(long n, double a, double* x, long incx, double* y,
                       long incy);
double THDoubleBlas_dot(long n, double* x, long incx, double* y, long incy);

void THDoubleBlas_gemv(char trans, long m, long n, double alpha, double* a,
                       long lda, double* x, long incx, double beta, double* y,
                       long incy);
void THDoubleBlas_ger(long m, long n, double alpha, double* x, long incx,
                      double* y, long incy, double* a, long lda);

void THDoubleBlas_gemm(char transa, char transb, long m, long n, long k,
                       double alpha, double* a, long lda, double* b, long ldb,
                       double beta, double* c, long ldc);

void THByteBlas_swap(long n, unsigned char* x, long incx, unsigned char* y,
                     long incy);
void THByteBlas_scal(long n, unsigned char a, unsigned char* x, long incx);
void THByteBlas_copy(long n, unsigned char* x, long incx, unsigned char* y,
                     long incy);
void THByteBlas_axpy(long n, unsigned char a, unsigned char* x, long incx,
                     unsigned char* y, long incy);
unsigned char THByteBlas_dot(long n, unsigned char* x, long incx,
                             unsigned char* y, long incy);

void THByteBlas_gemv(char trans, long m, long n, unsigned char alpha,
                     unsigned char* a, long lda, unsigned char* x, long incx,
                     unsigned char beta, unsigned char* y, long incy);
void THByteBlas_ger(long m, long n, unsigned char alpha, unsigned char* x,
                    long incx, unsigned char* y, long incy, unsigned char* a,
                    long lda);

void THByteBlas_gemm(char transa, char transb, long m, long n, long k,
                     unsigned char alpha, unsigned char* a, long lda,
                     unsigned char* b, long ldb, unsigned char beta,
                     unsigned char* c, long ldc);

void THCharBlas_swap(long n, char* x, long incx, char* y, long incy);
void THCharBlas_scal(long n, char a, char* x, long incx);
void THCharBlas_copy(long n, char* x, long incx, char* y, long incy);
void THCharBlas_axpy(long n, char a, char* x, long incx, char* y, long incy);
char THCharBlas_dot(long n, char* x, long incx, char* y, long incy);

void THCharBlas_gemv(char trans, long m, long n, char alpha, char* a, long lda,
                     char* x, long incx, char beta, char* y, long incy);
void THCharBlas_ger(long m, long n, char alpha, char* x, long incx, char* y,
                    long incy, char* a, long lda);

void THCharBlas_gemm(char transa, char transb, long m, long n, long k,
                     char alpha, char* a, long lda, char* b, long ldb,
                     char beta, char* c, long ldc);

void THShortBlas_swap(long n, short* x, long incx, short* y, long incy);
void THShortBlas_scal(long n, short a, short* x, long incx);
void THShortBlas_copy(long n, short* x, long incx, short* y, long incy);
void THShortBlas_axpy(long n, short a, short* x, long incx, short* y,
                      long incy);
short THShortBlas_dot(long n, short* x, long incx, short* y, long incy);

void THShortBlas_gemv(char trans, long m, long n, short alpha, short* a,
                      long lda, short* x, long incx, short beta, short* y,
                      long incy);
void THShortBlas_ger(long m, long n, short alpha, short* x, long incx, short* y,
                     long incy, short* a, long lda);

void THShortBlas_gemm(char transa, char transb, long m, long n, long k,
                      short alpha, short* a, long lda, short* b, long ldb,
                      short beta, short* c, long ldc);

void THIntBlas_swap(long n, int* x, long incx, int* y, long incy);
void THIntBlas_scal(long n, int a, int* x, long incx);
void THIntBlas_copy(long n, int* x, long incx, int* y, long incy);
void THIntBlas_axpy(long n, int a, int* x, long incx, int* y, long incy);
int THIntBlas_dot(long n, int* x, long incx, int* y, long incy);

void THIntBlas_gemv(char trans, long m, long n, int alpha, int* a, long lda,
                    int* x, long incx, int beta, int* y, long incy);
void THIntBlas_ger(long m, long n, int alpha, int* x, long incx, int* y,
                   long incy, int* a, long lda);

void THIntBlas_gemm(char transa, char transb, long m, long n, long k, int alpha,
                    int* a, long lda, int* b, long ldb, int beta, int* c,
                    long ldc);

void THLongBlas_swap(long n, long* x, long incx, long* y, long incy);
void THLongBlas_scal(long n, long a, long* x, long incx);
void THLongBlas_copy(long n, long* x, long incx, long* y, long incy);
void THLongBlas_axpy(long n, long a, long* x, long incx, long* y, long incy);
long THLongBlas_dot(long n, long* x, long incx, long* y, long incy);

void THLongBlas_gemv(char trans, long m, long n, long alpha, long* a, long lda,
                     long* x, long incx, long beta, long* y, long incy);
void THLongBlas_ger(long m, long n, long alpha, long* x, long incx, long* y,
                    long incy, long* a, long lda);

void THLongBlas_gemm(char transa, char transb, long m, long n, long k,
                     long alpha, long* a, long lda, long* b, long ldb,
                     long beta, long* c, long ldc);

extern void dswap_(int* n, double* x, int* incx, double* y, int* incy);
extern void sswap_(int* n, float* x, int* incx, float* y, int* incy);
extern void dscal_(int* n, double* a, double* x, int* incx);
extern void sscal_(int* n, float* a, float* x, int* incx);
extern void dcopy_(int* n, double* x, int* incx, double* y, int* incy);
extern void scopy_(int* n, float* x, int* incx, float* y, int* incy);
extern void daxpy_(int* n, double* a, double* x, int* incx, double* y,
                   int* incy);
extern void saxpy_(int* n, float* a, float* x, int* incx, float* y, int* incy);
extern double ddot_(int* n, double* x, int* incx, double* y, int* incy);
extern float sdot_(int* n, float* x, int* incx, float* y, int* incy);

extern void dgemv_(char* trans, int* m, int* n, double* alpha, double* a,
                   int* lda, double* x, int* incx, double* beta, double* y,
                   int* incy);
extern void sgemv_(char* trans, int* m, int* n, float* alpha, float* a,
                   int* lda, float* x, int* incx, float* beta, float* y,
                   int* incy);
extern void dger_(int* m, int* n, double* alpha, double* x, int* incx,
                  double* y, int* incy, double* a, int* lda);
extern void sger_(int* m, int* n, float* alpha, float* x, int* incx, float* y,
                  int* incy, float* a, int* lda);
extern void dgemm_(char* transa, char* transb, int* m, int* n, int* k,
                   double* alpha, double* a, int* lda, double* b, int* ldb,
                   double* beta, double* c, int* ldc);
extern void sgemm_(char* transa, char* transb, int* m, int* n, int* k,
                   float* alpha, float* a, int* lda, float* b, int* ldb,
                   float* beta, float* c, int* ldc);

void THFloatBlas_swap(long n, float* x, long incx, float* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    for (i = 0; i < n; i++) {
      float z = x[i * incx];
      x[i * incx] = y[i * incy];
      y[i * incy] = z;
    }
  }
}

void THFloatBlas_scal(long n, float a, float* x, long incx) {
  if (n == 1) incx = 1;
  {
    long i;
    for (i = 0; i < n; i++) {
      if (a == 0) {
        x[i * incx] = 0;
      } else {
        x[i * incx] *= a;
      }
    }
  }
}

void THFloatBlas_copy(long n, float* x, long incx, float* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    for (i = 0; i < n; i++) y[i * incy] = x[i * incx];
  }
}

void THFloatBlas_axpy(long n, float a, float* x, long incx, float* y,
                      long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    for (i = 0; i < n; i++) y[i * incy] += a * x[i * incx];
  }
}

float THFloatBlas_dot(long n, float* x, long incx, float* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    float sum = 0;
    for (i = 0; i < n; i++) sum += x[i * incx] * y[i * incy];
    return sum;
  }
}

void THFloatBlas_gemv(char trans, long m, long n, float alpha, float* a,
                      long lda, float* x, long incx, float beta, float* y,
                      long incy) {
  if (n == 1) lda = m;
  {
    long i, j;

    if ((trans == 'T') || (trans == 't')) {
      for (i = 0; i < n; i++) {
        float sum = 0;
        float* row_ = a + lda * i;
        for (j = 0; j < m; j++) sum += x[j * incx] * row_[j];
        if (beta == 0)
          y[i * incy] = alpha * sum;
        else
          y[i * incy] = beta * y[i * incy] + alpha * sum;
      }
    } else {
      if (beta != 1) THFloatBlas_scal(m, beta, y, incy);

      for (j = 0; j < n; j++) {
        float* column_ = a + lda * j;
        float z = alpha * x[j * incx];
        for (i = 0; i < m; i++) y[i * incy] += z * column_[i];
      }
    }
  }
}

void THFloatBlas_ger(long m, long n, float alpha, float* x, long incx, float* y,
                     long incy, float* a, long lda) {
  if (n == 1) lda = m;
  {
    long i, j;
    for (j = 0; j < n; j++) {
      float* column_ = a + j * lda;
      float z = alpha * y[j * incy];
      for (i = 0; i < m; i++) column_[i] += z * x[i * incx];
    }
  }
}

void THFloatBlas_gemm(char transa, char transb, long m, long n, long k,
                      float alpha, float* a, long lda, float* b, long ldb,
                      float beta, float* c, long ldc) {
  int transa_ = ((transa == 't') || (transa == 'T'));
  int transb_ = ((transb == 't') || (transb == 'T'));

  if (n == 1) ldc = m;

  if (transa_) {
    if (m == 1) lda = k;
  } else {
    if (k == 1) lda = m;
  }

  if (transb_) {
    if (k == 1) ldb = n;
  } else {
    if (n == 1) ldb = k;
  }
  {
    long i, j, l;
    if (!transa_ && !transb_) {
      float* a_ = a;
      for (i = 0; i < m; i++) {
        float* b_ = b;
        for (j = 0; j < n; j++) {
          float sum = 0;
          for (l = 0; l < k; l++) sum += a_[l * lda] * b_[l];
          b_ += ldb;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_++;
      }
    } else if (transa_ && !transb_) {
      float* a_ = a;
      for (i = 0; i < m; i++) {
        float* b_ = b;
        for (j = 0; j < n; j++) {
          float sum = 0;
          for (l = 0; l < k; l++) sum += a_[l] * b_[l];
          b_ += ldb;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_ += lda;
      }
    } else if (!transa_ && transb_) {
      float* a_ = a;
      for (i = 0; i < m; i++) {
        float* b_ = b;
        for (j = 0; j < n; j++) {
          float sum = 0;
          for (l = 0; l < k; l++) sum += a_[l * lda] * b_[l * ldb];
          b_++;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_++;
      }
    } else {
      float* a_ = a;
      for (i = 0; i < m; i++) {
        float* b_ = b;
        for (j = 0; j < n; j++) {
          float sum = 0;
          for (l = 0; l < k; l++) sum += a_[l] * b_[l * ldb];
          b_++;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_ += lda;
      }
    }
  }
}

extern void dswap_(int* n, double* x, int* incx, double* y, int* incy);
extern void sswap_(int* n, float* x, int* incx, float* y, int* incy);
extern void dscal_(int* n, double* a, double* x, int* incx);
extern void sscal_(int* n, float* a, float* x, int* incx);
extern void dcopy_(int* n, double* x, int* incx, double* y, int* incy);
extern void scopy_(int* n, float* x, int* incx, float* y, int* incy);
extern void daxpy_(int* n, double* a, double* x, int* incx, double* y,
                   int* incy);
extern void saxpy_(int* n, float* a, float* x, int* incx, float* y, int* incy);
extern double ddot_(int* n, double* x, int* incx, double* y, int* incy);
extern float sdot_(int* n, float* x, int* incx, float* y, int* incy);

extern void dgemv_(char* trans, int* m, int* n, double* alpha, double* a,
                   int* lda, double* x, int* incx, double* beta, double* y,
                   int* incy);
extern void sgemv_(char* trans, int* m, int* n, float* alpha, float* a,
                   int* lda, float* x, int* incx, float* beta, float* y,
                   int* incy);
extern void dger_(int* m, int* n, double* alpha, double* x, int* incx,
                  double* y, int* incy, double* a, int* lda);
extern void sger_(int* m, int* n, float* alpha, float* x, int* incx, float* y,
                  int* incy, float* a, int* lda);
extern void dgemm_(char* transa, char* transb, int* m, int* n, int* k,
                   double* alpha, double* a, int* lda, double* b, int* ldb,
                   double* beta, double* c, int* ldc);
extern void sgemm_(char* transa, char* transb, int* m, int* n, int* k,
                   float* alpha, float* a, int* lda, float* b, int* ldb,
                   float* beta, float* c, int* ldc);

void THDoubleBlas_swap(long n, double* x, long incx, double* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    for (i = 0; i < n; i++) {
      double z = x[i * incx];
      x[i * incx] = y[i * incy];
      y[i * incy] = z;
    }
  }
}

void THDoubleBlas_scal(long n, double a, double* x, long incx) {
  if (n == 1) incx = 1;
  {
    long i;
    for (i = 0; i < n; i++) {
      if (a == 0) {
        x[i * incx] = 0;
      } else {
        x[i * incx] *= a;
      }
    }
  }
}

void THDoubleBlas_copy(long n, double* x, long incx, double* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    for (i = 0; i < n; i++) y[i * incy] = x[i * incx];
  }
}

void THDoubleBlas_axpy(long n, double a, double* x, long incx, double* y,
                       long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    for (i = 0; i < n; i++) y[i * incy] += a * x[i * incx];
  }
}

double THDoubleBlas_dot(long n, double* x, long incx, double* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    double sum = 0;
    for (i = 0; i < n; i++) sum += x[i * incx] * y[i * incy];
    return sum;
  }
}

void THDoubleBlas_gemv(char trans, long m, long n, double alpha, double* a,
                       long lda, double* x, long incx, double beta, double* y,
                       long incy) {
  if (n == 1) lda = m;
  {
    long i, j;

    if ((trans == 'T') || (trans == 't')) {
      for (i = 0; i < n; i++) {
        double sum = 0;
        double* row_ = a + lda * i;
        for (j = 0; j < m; j++) sum += x[j * incx] * row_[j];
        if (beta == 0)
          y[i * incy] = alpha * sum;
        else
          y[i * incy] = beta * y[i * incy] + alpha * sum;
      }
    } else {
      if (beta != 1) THDoubleBlas_scal(m, beta, y, incy);

      for (j = 0; j < n; j++) {
        double* column_ = a + lda * j;
        double z = alpha * x[j * incx];
        for (i = 0; i < m; i++) y[i * incy] += z * column_[i];
      }
    }
  }
}

void THDoubleBlas_ger(long m, long n, double alpha, double* x, long incx,
                      double* y, long incy, double* a, long lda) {
  if (n == 1) lda = m;
  {
    long i, j;
    for (j = 0; j < n; j++) {
      double* column_ = a + j * lda;
      double z = alpha * y[j * incy];
      for (i = 0; i < m; i++) column_[i] += z * x[i * incx];
    }
  }
}

void THDoubleBlas_gemm(char transa, char transb, long m, long n, long k,
                       double alpha, double* a, long lda, double* b, long ldb,
                       double beta, double* c, long ldc) {
  int transa_ = ((transa == 't') || (transa == 'T'));
  int transb_ = ((transb == 't') || (transb == 'T'));

  if (n == 1) ldc = m;

  if (transa_) {
    if (m == 1) lda = k;
  } else {
    if (k == 1) lda = m;
  }

  if (transb_) {
    if (k == 1) ldb = n;
  } else {
    if (n == 1) ldb = k;
  }
  {
    long i, j, l;
    if (!transa_ && !transb_) {
      double* a_ = a;
      for (i = 0; i < m; i++) {
        double* b_ = b;
        for (j = 0; j < n; j++) {
          double sum = 0;
          for (l = 0; l < k; l++) sum += a_[l * lda] * b_[l];
          b_ += ldb;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_++;
      }
    } else if (transa_ && !transb_) {
      double* a_ = a;
      for (i = 0; i < m; i++) {
        double* b_ = b;
        for (j = 0; j < n; j++) {
          double sum = 0;
          for (l = 0; l < k; l++) sum += a_[l] * b_[l];
          b_ += ldb;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_ += lda;
      }
    } else if (!transa_ && transb_) {
      double* a_ = a;
      for (i = 0; i < m; i++) {
        double* b_ = b;
        for (j = 0; j < n; j++) {
          double sum = 0;
          for (l = 0; l < k; l++) sum += a_[l * lda] * b_[l * ldb];
          b_++;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_++;
      }
    } else {
      double* a_ = a;
      for (i = 0; i < m; i++) {
        double* b_ = b;
        for (j = 0; j < n; j++) {
          double sum = 0;
          for (l = 0; l < k; l++) sum += a_[l] * b_[l * ldb];
          b_++;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_ += lda;
      }
    }
  }
}

extern void dswap_(int* n, double* x, int* incx, double* y, int* incy);
extern void sswap_(int* n, float* x, int* incx, float* y, int* incy);
extern void dscal_(int* n, double* a, double* x, int* incx);
extern void sscal_(int* n, float* a, float* x, int* incx);
extern void dcopy_(int* n, double* x, int* incx, double* y, int* incy);
extern void scopy_(int* n, float* x, int* incx, float* y, int* incy);
extern void daxpy_(int* n, double* a, double* x, int* incx, double* y,
                   int* incy);
extern void saxpy_(int* n, float* a, float* x, int* incx, float* y, int* incy);
extern double ddot_(int* n, double* x, int* incx, double* y, int* incy);
extern float sdot_(int* n, float* x, int* incx, float* y, int* incy);

extern void dgemv_(char* trans, int* m, int* n, double* alpha, double* a,
                   int* lda, double* x, int* incx, double* beta, double* y,
                   int* incy);
extern void sgemv_(char* trans, int* m, int* n, float* alpha, float* a,
                   int* lda, float* x, int* incx, float* beta, float* y,
                   int* incy);
extern void dger_(int* m, int* n, double* alpha, double* x, int* incx,
                  double* y, int* incy, double* a, int* lda);
extern void sger_(int* m, int* n, float* alpha, float* x, int* incx, float* y,
                  int* incy, float* a, int* lda);
extern void dgemm_(char* transa, char* transb, int* m, int* n, int* k,
                   double* alpha, double* a, int* lda, double* b, int* ldb,
                   double* beta, double* c, int* ldc);
extern void sgemm_(char* transa, char* transb, int* m, int* n, int* k,
                   float* alpha, float* a, int* lda, float* b, int* ldb,
                   float* beta, float* c, int* ldc);

void THByteBlas_swap(long n, unsigned char* x, long incx, unsigned char* y,
                     long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    for (i = 0; i < n; i++) {
      unsigned char z = x[i * incx];
      x[i * incx] = y[i * incy];
      y[i * incy] = z;
    }
  }
}

void THByteBlas_scal(long n, unsigned char a, unsigned char* x, long incx) {
  if (n == 1) incx = 1;
  {
    long i;
    for (i = 0; i < n; i++) {
      if (a == 0) {
        x[i * incx] = 0;
      } else {
        x[i * incx] *= a;
      }
    }
  }
}

void THByteBlas_copy(long n, unsigned char* x, long incx, unsigned char* y,
                     long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    for (i = 0; i < n; i++) y[i * incy] = x[i * incx];
  }
}

void THByteBlas_axpy(long n, unsigned char a, unsigned char* x, long incx,
                     unsigned char* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    for (i = 0; i < n; i++) y[i * incy] += a * x[i * incx];
  }
}

unsigned char THByteBlas_dot(long n, unsigned char* x, long incx,
                             unsigned char* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    unsigned char sum = 0;
    for (i = 0; i < n; i++) sum += x[i * incx] * y[i * incy];
    return sum;
  }
}

void THByteBlas_gemv(char trans, long m, long n, unsigned char alpha,
                     unsigned char* a, long lda, unsigned char* x, long incx,
                     unsigned char beta, unsigned char* y, long incy) {
  if (n == 1) lda = m;
  {
    long i, j;

    if ((trans == 'T') || (trans == 't')) {
      for (i = 0; i < n; i++) {
        unsigned char sum = 0;
        unsigned char* row_ = a + lda * i;
        for (j = 0; j < m; j++) sum += x[j * incx] * row_[j];
        if (beta == 0)
          y[i * incy] = alpha * sum;
        else
          y[i * incy] = beta * y[i * incy] + alpha * sum;
      }
    } else {
      if (beta != 1) THByteBlas_scal(m, beta, y, incy);

      for (j = 0; j < n; j++) {
        unsigned char* column_ = a + lda * j;
        unsigned char z = alpha * x[j * incx];
        for (i = 0; i < m; i++) y[i * incy] += z * column_[i];
      }
    }
  }
}

void THByteBlas_ger(long m, long n, unsigned char alpha, unsigned char* x,
                    long incx, unsigned char* y, long incy, unsigned char* a,
                    long lda) {
  if (n == 1) lda = m;
  {
    long i, j;
    for (j = 0; j < n; j++) {
      unsigned char* column_ = a + j * lda;
      unsigned char z = alpha * y[j * incy];
      for (i = 0; i < m; i++) column_[i] += z * x[i * incx];
    }
  }
}

void THByteBlas_gemm(char transa, char transb, long m, long n, long k,
                     unsigned char alpha, unsigned char* a, long lda,
                     unsigned char* b, long ldb, unsigned char beta,
                     unsigned char* c, long ldc) {
  int transa_ = ((transa == 't') || (transa == 'T'));
  int transb_ = ((transb == 't') || (transb == 'T'));

  if (n == 1) ldc = m;

  if (transa_) {
    if (m == 1) lda = k;
  } else {
    if (k == 1) lda = m;
  }

  if (transb_) {
    if (k == 1) ldb = n;
  } else {
    if (n == 1) ldb = k;
  }
  {
    long i, j, l;
    if (!transa_ && !transb_) {
      unsigned char* a_ = a;
      for (i = 0; i < m; i++) {
        unsigned char* b_ = b;
        for (j = 0; j < n; j++) {
          unsigned char sum = 0;
          for (l = 0; l < k; l++) sum += a_[l * lda] * b_[l];
          b_ += ldb;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_++;
      }
    } else if (transa_ && !transb_) {
      unsigned char* a_ = a;
      for (i = 0; i < m; i++) {
        unsigned char* b_ = b;
        for (j = 0; j < n; j++) {
          unsigned char sum = 0;
          for (l = 0; l < k; l++) sum += a_[l] * b_[l];
          b_ += ldb;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_ += lda;
      }
    } else if (!transa_ && transb_) {
      unsigned char* a_ = a;
      for (i = 0; i < m; i++) {
        unsigned char* b_ = b;
        for (j = 0; j < n; j++) {
          unsigned char sum = 0;
          for (l = 0; l < k; l++) sum += a_[l * lda] * b_[l * ldb];
          b_++;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_++;
      }
    } else {
      unsigned char* a_ = a;
      for (i = 0; i < m; i++) {
        unsigned char* b_ = b;
        for (j = 0; j < n; j++) {
          unsigned char sum = 0;
          for (l = 0; l < k; l++) sum += a_[l] * b_[l * ldb];
          b_++;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_ += lda;
      }
    }
  }
}

extern void dswap_(int* n, double* x, int* incx, double* y, int* incy);
extern void sswap_(int* n, float* x, int* incx, float* y, int* incy);
extern void dscal_(int* n, double* a, double* x, int* incx);
extern void sscal_(int* n, float* a, float* x, int* incx);
extern void dcopy_(int* n, double* x, int* incx, double* y, int* incy);
extern void scopy_(int* n, float* x, int* incx, float* y, int* incy);
extern void daxpy_(int* n, double* a, double* x, int* incx, double* y,
                   int* incy);
extern void saxpy_(int* n, float* a, float* x, int* incx, float* y, int* incy);
extern double ddot_(int* n, double* x, int* incx, double* y, int* incy);
extern float sdot_(int* n, float* x, int* incx, float* y, int* incy);

extern void dgemv_(char* trans, int* m, int* n, double* alpha, double* a,
                   int* lda, double* x, int* incx, double* beta, double* y,
                   int* incy);
extern void sgemv_(char* trans, int* m, int* n, float* alpha, float* a,
                   int* lda, float* x, int* incx, float* beta, float* y,
                   int* incy);
extern void dger_(int* m, int* n, double* alpha, double* x, int* incx,
                  double* y, int* incy, double* a, int* lda);
extern void sger_(int* m, int* n, float* alpha, float* x, int* incx, float* y,
                  int* incy, float* a, int* lda);
extern void dgemm_(char* transa, char* transb, int* m, int* n, int* k,
                   double* alpha, double* a, int* lda, double* b, int* ldb,
                   double* beta, double* c, int* ldc);
extern void sgemm_(char* transa, char* transb, int* m, int* n, int* k,
                   float* alpha, float* a, int* lda, float* b, int* ldb,
                   float* beta, float* c, int* ldc);

void THCharBlas_swap(long n, char* x, long incx, char* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    for (i = 0; i < n; i++) {
      char z = x[i * incx];
      x[i * incx] = y[i * incy];
      y[i * incy] = z;
    }
  }
}

void THCharBlas_scal(long n, char a, char* x, long incx) {
  if (n == 1) incx = 1;
  {
    long i;
    for (i = 0; i < n; i++) {
      if (a == 0) {
        x[i * incx] = 0;
      } else {
        x[i * incx] *= a;
      }
    }
  }
}

void THCharBlas_copy(long n, char* x, long incx, char* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    for (i = 0; i < n; i++) y[i * incy] = x[i * incx];
  }
}

void THCharBlas_axpy(long n, char a, char* x, long incx, char* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    for (i = 0; i < n; i++) y[i * incy] += a * x[i * incx];
  }
}

char THCharBlas_dot(long n, char* x, long incx, char* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    char sum = 0;
    for (i = 0; i < n; i++) sum += x[i * incx] * y[i * incy];
    return sum;
  }
}

void THCharBlas_gemv(char trans, long m, long n, char alpha, char* a, long lda,
                     char* x, long incx, char beta, char* y, long incy) {
  if (n == 1) lda = m;
  {
    long i, j;

    if ((trans == 'T') || (trans == 't')) {
      for (i = 0; i < n; i++) {
        char sum = 0;
        char* row_ = a + lda * i;
        for (j = 0; j < m; j++) sum += x[j * incx] * row_[j];
        if (beta == 0)
          y[i * incy] = alpha * sum;
        else
          y[i * incy] = beta * y[i * incy] + alpha * sum;
      }
    } else {
      if (beta != 1) THCharBlas_scal(m, beta, y, incy);

      for (j = 0; j < n; j++) {
        char* column_ = a + lda * j;
        char z = alpha * x[j * incx];
        for (i = 0; i < m; i++) y[i * incy] += z * column_[i];
      }
    }
  }
}

void THCharBlas_ger(long m, long n, char alpha, char* x, long incx, char* y,
                    long incy, char* a, long lda) {
  if (n == 1) lda = m;
  {
    long i, j;
    for (j = 0; j < n; j++) {
      char* column_ = a + j * lda;
      char z = alpha * y[j * incy];
      for (i = 0; i < m; i++) column_[i] += z * x[i * incx];
    }
  }
}

void THCharBlas_gemm(char transa, char transb, long m, long n, long k,
                     char alpha, char* a, long lda, char* b, long ldb,
                     char beta, char* c, long ldc) {
  int transa_ = ((transa == 't') || (transa == 'T'));
  int transb_ = ((transb == 't') || (transb == 'T'));

  if (n == 1) ldc = m;

  if (transa_) {
    if (m == 1) lda = k;
  } else {
    if (k == 1) lda = m;
  }

  if (transb_) {
    if (k == 1) ldb = n;
  } else {
    if (n == 1) ldb = k;
  }
  {
    long i, j, l;
    if (!transa_ && !transb_) {
      char* a_ = a;
      for (i = 0; i < m; i++) {
        char* b_ = b;
        for (j = 0; j < n; j++) {
          char sum = 0;
          for (l = 0; l < k; l++) sum += a_[l * lda] * b_[l];
          b_ += ldb;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_++;
      }
    } else if (transa_ && !transb_) {
      char* a_ = a;
      for (i = 0; i < m; i++) {
        char* b_ = b;
        for (j = 0; j < n; j++) {
          char sum = 0;
          for (l = 0; l < k; l++) sum += a_[l] * b_[l];
          b_ += ldb;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_ += lda;
      }
    } else if (!transa_ && transb_) {
      char* a_ = a;
      for (i = 0; i < m; i++) {
        char* b_ = b;
        for (j = 0; j < n; j++) {
          char sum = 0;
          for (l = 0; l < k; l++) sum += a_[l * lda] * b_[l * ldb];
          b_++;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_++;
      }
    } else {
      char* a_ = a;
      for (i = 0; i < m; i++) {
        char* b_ = b;
        for (j = 0; j < n; j++) {
          char sum = 0;
          for (l = 0; l < k; l++) sum += a_[l] * b_[l * ldb];
          b_++;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_ += lda;
      }
    }
  }
}

extern void dswap_(int* n, double* x, int* incx, double* y, int* incy);
extern void sswap_(int* n, float* x, int* incx, float* y, int* incy);
extern void dscal_(int* n, double* a, double* x, int* incx);
extern void sscal_(int* n, float* a, float* x, int* incx);
extern void dcopy_(int* n, double* x, int* incx, double* y, int* incy);
extern void scopy_(int* n, float* x, int* incx, float* y, int* incy);
extern void daxpy_(int* n, double* a, double* x, int* incx, double* y,
                   int* incy);
extern void saxpy_(int* n, float* a, float* x, int* incx, float* y, int* incy);
extern double ddot_(int* n, double* x, int* incx, double* y, int* incy);
extern float sdot_(int* n, float* x, int* incx, float* y, int* incy);

extern void dgemv_(char* trans, int* m, int* n, double* alpha, double* a,
                   int* lda, double* x, int* incx, double* beta, double* y,
                   int* incy);
extern void sgemv_(char* trans, int* m, int* n, float* alpha, float* a,
                   int* lda, float* x, int* incx, float* beta, float* y,
                   int* incy);
extern void dger_(int* m, int* n, double* alpha, double* x, int* incx,
                  double* y, int* incy, double* a, int* lda);
extern void sger_(int* m, int* n, float* alpha, float* x, int* incx, float* y,
                  int* incy, float* a, int* lda);
extern void dgemm_(char* transa, char* transb, int* m, int* n, int* k,
                   double* alpha, double* a, int* lda, double* b, int* ldb,
                   double* beta, double* c, int* ldc);
extern void sgemm_(char* transa, char* transb, int* m, int* n, int* k,
                   float* alpha, float* a, int* lda, float* b, int* ldb,
                   float* beta, float* c, int* ldc);

void THShortBlas_swap(long n, short* x, long incx, short* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    for (i = 0; i < n; i++) {
      short z = x[i * incx];
      x[i * incx] = y[i * incy];
      y[i * incy] = z;
    }
  }
}

void THShortBlas_scal(long n, short a, short* x, long incx) {
  if (n == 1) incx = 1;
  {
    long i;
    for (i = 0; i < n; i++) {
      if (a == 0) {
        x[i * incx] = 0;
      } else {
        x[i * incx] *= a;
      }
    }
  }
}

void THShortBlas_copy(long n, short* x, long incx, short* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    for (i = 0; i < n; i++) y[i * incy] = x[i * incx];
  }
}

void THShortBlas_axpy(long n, short a, short* x, long incx, short* y,
                      long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    for (i = 0; i < n; i++) y[i * incy] += a * x[i * incx];
  }
}

short THShortBlas_dot(long n, short* x, long incx, short* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    short sum = 0;
    for (i = 0; i < n; i++) sum += x[i * incx] * y[i * incy];
    return sum;
  }
}

void THShortBlas_gemv(char trans, long m, long n, short alpha, short* a,
                      long lda, short* x, long incx, short beta, short* y,
                      long incy) {
  if (n == 1) lda = m;
  {
    long i, j;

    if ((trans == 'T') || (trans == 't')) {
      for (i = 0; i < n; i++) {
        short sum = 0;
        short* row_ = a + lda * i;
        for (j = 0; j < m; j++) sum += x[j * incx] * row_[j];
        if (beta == 0)
          y[i * incy] = alpha * sum;
        else
          y[i * incy] = beta * y[i * incy] + alpha * sum;
      }
    } else {
      if (beta != 1) THShortBlas_scal(m, beta, y, incy);

      for (j = 0; j < n; j++) {
        short* column_ = a + lda * j;
        short z = alpha * x[j * incx];
        for (i = 0; i < m; i++) y[i * incy] += z * column_[i];
      }
    }
  }
}

void THShortBlas_ger(long m, long n, short alpha, short* x, long incx, short* y,
                     long incy, short* a, long lda) {
  if (n == 1) lda = m;
  {
    long i, j;
    for (j = 0; j < n; j++) {
      short* column_ = a + j * lda;
      short z = alpha * y[j * incy];
      for (i = 0; i < m; i++) column_[i] += z * x[i * incx];
    }
  }
}

void THShortBlas_gemm(char transa, char transb, long m, long n, long k,
                      short alpha, short* a, long lda, short* b, long ldb,
                      short beta, short* c, long ldc) {
  int transa_ = ((transa == 't') || (transa == 'T'));
  int transb_ = ((transb == 't') || (transb == 'T'));

  if (n == 1) ldc = m;

  if (transa_) {
    if (m == 1) lda = k;
  } else {
    if (k == 1) lda = m;
  }

  if (transb_) {
    if (k == 1) ldb = n;
  } else {
    if (n == 1) ldb = k;
  }
  {
    long i, j, l;
    if (!transa_ && !transb_) {
      short* a_ = a;
      for (i = 0; i < m; i++) {
        short* b_ = b;
        for (j = 0; j < n; j++) {
          short sum = 0;
          for (l = 0; l < k; l++) sum += a_[l * lda] * b_[l];
          b_ += ldb;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_++;
      }
    } else if (transa_ && !transb_) {
      short* a_ = a;
      for (i = 0; i < m; i++) {
        short* b_ = b;
        for (j = 0; j < n; j++) {
          short sum = 0;
          for (l = 0; l < k; l++) sum += a_[l] * b_[l];
          b_ += ldb;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_ += lda;
      }
    } else if (!transa_ && transb_) {
      short* a_ = a;
      for (i = 0; i < m; i++) {
        short* b_ = b;
        for (j = 0; j < n; j++) {
          short sum = 0;
          for (l = 0; l < k; l++) sum += a_[l * lda] * b_[l * ldb];
          b_++;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_++;
      }
    } else {
      short* a_ = a;
      for (i = 0; i < m; i++) {
        short* b_ = b;
        for (j = 0; j < n; j++) {
          short sum = 0;
          for (l = 0; l < k; l++) sum += a_[l] * b_[l * ldb];
          b_++;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_ += lda;
      }
    }
  }
}

extern void dswap_(int* n, double* x, int* incx, double* y, int* incy);
extern void sswap_(int* n, float* x, int* incx, float* y, int* incy);
extern void dscal_(int* n, double* a, double* x, int* incx);
extern void sscal_(int* n, float* a, float* x, int* incx);
extern void dcopy_(int* n, double* x, int* incx, double* y, int* incy);
extern void scopy_(int* n, float* x, int* incx, float* y, int* incy);
extern void daxpy_(int* n, double* a, double* x, int* incx, double* y,
                   int* incy);
extern void saxpy_(int* n, float* a, float* x, int* incx, float* y, int* incy);
extern double ddot_(int* n, double* x, int* incx, double* y, int* incy);
extern float sdot_(int* n, float* x, int* incx, float* y, int* incy);

extern void dgemv_(char* trans, int* m, int* n, double* alpha, double* a,
                   int* lda, double* x, int* incx, double* beta, double* y,
                   int* incy);
extern void sgemv_(char* trans, int* m, int* n, float* alpha, float* a,
                   int* lda, float* x, int* incx, float* beta, float* y,
                   int* incy);
extern void dger_(int* m, int* n, double* alpha, double* x, int* incx,
                  double* y, int* incy, double* a, int* lda);
extern void sger_(int* m, int* n, float* alpha, float* x, int* incx, float* y,
                  int* incy, float* a, int* lda);
extern void dgemm_(char* transa, char* transb, int* m, int* n, int* k,
                   double* alpha, double* a, int* lda, double* b, int* ldb,
                   double* beta, double* c, int* ldc);
extern void sgemm_(char* transa, char* transb, int* m, int* n, int* k,
                   float* alpha, float* a, int* lda, float* b, int* ldb,
                   float* beta, float* c, int* ldc);

void THIntBlas_swap(long n, int* x, long incx, int* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    for (i = 0; i < n; i++) {
      int z = x[i * incx];
      x[i * incx] = y[i * incy];
      y[i * incy] = z;
    }
  }
}

void THIntBlas_scal(long n, int a, int* x, long incx) {
  if (n == 1) incx = 1;
  {
    long i;
    for (i = 0; i < n; i++) {
      if (a == 0) {
        x[i * incx] = 0;
      } else {
        x[i * incx] *= a;
      }
    }
  }
}

void THIntBlas_copy(long n, int* x, long incx, int* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    for (i = 0; i < n; i++) y[i * incy] = x[i * incx];
  }
}

void THIntBlas_axpy(long n, int a, int* x, long incx, int* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    for (i = 0; i < n; i++) y[i * incy] += a * x[i * incx];
  }
}

int THIntBlas_dot(long n, int* x, long incx, int* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    int sum = 0;
    for (i = 0; i < n; i++) sum += x[i * incx] * y[i * incy];
    return sum;
  }
}

void THIntBlas_gemv(char trans, long m, long n, int alpha, int* a, long lda,
                    int* x, long incx, int beta, int* y, long incy) {
  if (n == 1) lda = m;
  {
    long i, j;

    if ((trans == 'T') || (trans == 't')) {
      for (i = 0; i < n; i++) {
        int sum = 0;
        int* row_ = a + lda * i;
        for (j = 0; j < m; j++) sum += x[j * incx] * row_[j];
        if (beta == 0)
          y[i * incy] = alpha * sum;
        else
          y[i * incy] = beta * y[i * incy] + alpha * sum;
      }
    } else {
      if (beta != 1) THIntBlas_scal(m, beta, y, incy);

      for (j = 0; j < n; j++) {
        int* column_ = a + lda * j;
        int z = alpha * x[j * incx];
        for (i = 0; i < m; i++) y[i * incy] += z * column_[i];
      }
    }
  }
}

void THIntBlas_ger(long m, long n, int alpha, int* x, long incx, int* y,
                   long incy, int* a, long lda) {
  if (n == 1) lda = m;
  {
    long i, j;
    for (j = 0; j < n; j++) {
      int* column_ = a + j * lda;
      int z = alpha * y[j * incy];
      for (i = 0; i < m; i++) column_[i] += z * x[i * incx];
    }
  }
}

void THIntBlas_gemm(char transa, char transb, long m, long n, long k, int alpha,
                    int* a, long lda, int* b, long ldb, int beta, int* c,
                    long ldc) {
  int transa_ = ((transa == 't') || (transa == 'T'));
  int transb_ = ((transb == 't') || (transb == 'T'));

  if (n == 1) ldc = m;

  if (transa_) {
    if (m == 1) lda = k;
  } else {
    if (k == 1) lda = m;
  }

  if (transb_) {
    if (k == 1) ldb = n;
  } else {
    if (n == 1) ldb = k;
  }
  {
    long i, j, l;
    if (!transa_ && !transb_) {
      int* a_ = a;
      for (i = 0; i < m; i++) {
        int* b_ = b;
        for (j = 0; j < n; j++) {
          int sum = 0;
          for (l = 0; l < k; l++) sum += a_[l * lda] * b_[l];
          b_ += ldb;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_++;
      }
    } else if (transa_ && !transb_) {
      int* a_ = a;
      for (i = 0; i < m; i++) {
        int* b_ = b;
        for (j = 0; j < n; j++) {
          int sum = 0;
          for (l = 0; l < k; l++) sum += a_[l] * b_[l];
          b_ += ldb;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_ += lda;
      }
    } else if (!transa_ && transb_) {
      int* a_ = a;
      for (i = 0; i < m; i++) {
        int* b_ = b;
        for (j = 0; j < n; j++) {
          int sum = 0;
          for (l = 0; l < k; l++) sum += a_[l * lda] * b_[l * ldb];
          b_++;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_++;
      }
    } else {
      int* a_ = a;
      for (i = 0; i < m; i++) {
        int* b_ = b;
        for (j = 0; j < n; j++) {
          int sum = 0;
          for (l = 0; l < k; l++) sum += a_[l] * b_[l * ldb];
          b_++;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_ += lda;
      }
    }
  }
}

extern void dswap_(int* n, double* x, int* incx, double* y, int* incy);
extern void sswap_(int* n, float* x, int* incx, float* y, int* incy);
extern void dscal_(int* n, double* a, double* x, int* incx);
extern void sscal_(int* n, float* a, float* x, int* incx);
extern void dcopy_(int* n, double* x, int* incx, double* y, int* incy);
extern void scopy_(int* n, float* x, int* incx, float* y, int* incy);
extern void daxpy_(int* n, double* a, double* x, int* incx, double* y,
                   int* incy);
extern void saxpy_(int* n, float* a, float* x, int* incx, float* y, int* incy);
extern double ddot_(int* n, double* x, int* incx, double* y, int* incy);
extern float sdot_(int* n, float* x, int* incx, float* y, int* incy);

extern void dgemv_(char* trans, int* m, int* n, double* alpha, double* a,
                   int* lda, double* x, int* incx, double* beta, double* y,
                   int* incy);
extern void sgemv_(char* trans, int* m, int* n, float* alpha, float* a,
                   int* lda, float* x, int* incx, float* beta, float* y,
                   int* incy);
extern void dger_(int* m, int* n, double* alpha, double* x, int* incx,
                  double* y, int* incy, double* a, int* lda);
extern void sger_(int* m, int* n, float* alpha, float* x, int* incx, float* y,
                  int* incy, float* a, int* lda);
extern void dgemm_(char* transa, char* transb, int* m, int* n, int* k,
                   double* alpha, double* a, int* lda, double* b, int* ldb,
                   double* beta, double* c, int* ldc);
extern void sgemm_(char* transa, char* transb, int* m, int* n, int* k,
                   float* alpha, float* a, int* lda, float* b, int* ldb,
                   float* beta, float* c, int* ldc);

void THLongBlas_swap(long n, long* x, long incx, long* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    for (i = 0; i < n; i++) {
      long z = x[i * incx];
      x[i * incx] = y[i * incy];
      y[i * incy] = z;
    }
  }
}

void THLongBlas_scal(long n, long a, long* x, long incx) {
  if (n == 1) incx = 1;
  {
    long i;
    for (i = 0; i < n; i++) {
      if (a == 0) {
        x[i * incx] = 0;
      } else {
        x[i * incx] *= a;
      }
    }
  }
}

void THLongBlas_copy(long n, long* x, long incx, long* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    for (i = 0; i < n; i++) y[i * incy] = x[i * incx];
  }
}

void THLongBlas_axpy(long n, long a, long* x, long incx, long* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    for (i = 0; i < n; i++) y[i * incy] += a * x[i * incx];
  }
}

long THLongBlas_dot(long n, long* x, long incx, long* y, long incy) {
  if (n == 1) {
    incx = 1;
    incy = 1;
  }
  {
    long i;
    long sum = 0;
    for (i = 0; i < n; i++) sum += x[i * incx] * y[i * incy];
    return sum;
  }
}

void THLongBlas_gemv(char trans, long m, long n, long alpha, long* a, long lda,
                     long* x, long incx, long beta, long* y, long incy) {
  if (n == 1) lda = m;
  {
    long i, j;

    if ((trans == 'T') || (trans == 't')) {
      for (i = 0; i < n; i++) {
        long sum = 0;
        long* row_ = a + lda * i;
        for (j = 0; j < m; j++) sum += x[j * incx] * row_[j];
        if (beta == 0)
          y[i * incy] = alpha * sum;
        else
          y[i * incy] = beta * y[i * incy] + alpha * sum;
      }
    } else {
      if (beta != 1) THLongBlas_scal(m, beta, y, incy);

      for (j = 0; j < n; j++) {
        long* column_ = a + lda * j;
        long z = alpha * x[j * incx];
        for (i = 0; i < m; i++) y[i * incy] += z * column_[i];
      }
    }
  }
}

void THLongBlas_ger(long m, long n, long alpha, long* x, long incx, long* y,
                    long incy, long* a, long lda) {
  if (n == 1) lda = m;
  {
    long i, j;
    for (j = 0; j < n; j++) {
      long* column_ = a + j * lda;
      long z = alpha * y[j * incy];
      for (i = 0; i < m; i++) column_[i] += z * x[i * incx];
    }
  }
}

void THLongBlas_gemm(char transa, char transb, long m, long n, long k,
                     long alpha, long* a, long lda, long* b, long ldb,
                     long beta, long* c, long ldc) {
  int transa_ = ((transa == 't') || (transa == 'T'));
  int transb_ = ((transb == 't') || (transb == 'T'));

  if (n == 1) ldc = m;

  if (transa_) {
    if (m == 1) lda = k;
  } else {
    if (k == 1) lda = m;
  }

  if (transb_) {
    if (k == 1) ldb = n;
  } else {
    if (n == 1) ldb = k;
  }
  {
    long i, j, l;
    if (!transa_ && !transb_) {
      long* a_ = a;
      for (i = 0; i < m; i++) {
        long* b_ = b;
        for (j = 0; j < n; j++) {
          long sum = 0;
          for (l = 0; l < k; l++) sum += a_[l * lda] * b_[l];
          b_ += ldb;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_++;
      }
    } else if (transa_ && !transb_) {
      long* a_ = a;
      for (i = 0; i < m; i++) {
        long* b_ = b;
        for (j = 0; j < n; j++) {
          long sum = 0;
          for (l = 0; l < k; l++) sum += a_[l] * b_[l];
          b_ += ldb;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_ += lda;
      }
    } else if (!transa_ && transb_) {
      long* a_ = a;
      for (i = 0; i < m; i++) {
        long* b_ = b;
        for (j = 0; j < n; j++) {
          long sum = 0;
          for (l = 0; l < k; l++) sum += a_[l * lda] * b_[l * ldb];
          b_++;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_++;
      }
    } else {
      long* a_ = a;
      for (i = 0; i < m; i++) {
        long* b_ = b;
        for (j = 0; j < n; j++) {
          long sum = 0;
          for (l = 0; l < k; l++) sum += a_[l] * b_[l * ldb];
          b_++;
          if (beta == 0)
            c[j * ldc + i] = alpha * sum;
          else
            c[j * ldc + i] = beta * c[j * ldc + i] + alpha * sum;
        }
        a_ += lda;
      }
    }
  }
}
