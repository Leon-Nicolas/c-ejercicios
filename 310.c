#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    int max = -99999999;
    int min = 999999999;
    double mid = 0;

    for (int i = 1; i < argc; i++) {
      int ma = atoi(argv[i]);
      if (ma > max) {
        max = ma;
      }
    }

    for (int i = 1; i < argc; i++) {
      int mi = atoi(argv[i]);
      if (mi < min) {
        min = mi;
      }
    }

    for (int i = 1; i < argc; i++) {
      mid = mid + atoi(argv[i]);
    }
    mid = mid / (argc-1);

    printf("El maximo es %d\n", max);
    printf("El minimo es %d\n", min);
    printf("El promedio es %.2f\n", mid);



  return 0;
}
