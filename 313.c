#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int n = atoi(argv[1]);
  int a = 0;
  int b = 1;

  for (int i = 1; i <= n; i++) {
    printf("%d\n", a);
    printf("%d\n", b);
    a = a + b;
    b = a + b;
  }


  return 0;
}
