#include "Configuration.h"

#ifdef AUTO_BED_LEVELING_GRID

void daxpy ( int16_t n, double da, double dx[], int16_t incx, double dy[], int16_t incy );
double ddot ( int16_t n, double dx[], int16_t incx, double dy[], int16_t incy );
double dnrm2 ( int16_t n, double x[], int16_t incx );
void dqrank ( double a[], int16_t lda, int16_t m, int16_t n, double tol, int16_t *kr, 
  int16_t jpvt[], double qraux[] );
void dqrdc ( double a[], int16_t lda, int16_t n, int16_t p, double qraux[], int16_t jpvt[], 
  double work[], int16_t job );
int16_t dqrls ( double a[], int16_t lda, int16_t m, int16_t n, double tol, int16_t *kr, double b[], 
  double x[], double rsd[], int16_t jpvt[], double qraux[], int16_t itask );
void dqrlss ( double a[], int16_t lda, int16_t m, int16_t n, int16_t kr, double b[], double x[], 
  double rsd[], int16_t jpvt[], double qraux[] );
int16_t dqrsl ( double a[], int16_t lda, int16_t n, int16_t k, double qraux[], double y[], 
  double qy[], double qty[], double b[], double rsd[], double ab[], int16_t job );
void dscal ( int16_t n, double sa, double x[], int16_t incx );
void dswap ( int16_t n, double x[], int16_t incx, double y[], int16_t incy );
double *qr_solve ( int16_t m, int16_t n, double a[], double b[] );

#endif
