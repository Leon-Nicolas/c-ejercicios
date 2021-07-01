#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  int numero = atoi(argv[1]);
  int i = 0;
  srand (time(NULL));
  int ran;
  float suma = 0;

  while (i < numero) {
    ran = rand() % 101;
    printf("%d\n", ran);
    suma += ran;
    i++;
  }
  printf("El promedio de estos numeros es: %.2f\n", suma / numero);
  return 0;
}
