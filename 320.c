#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int i = a;

  if (a > b) {
    printf("El segundo numero debe ser mayor o igual al primero, vuelva a intentarlo pero ingresando bien los numeros, burro\n");
  }else{
    printf("Los numeros divisibles por 3 entre %d y %d son:\n", a, b);
    while (i <= b) {
      if (i % 3 == 0) {
      printf("%d\n", i);
      }
      i++;
    }

  }

  while (i <= b) {
    if (i % 3 == 0) {
    printf("%d\n", i);
    }
    i++;
  }

  return 0;
}
