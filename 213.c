#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  /* code */
  int a  = atoi(argv[1]);
  int b  = atoi(argv[2]);
  printf("a vale: %d y b vale: %d\n", a, b);

  a = a + b;
  b = a - b;
  a = a - b;
  printf("ahora a vale: %d y b vale: %d\n", a, b);
  return 0;
}
