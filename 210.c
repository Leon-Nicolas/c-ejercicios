#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  /* code */
  double t = atoi (argv[1]);
  double p = atoi (argv[2]);
  double r = atoi (argv[3]);


  printf("%f\n", p * exp(t * r));

  return 0;
}
