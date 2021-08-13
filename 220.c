#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]) {

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  int d = atoi(argv[4]);
  int e = atoi(argv[5]);

  a = a % 2 != 0 ? a : 0;
  b = b % 2 != 0 ? b : 0;
  c = c % 2 != 0 ? c : 0;
  d = d % 2 != 0 ? d : 0;
  e = e % 2 != 0 ? e : 0;

  printf("La suma de los numeros impares es: %d\n", a + b + c + d + e);


  return 0;
}
