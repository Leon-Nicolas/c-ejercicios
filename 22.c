#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main(int argc, char *argv[]) {
  /* code */
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  bool c;

  c = (a % b == 0) || (b % a == 0);
  printf("%s\n", c ? "beldadelo" : "falso (pelo en chino)" );
  return 0;

}
