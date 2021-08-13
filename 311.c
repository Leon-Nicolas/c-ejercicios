#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]) {

  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  double arc = atan2(y, x);
  double ang = arc * 180 / 3.14;
  printf("El angulo del vector (%d, %d) con respecto al eje x es aproximadamente %.2f\n", x, y, ang);


  return 0;
}
