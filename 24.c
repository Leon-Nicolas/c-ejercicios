#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  /* code */
  int x  = atoi(argv[1]);
  int y  = atoi(argv[2]);
  printf("%f m\n", sqrt(x * x + y * y) );

  return 0;
}
