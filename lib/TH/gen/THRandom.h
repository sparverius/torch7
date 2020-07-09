// THIS FILE WAS AUTOMATICALLY GENERATED @ 2020-07-08
// DO NOT MODIFY


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
