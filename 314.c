#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int i = 1;
  int res = 1;

  while (i <= n) {
    res = res * i;
    i++;
  }
  printf("El factorial de %d es %d\n", n, res);

  return 0;
}
