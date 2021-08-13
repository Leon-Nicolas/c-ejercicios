#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  /* code */
  int a1 = atoi(argv[1]);
  int a2 = atoi(argv[2]);
  int b1 = atoi(argv[3]);
  int b2 = atoi(argv[4]);
  int resx = a1 + b1;
  int resy = a2 + b2;

  printf("La suma del vector(%d, %d) y el vector (%d, %d) es:\n(%d, %d)", a1, a2, b1, b2, resx, resy);

  return 0;
}
