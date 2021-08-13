#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int n = atoi(argv[1]);
  int i = 1;
  printf("%d al reves es: ", n);
  while (n % 10 != 0) {
    printf("%d", n % 10);
    n = n / 10;
  }

  printf("\n");



  return 0;
}
