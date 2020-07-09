// THIS FILE WAS AUTOMATICALLY GENERATED @ 2020-07-08
// DO NOT MODIFY


void THFloatLapack_gesv(int n, int nrhs, float* a, int lda, int* ipiv, float* b,
                        int ldb, int* info);

void THFloatLapack_trtrs(char uplo, char trans, char diag, int n, int nrhs,
                         float* a, int lda, float* b, int ldb, int* info);

void THFloatLapack_gels(char trans, int m, int n, int nrhs, float* a, int lda,
                        float* b, int ldb, float* work, int lwork, int* info);

void THFloatLapack_syev(char jobz, char uplo, int n, float* a, int lda,
                        float* w, float* work, int lwork, int* info);

void THFloatLapack_geev(char jobvl, char jobvr, int n, float* a, int lda,
                        float* wr, float* wi, float* vl, int ldvl, float* vr,
                        int ldvr, float* work, int lwork, int* info);

void THFloatLapack_gesvd(char jobu, char jobvt, int m, int n, float* a, int lda,
                         float* s, float* u, int ldu, float* vt, int ldvt,
                         float* work, int lwork, int* info);

void THFloatLapack_getrf(int m, int n, float* a, int lda, int* ipiv, int* info);
void THFloatLapack_getrs(char trans, int n, int nrhs, float* a, int lda,
                         int* ipiv, float* b, int ldb, int* info);

void THFloatLapack_getri(int n, float* a, int lda, int* ipiv, float* work,
                         int lwork, int* info);

void THFloatLapack_potrf(char uplo, int n, float* a, int lda, int* info);

void THFloatLapack_potri(char uplo, int n, float* a, int lda, int* info);

void THFloatLapack_potrs(char uplo, int n, int nrhs, float* a, int lda,
                         float* b, int ldb, int* info);

void THFloatLapack_pstrf(char uplo, int n, float* a, int lda, int* piv,
                         int* rank, float tol, float* work, int* info);

void THFloatLapack_geqrf(int m, int n, float* a, int lda, float* tau,
                         float* work, int lwork, int* info);

void THFloatLapack_orgqr(int m, int n, int k, float* a, int lda, float* tau,
                         float* work, int lwork, int* info);

void THFloatLapack_ormqr(char side, char trans, int m, int n, int k, float* a,
                         int lda, float* tau, float* c, int ldc, float* work,
                         int lwork, int* info);

void THDoubleLapack_gesv(int n, int nrhs, double* a, int lda, int* ipiv,
                         double* b, int ldb, int* info);

void THDoubleLapack_trtrs(char uplo, char trans, char diag, int n, int nrhs,
                          double* a, int lda, double* b, int ldb, int* info);

void THDoubleLapack_gels(char trans, int m, int n, int nrhs, double* a, int lda,
                         double* b, int ldb, double* work, int lwork,
                         int* info);

void THDoubleLapack_syev(char jobz, char uplo, int n, double* a, int lda,
                         double* w, double* work, int lwork, int* info);

void THDoubleLapack_geev(char jobvl, char jobvr, int n, double* a, int lda,
                         double* wr, double* wi, double* vl, int ldvl,
                         double* vr, int ldvr, double* work, int lwork,
                         int* info);

void THDoubleLapack_gesvd(char jobu, char jobvt, int m, int n, double* a,
                          int lda, double* s, double* u, int ldu, double* vt,
                          int ldvt, double* work, int lwork, int* info);

void THDoubleLapack_getrf(int m, int n, double* a, int lda, int* ipiv,
                          int* info);
void THDoubleLapack_getrs(char trans, int n, int nrhs, double* a, int lda,
                          int* ipiv, double* b, int ldb, int* info);

void THDoubleLapack_getri(int n, double* a, int lda, int* ipiv, double* work,
                          int lwork, int* info);

void THDoubleLapack_potrf(char uplo, int n, double* a, int lda, int* info);

void THDoubleLapack_potri(char uplo, int n, double* a, int lda, int* info);

void THDoubleLapack_potrs(char uplo, int n, int nrhs, double* a, int lda,
                          double* b, int ldb, int* info);

void THDoubleLapack_pstrf(char uplo, int n, double* a, int lda, int* piv,
                          int* rank, double tol, double* work, int* info);

void THDoubleLapack_geqrf(int m, int n, double* a, int lda, double* tau,
                          double* work, int lwork, int* info);

void THDoubleLapack_orgqr(int m, int n, int k, double* a, int lda, double* tau,
                          double* work, int lwork, int* info);

void THDoubleLapack_ormqr(char side, char trans, int m, int n, int k, double* a,
                          int lda, double* tau, double* c, int ldc,
                          double* work, int lwork, int* info);

void THByteLapack_gesv(int n, int nrhs, unsigned char* a, int lda, int* ipiv,
                       unsigned char* b, int ldb, int* info);

void THByteLapack_trtrs(char uplo, char trans, char diag, int n, int nrhs,
                        unsigned char* a, int lda, unsigned char* b, int ldb,
                        int* info);

void THByteLapack_gels(char trans, int m, int n, int nrhs, unsigned char* a,
                       int lda, unsigned char* b, int ldb, unsigned char* work,
                       int lwork, int* info);

void THByteLapack_syev(char jobz, char uplo, int n, unsigned char* a, int lda,
                       unsigned char* w, unsigned char* work, int lwork,
                       int* info);

void THByteLapack_geev(char jobvl, char jobvr, int n, unsigned char* a, int lda,
                       unsigned char* wr, unsigned char* wi, unsigned char* vl,
                       int ldvl, unsigned char* vr, int ldvr,
                       unsigned char* work, int lwork, int* info);

void THByteLapack_gesvd(char jobu, char jobvt, int m, int n, unsigned char* a,
                        int lda, unsigned char* s, unsigned char* u, int ldu,
                        unsigned char* vt, int ldvt, unsigned char* work,
                        int lwork, int* info);

void THByteLapack_getrf(int m, int n, unsigned char* a, int lda, int* ipiv,
                        int* info);
void THByteLapack_getrs(char trans, int n, int nrhs, unsigned char* a, int lda,
                        int* ipiv, unsigned char* b, int ldb, int* info);

void THByteLapack_getri(int n, unsigned char* a, int lda, int* ipiv,
                        unsigned char* work, int lwork, int* info);

void THByteLapack_potrf(char uplo, int n, unsigned char* a, int lda, int* info);

void THByteLapack_potri(char uplo, int n, unsigned char* a, int lda, int* info);

void THByteLapack_potrs(char uplo, int n, int nrhs, unsigned char* a, int lda,
                        unsigned char* b, int ldb, int* info);

void THByteLapack_pstrf(char uplo, int n, unsigned char* a, int lda, int* piv,
                        int* rank, unsigned char tol, unsigned char* work,
                        int* info);

void THByteLapack_geqrf(int m, int n, unsigned char* a, int lda,
                        unsigned char* tau, unsigned char* work, int lwork,
                        int* info);

void THByteLapack_orgqr(int m, int n, int k, unsigned char* a, int lda,
                        unsigned char* tau, unsigned char* work, int lwork,
                        int* info);

void THByteLapack_ormqr(char side, char trans, int m, int n, int k,
                        unsigned char* a, int lda, unsigned char* tau,
                        unsigned char* c, int ldc, unsigned char* work,
                        int lwork, int* info);

void THCharLapack_gesv(int n, int nrhs, char* a, int lda, int* ipiv, char* b,
                       int ldb, int* info);

void THCharLapack_trtrs(char uplo, char trans, char diag, int n, int nrhs,
                        char* a, int lda, char* b, int ldb, int* info);

void THCharLapack_gels(char trans, int m, int n, int nrhs, char* a, int lda,
                       char* b, int ldb, char* work, int lwork, int* info);

void THCharLapack_syev(char jobz, char uplo, int n, char* a, int lda, char* w,
                       char* work, int lwork, int* info);

void THCharLapack_geev(char jobvl, char jobvr, int n, char* a, int lda,
                       char* wr, char* wi, char* vl, int ldvl, char* vr,
                       int ldvr, char* work, int lwork, int* info);

void THCharLapack_gesvd(char jobu, char jobvt, int m, int n, char* a, int lda,
                        char* s, char* u, int ldu, char* vt, int ldvt,
                        char* work, int lwork, int* info);

void THCharLapack_getrf(int m, int n, char* a, int lda, int* ipiv, int* info);
void THCharLapack_getrs(char trans, int n, int nrhs, char* a, int lda,
                        int* ipiv, char* b, int ldb, int* info);

void THCharLapack_getri(int n, char* a, int lda, int* ipiv, char* work,
                        int lwork, int* info);

void THCharLapack_potrf(char uplo, int n, char* a, int lda, int* info);

void THCharLapack_potri(char uplo, int n, char* a, int lda, int* info);

void THCharLapack_potrs(char uplo, int n, int nrhs, char* a, int lda, char* b,
                        int ldb, int* info);

void THCharLapack_pstrf(char uplo, int n, char* a, int lda, int* piv, int* rank,
                        char tol, char* work, int* info);

void THCharLapack_geqrf(int m, int n, char* a, int lda, char* tau, char* work,
                        int lwork, int* info);

void THCharLapack_orgqr(int m, int n, int k, char* a, int lda, char* tau,
                        char* work, int lwork, int* info);

void THCharLapack_ormqr(char side, char trans, int m, int n, int k, char* a,
                        int lda, char* tau, char* c, int ldc, char* work,
                        int lwork, int* info);

void THShortLapack_gesv(int n, int nrhs, short* a, int lda, int* ipiv, short* b,
                        int ldb, int* info);

void THShortLapack_trtrs(char uplo, char trans, char diag, int n, int nrhs,
                         short* a, int lda, short* b, int ldb, int* info);

void THShortLapack_gels(char trans, int m, int n, int nrhs, short* a, int lda,
                        short* b, int ldb, short* work, int lwork, int* info);

void THShortLapack_syev(char jobz, char uplo, int n, short* a, int lda,
                        short* w, short* work, int lwork, int* info);

void THShortLapack_geev(char jobvl, char jobvr, int n, short* a, int lda,
                        short* wr, short* wi, short* vl, int ldvl, short* vr,
                        int ldvr, short* work, int lwork, int* info);

void THShortLapack_gesvd(char jobu, char jobvt, int m, int n, short* a, int lda,
                         short* s, short* u, int ldu, short* vt, int ldvt,
                         short* work, int lwork, int* info);

void THShortLapack_getrf(int m, int n, short* a, int lda, int* ipiv, int* info);
void THShortLapack_getrs(char trans, int n, int nrhs, short* a, int lda,
                         int* ipiv, short* b, int ldb, int* info);

void THShortLapack_getri(int n, short* a, int lda, int* ipiv, short* work,
                         int lwork, int* info);

void THShortLapack_potrf(char uplo, int n, short* a, int lda, int* info);

void THShortLapack_potri(char uplo, int n, short* a, int lda, int* info);

void THShortLapack_potrs(char uplo, int n, int nrhs, short* a, int lda,
                         short* b, int ldb, int* info);

void THShortLapack_pstrf(char uplo, int n, short* a, int lda, int* piv,
                         int* rank, short tol, short* work, int* info);

void THShortLapack_geqrf(int m, int n, short* a, int lda, short* tau,
                         short* work, int lwork, int* info);

void THShortLapack_orgqr(int m, int n, int k, short* a, int lda, short* tau,
                         short* work, int lwork, int* info);

void THShortLapack_ormqr(char side, char trans, int m, int n, int k, short* a,
                         int lda, short* tau, short* c, int ldc, short* work,
                         int lwork, int* info);

void THIntLapack_gesv(int n, int nrhs, int* a, int lda, int* ipiv, int* b,
                      int ldb, int* info);

void THIntLapack_trtrs(char uplo, char trans, char diag, int n, int nrhs,
                       int* a, int lda, int* b, int ldb, int* info);

void THIntLapack_gels(char trans, int m, int n, int nrhs, int* a, int lda,
                      int* b, int ldb, int* work, int lwork, int* info);

void THIntLapack_syev(char jobz, char uplo, int n, int* a, int lda, int* w,
                      int* work, int lwork, int* info);

void THIntLapack_geev(char jobvl, char jobvr, int n, int* a, int lda, int* wr,
                      int* wi, int* vl, int ldvl, int* vr, int ldvr, int* work,
                      int lwork, int* info);

void THIntLapack_gesvd(char jobu, char jobvt, int m, int n, int* a, int lda,
                       int* s, int* u, int ldu, int* vt, int ldvt, int* work,
                       int lwork, int* info);

void THIntLapack_getrf(int m, int n, int* a, int lda, int* ipiv, int* info);
void THIntLapack_getrs(char trans, int n, int nrhs, int* a, int lda, int* ipiv,
                       int* b, int ldb, int* info);

void THIntLapack_getri(int n, int* a, int lda, int* ipiv, int* work, int lwork,
                       int* info);

void THIntLapack_potrf(char uplo, int n, int* a, int lda, int* info);

void THIntLapack_potri(char uplo, int n, int* a, int lda, int* info);

void THIntLapack_potrs(char uplo, int n, int nrhs, int* a, int lda, int* b,
                       int ldb, int* info);

void THIntLapack_pstrf(char uplo, int n, int* a, int lda, int* piv, int* rank,
                       int tol, int* work, int* info);

void THIntLapack_geqrf(int m, int n, int* a, int lda, int* tau, int* work,
                       int lwork, int* info);

void THIntLapack_orgqr(int m, int n, int k, int* a, int lda, int* tau,
                       int* work, int lwork, int* info);

void THIntLapack_ormqr(char side, char trans, int m, int n, int k, int* a,
                       int lda, int* tau, int* c, int ldc, int* work, int lwork,
                       int* info);

void THLongLapack_gesv(int n, int nrhs, long* a, int lda, int* ipiv, long* b,
                       int ldb, int* info);

void THLongLapack_trtrs(char uplo, char trans, char diag, int n, int nrhs,
                        long* a, int lda, long* b, int ldb, int* info);

void THLongLapack_gels(char trans, int m, int n, int nrhs, long* a, int lda,
                       long* b, int ldb, long* work, int lwork, int* info);

void THLongLapack_syev(char jobz, char uplo, int n, long* a, int lda, long* w,
                       long* work, int lwork, int* info);

void THLongLapack_geev(char jobvl, char jobvr, int n, long* a, int lda,
                       long* wr, long* wi, long* vl, int ldvl, long* vr,
                       int ldvr, long* work, int lwork, int* info);

void THLongLapack_gesvd(char jobu, char jobvt, int m, int n, long* a, int lda,
                        long* s, long* u, int ldu, long* vt, int ldvt,
                        long* work, int lwork, int* info);

void THLongLapack_getrf(int m, int n, long* a, int lda, int* ipiv, int* info);
void THLongLapack_getrs(char trans, int n, int nrhs, long* a, int lda,
                        int* ipiv, long* b, int ldb, int* info);

void THLongLapack_getri(int n, long* a, int lda, int* ipiv, long* work,
                        int lwork, int* info);

void THLongLapack_potrf(char uplo, int n, long* a, int lda, int* info);

void THLongLapack_potri(char uplo, int n, long* a, int lda, int* info);

void THLongLapack_potrs(char uplo, int n, int nrhs, long* a, int lda, long* b,
                        int ldb, int* info);

void THLongLapack_pstrf(char uplo, int n, long* a, int lda, int* piv, int* rank,
                        long tol, long* work, int* info);

void THLongLapack_geqrf(int m, int n, long* a, int lda, long* tau, long* work,
                        int lwork, int* info);

void THLongLapack_orgqr(int m, int n, int k, long* a, int lda, long* tau,
                        long* work, int lwork, int* info);

void THLongLapack_ormqr(char side, char trans, int m, int n, int k, long* a,
                        int lda, long* tau, long* c, int ldc, long* work,
                        int lwork, int* info);
