#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
int main(int argc, char *argv[]) {
  /* code */
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);


  printf("%s\n", (a >= b + c || b >= a + c || c >= a + b)  ? "falso (pelo en chino)" : "beldadelo" );
  return 0;

}
