#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  /* code */
  float salarioXHora = atof(argv[1]);
  float hsTrabajadas = atof(argv[2]);
  float ganancia     = salarioXHora * hsTrabajadas;


  printf("con un salario de $%.2f por hora, y %.2f horas trabajadas, ganas: $%.2f\n",salarioXHora, hsTrabajadas, ganancia);

  return 0;
}
