#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  /* code */
  int dia = atoi(argv[1]);
  int mes = atoi(argv[2]);
  bool fecha;
  fecha = dia >= 20 && mes == 3 || dia <= 20 && mes == 6 || dia >= 1 && mes != 3 && mes != 6 && mes < 6 && mes > 3;

  printf("%s\n", fecha ? "beldadelo" : "falso");


  return 0;
}
