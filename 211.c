#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(int argc, char *argv[]) {
  /* code */
  int x  = atoi(argv[1]);
  int y  = atoi(argv[2]);
  int z  = atoi(argv[3]);
  bool c;
  c = (x > y && y > z) || (x < y && y < z);

  printf("%s\n", c ? "beldadelo" : "falso (pelo en chino)" );
  return 0;
}
