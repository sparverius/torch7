#include "../TH.h"

void showdim(THFloatTensor *tensor) {
  int i;
  for (i = 0; i < tensor->nDimension; i++) {
    printf("%ld", tensor->size[i]);
    if (i < tensor->nDimension - 1) {
      printf("x");
    }
  }
  printf("\n");
}

void show2(THFloatTensor *tensor) {
  printf("size = %ld\n\n", tensor->size[0]);
  printf("storage->size = %ld\n\n", tensor->storage->size);

  printf("stride[0] = %ld\n", tensor->stride[0]);
  printf("stride[1] = %ld\n", tensor->stride[1]);
  /* printf("%ld\n", tensor->stride[2]); */
  printf("\n");
  int k = 0;
  for (int i = 0; i < tensor->nDimension - 1; i++) { // 2
    for (int j = 0; j < tensor->size[0]; j++) { // 3
      for (int k = 0; k < tensor->stride[0]; k++) {
        if (k > 0) printf(" ");
        printf("%f", THTensor_fastGet2d(tensor, j, k));
      }
      printf("\n");
    }
  }
  printf("\n");
}

void show3(THFloatTensor *tensor) {
  int i = 0, j = 0, k = 0;
  int max_i = tensor->size[0];
  int max_j = tensor->size[1];
  int max_k = tensor->size[2];
  printf("[");
  for (i = 0; i < max_i; i++) { // 2
    for (j = 0; j < max_j; j++) { // 3
      if (j == 0) {
        if (i > 0) printf(" ");
        printf("[");
      }

      for (k = 0; k < max_k; k++) {
        if (k > 0) printf(" "); // printf(",");
        printf("%f", THTensor_fastGet3d(tensor, i, j, k));
      }

      if (j == max_j - 1) {
        printf("]");
        if (i < max_i - 1) printf("\n");
      } else {
        printf("\n  ");
      }

    }
    if (j < max_j) printf("\n");
  }
  printf("]\n");
}

void set3(THFloatTensor *tensor) {
  int i = 0, j = 0, k = 0;
  int max_i = tensor->size[0], max_j = tensor->size[1], max_k = tensor->size[2];
  int n = 0;

  for (i = 0; i < max_i; i++) { // 2
    for (j = 0; j < max_j; j++) { // 3
      for (k = 0; k < max_k; k++) {
        /* THTensor_fastSet3d(tensor, i, j, k, i + j + k); */
        THTensor_fastSet3d(tensor, i, j, k, n);
        n += 1;
      }
    }
  }
}


int main() {
  THFloatTensor *tensor = THFloatTensor_new();

  /* THStorage *storage = THLongStorage_newWithSize2(3, 4); */
  /* THStorage *storage = THLongStorage_newWithSize3(2, 1, 3); */
  THLongStorage *storage = THLongStorage_newWithSize3(4, 3, 3);

  THFloatTensor_zeros(tensor, storage);

  showdim(tensor);

  printf("tensor->nDimension = %d\n", tensor->nDimension);
  // printf("tensor->size = %ld\n", *(tensor->size + 2));

  /* show2(tensor); */
  show3(tensor);

  set3(tensor);

  printf("\n");
  show3(tensor);

  THFloatTensor_sin(tensor, tensor);

  printf("\n");
  show3(tensor);


  /* THFloatTensor_logspace(tensor, 1, 1, 3); */
  /* printf("\n"); */
  /* show3(tensor); */

  THFloatTensor_free(tensor);
  THLongStorage_free(storage);

  return 0;
}
