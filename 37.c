#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

  int n = 1;


  while (n < 65) {
    double logaritmo = log(n);
    double cuadradoN = pow(n, 2);
    double cuboN = pow(n, 3);
    double nCuadrado = pow(2, n);

      printf("-%.2f\t", logaritmo);
      printf("-%d\t", n);
      printf("-%.2f\t", logaritmo * n);
      printf("-%.2f\t",cuadradoN);
      printf("-%.2f\t",cuboN);
      printf("-%.2f\n",nCuadrado);
      n *= 2;
    }

  return 0;
}
