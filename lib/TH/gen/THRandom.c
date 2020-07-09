// THIS FILE WAS AUTOMATICALLY GENERATED @ 2020-07-09
// DO NOT MODIFY
#include "THGeneral.h"


typedef struct THGenerator {
  unsigned long the_initial_seed;
  int left;
  int seeded;
  unsigned long next;
  unsigned long state[624];

  double normal_x;
  double normal_y;
  double normal_rho;
  int normal_is_valid;
} THGenerator;

THGenerator* THGenerator_new(void);
THGenerator* THGenerator_copy(THGenerator* self, THGenerator* from);
void THGenerator_free(THGenerator* gen);

int THGenerator_isValid(THGenerator* _generator);

unsigned long THRandom_seed(THGenerator* _generator);

void THRandom_manualSeed(THGenerator* _generator, unsigned long the_seed_);

unsigned long THRandom_initialSeed(THGenerator* _generator);

unsigned long THRandom_random(THGenerator* _generator);

double THRandom_uniform(THGenerator* _generator, double a, double b);

double THRandom_normal(THGenerator* _generator, double mean, double stdv);

double THRandom_exponential(THGenerator* _generator, double lambda);

double THRandom_cauchy(THGenerator* _generator, double median, double sigma);

double THRandom_logNormal(THGenerator* _generator, double mean, double stdv);

int THRandom_geometric(THGenerator* _generator, double p);

int THRandom_bernoulli(THGenerator* _generator, double p);

static THGenerator* THGenerator_newUnseeded() {
  THGenerator* self = THAlloc(sizeof(THGenerator));
  memset(self, 0, sizeof(THGenerator));
  self->left = 1;
  self->seeded = 0;
  self->normal_is_valid = 0;
  return self;
}

THGenerator* THGenerator_new() {
  THGenerator* self = THGenerator_newUnseeded();
  THRandom_seed(self);
  return self;
}

THGenerator* THGenerator_copy(THGenerator* self, THGenerator* from) {
  memcpy(self, from, sizeof(THGenerator));
  return self;
}

void THGenerator_free(THGenerator* self) { THFree(self); }

int THGenerator_isValid(THGenerator* _generator) {
  if ((_generator->seeded == 1) &&
      (_generator->left > 0 && _generator->left <= 624) &&
      (_generator->next <= 624))
    return 1;

  return 0;
}

static unsigned long readURandomLong() {
  int randDev = open("/dev/urandom", O_RDONLY);
  unsigned long randValue;
  if (randDev < 0) {
    _THError("THRandom.c", 56, "Unable to open /dev/urandom");
  }
  ssize_t readBytes = read(randDev, &randValue, sizeof(randValue));
  if (readBytes < sizeof(randValue)) {
    _THError("THRandom.c", 60, "Unable to read from /dev/urandom");
  }
  close(randDev);
  return randValue;
}

unsigned long THRandom_seed(THGenerator* _generator) {
  unsigned long s = readURandomLong();

  THRandom_manualSeed(_generator, s);
  return s;
}
void THRandom_manualSeed(THGenerator* _generator, unsigned long the_seed_) {
  int j;

  THGenerator* blank = THGenerator_newUnseeded();
  THGenerator_copy(_generator, blank);
  THGenerator_free(blank);

  _generator->the_initial_seed = the_seed_;
  _generator->state[0] = _generator->the_initial_seed & 0xffffffffUL;
  for (j = 1; j < 624; j++) {
    _generator->state[j] = (1812433253UL * (_generator->state[j - 1] ^
                                            (_generator->state[j - 1] >> 30)) +
                            j);

    _generator->state[j] &= 0xffffffffUL;
  }
  _generator->left = 1;
  _generator->seeded = 1;
}

unsigned long THRandom_initialSeed(THGenerator* _generator) {
  return _generator->the_initial_seed;
}

void THRandom_nextState(THGenerator* _generator) {
  unsigned long* p = _generator->state;
  int j;

  _generator->left = 624;
  _generator->next = 0;

  for (j = 624 - 397 + 1; --j; p++)
    *p = p[397] ^ (((((p[0]) & 0x80000000UL) | ((p[1]) & 0x7fffffffUL)) >> 1) ^
                   ((p[1]) & 1UL ? 0x9908b0dfUL : 0UL));

  for (j = 397; --j; p++)
    *p = p[397 - 624] ^
         (((((p[0]) & 0x80000000UL) | ((p[1]) & 0x7fffffffUL)) >> 1) ^
          ((p[1]) & 1UL ? 0x9908b0dfUL : 0UL));

  *p = p[397 - 624] ^
       (((((p[0]) & 0x80000000UL) | ((_generator->state[0]) & 0x7fffffffUL)) >>
         1) ^
        ((_generator->state[0]) & 1UL ? 0x9908b0dfUL : 0UL));
}

unsigned long THRandom_random(THGenerator* _generator) {
  unsigned long y;

  if (--(_generator->left) == 0) THRandom_nextState(_generator);
  y = *(_generator->state + (_generator->next)++);

  y ^= (y >> 11);
  y ^= (y << 7) & 0x9d2c5680UL;
  y ^= (y << 15) & 0xefc60000UL;
  y ^= (y >> 18);

  return y;
}

static double __uniform__(THGenerator* _generator) {
  return (double)THRandom_random(_generator) * (1.0 / 4294967296.0);
}
double THRandom_uniform(THGenerator* _generator, double a, double b) {
  return (__uniform__(_generator) * (b - a) + a);
}

double THRandom_normal(THGenerator* _generator, double mean, double stdv) {
  do {
    _THArgCheck("THRandom.c", 214, stdv > 0, 2,
                "standard deviation must be strictly positive");
  } while (0);

  if (!_generator->normal_is_valid) {
    _generator->normal_x = __uniform__(_generator);
    _generator->normal_y = __uniform__(_generator);
    _generator->normal_rho = sqrt(-2. * log(1.0 - _generator->normal_y));
    _generator->normal_is_valid = 1;
  } else
    _generator->normal_is_valid = 0;

  if (_generator->normal_is_valid)
    return _generator->normal_rho *
               cos(2. * 3.14159265358979323846 * _generator->normal_x) * stdv +
           mean;
  else
    return _generator->normal_rho *
               sin(2. * 3.14159265358979323846 * _generator->normal_x) * stdv +
           mean;
}

double THRandom_exponential(THGenerator* _generator, double lambda) {
  return (-1. / lambda * log(1 - __uniform__(_generator)));
}

double THRandom_cauchy(THGenerator* _generator, double median, double sigma) {
  return (median + sigma * tan(3.14159265358979323846 *
                               (__uniform__(_generator) - 0.5)));
}

double THRandom_logNormal(THGenerator* _generator, double mean, double stdv) {
  do {
    _THArgCheck("THRandom.c", 246, stdv > 0, 2,
                "standard deviation must be strictly positive");
  } while (0);
  return (exp(THRandom_normal(_generator, mean, stdv)));
}

int THRandom_geometric(THGenerator* _generator, double p) {
  do {
    _THArgCheck("THRandom.c", 251, p > 0 && p < 1, 1, "must be > 0 and < 1");
  } while (0);
  return ((int)(log(1 - __uniform__(_generator)) / log(p)) + 1);
}

int THRandom_bernoulli(THGenerator* _generator, double p) {
  do {
    _THArgCheck("THRandom.c", 256, p >= 0 && p <= 1, 1,
                "must be >= 0 and <= 1");
  } while (0);
  return (__uniform__(_generator) <= p);
}
