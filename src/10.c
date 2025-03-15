#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 10;
  int *arr = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    arr[i] = rand() % 10 + 1;
  }
  printf("Random numbers: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  free(arr);
  return 0;
}
