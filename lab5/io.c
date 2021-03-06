#include <stdio.h>
#include <stdlib.h>

double* readArray(int length) {
  double* arr = (double*) malloc(length * sizeof(double));
  for (double* i = arr; i - arr < length; i++)
    scanf("%lf", i);
  return arr;
}

void printArray(double* arr, int length) {
  for (double* i = arr; i - arr < length; i++)
    printf("%lf ", *i);
  printf("\n");
}

int inputLength(int max) {
  int length;
  while (!scanf("%d", &length) || (length < 0 || length > max));
  return length;
}