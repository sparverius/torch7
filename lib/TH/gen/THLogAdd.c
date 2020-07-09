// THIS FILE WAS AUTOMATICALLY GENERATED @ 2020-07-09
// DO NOT MODIFY
#include "THGeneral.h"


const double THLog2Pi;
const double THLogZero;
const double THLogOne;

double THLogAdd(double log_a, double log_b);
double THLogSub(double log_a, double log_b);
double THExpMinusApprox(const double x);

const double THLog2Pi = 1.83787706640934548355;
const double THLogZero = -((double)1.79769313486231570814527423731704357e+308L);
const double THLogOne = 0;

double THLogAdd(double log_a, double log_b) {
  double minusdif;

  if (log_a < log_b) {
    double tmp = log_a;
    log_a = log_b;
    log_b = tmp;
  }

  minusdif = log_b - log_a;

  if (minusdif < -18.42)
    return log_a;
  else
    return log_a + log1p(exp(minusdif));
}

double THLogSub(double log_a, double log_b) {
  double minusdif;

  if (log_a < log_b)
    _THError("THLogAdd.c", 40,
             "LogSub: log_a (%f) should be greater than log_b (%f)", log_a,
             log_b);

  minusdif = log_b - log_a;

  if (log_a == log_b)
    return THLogZero;
  else if (minusdif < -18.42)
    return log_a;
  else
    return log_a + log1p(-exp(minusdif));
}

double THExpMinusApprox(const double x) {
  if (x < 13.0) {
    double y;
    y = (1.0) + x * ((0.125) + x * ((0.0078125) + x * ((0.00032552083) +
                                                       x * (1.0172526e-5))));
    y *= y;
    y *= y;
    y *= y;
    y = 1 / y;
    return y;
  }
  return 0;
}
