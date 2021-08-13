#include <stdlib.h>
#include <stdio.h>

int main(int argc, char  *argv[]) {
  int dia = atoi(argv[1]);


    printf("Año: %d\n", dia / 365);
    dia = dia % 365;

    printf("Semana: %d\n", dia / 7);
    dia = dia % 7;

    printf("Dia: %d\n", dia / 1);
    dia = dia % 1;



  return 0;
}
