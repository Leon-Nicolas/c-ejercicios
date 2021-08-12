#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);

  if (a == b && b == c) {
    printf("Los numeros son iguales!\n");
  }else{
    printf("Los numeros no son iguales\n");
  }


    return 0;
  }
