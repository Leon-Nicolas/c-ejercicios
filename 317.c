#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int n = atoi(argv[1]);
  int numero = 1;

  printf("Los numeros entre 1 y 100 que al ser dividios por %d dan resto 3 son:\n", n);

  while (numero <= 100) {
    if (numero % n == 3) {
      printf("%d ", numero);
    }
    numero++;
  }
  printf("\n");


  return 0;
}
