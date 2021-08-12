#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {

  int n = atoi(argv[1]);
  double fibo = 0;
  double aureo = 1.61803398874989;

  for (int i = 0; i < n; i++) {

    fibo = pow(aureo, i) - pow(1 - aureo, i);
    fibo = fibo / sqrt(5);
    printf("%.0f\n", fibo);

  }
  return 0;
}
