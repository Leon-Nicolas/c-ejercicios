#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  double a = atof(argv[1]);
  double b = atof(argv[2]);
  double c = atof(argv[3]);
  if (a==0) {
  printf("El primer argumento no puede ser 0\n");
  return 0;
  }
  double discriminante = b * b - 4.0 * a * c;
  if (discriminante < 0) {
  printf("El discriminante es menor a 0\n");
  return 0;
  }

  double root = sqrt(discriminante);

  printf("x1: %.2f\n", (-b + root) / (2.0 * a));
  printf("x2: %.2f\n", (-b - root) / (2.0 * a));
  return 0;
