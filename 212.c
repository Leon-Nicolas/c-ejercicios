#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main(int argc, char *argv[]) {
  /* code */
  int a = atoi(argv[1]);
  srand(time(NULL));
  int b = rand();
  b = b % 100;
  bool res = (a == b);
  printf("%d\n", b);
  printf("%s\n", res ? "Ganaste!" : "Peldiste!");

  return 0;
}
