#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int arr[10];
  arr[0] = 0;
  int i;
  srand(time(NULL));
  for (i = 1; i < 10; i++) {
    arr[i] = rand();
  }
  for (i = 0; i < 10; i++) {
    printf("Element %d in arr: %d\n", i, arr[i]);
  }

  printf("\n");
  int ray[10];
  int *p = arr;
  int *q = ray;
  printf("Using []:\n");
  for (i = 0; i < 10; i++) {
    q[i] = p[9-i];
    printf("Element %d in ray: %u\n", i, q[i]);
  }

  printf("\nUsing *:\n");
  for (i = 0; i < 10; i++) {
    *(q + i) = *(p + 9 - i);
    printf("Element %d in ray: %u\n", i, *(q + i));
  }

  return 0;
}
