// THIS FILE WAS AUTOMATICALLY GENERATED @ 2020-07-08
// DO NOT MODIFY


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
