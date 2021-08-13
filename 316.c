#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int n = atoi(argv[1]);
  int i = 1;

  while (i <= n) {
    printf("%d ", i);
    printf("%d\n", i * i);
    i++;
  }



  return 0;
}
