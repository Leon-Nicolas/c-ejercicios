#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  /* code */
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  if (a == b == c)
    printf("verdadero\n");
  else
    printf("falso\n");

  return 0;
}
