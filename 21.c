#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {
  /* code */
  double theta = atoi (argv[1]);
  printf("%f\n", sin(theta) * sin(theta) + cos(theta) * cos(theta) );

  return 0;
}
