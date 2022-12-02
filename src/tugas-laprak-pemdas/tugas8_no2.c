#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int *a1 = (int *)calloc(5, sizeof(int));
  for (int i = 0; i < 5; i++) {
    a1[i] = i;
  }

  printf("Sebelum realloc\n");

  for (int i = 0; i < 5; i++) {
    printf("%d\n", a1[i]);
  }

  a1 = realloc(a1, sizeof(int*) * 10);
  
  printf("Setelah realloc\n");
   for (int i = 5; i < 10; i++) {
    a1[i] = i;
  }

  for (int i = 0; i < 10; i++) {
    printf("%d\n", a1[i]);
  }

  free(a1);

  return 0;
}