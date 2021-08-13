#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  /* code */
  int v1a = atoi(argv[1]);
  int v1b = atoi(argv[2]);
  int v2a = atoi(argv[3]);
  int v2b = atoi(argv[4]);
  int res1 = v1a * v2a;
  int res2 = v1b * v2b;

  printf("el resultado es: (%d,%d)\n", res1, res2 );
  return 0;
}
