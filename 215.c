#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  /* code */
  int ax = atoi(argv[1]); //ax2
  int ay = atoi(argv[2]); //ay3
  int az = atoi(argv[3]); //az2
  int bx = atoi(argv[4]); //bx3
  int by = atoi(argv[5]); //by2
  int bz = atoi(argv[6]); //bz3

  int res1 = (ay * bz) - (az * by);
  int res2 = (az * bx) - (ax * bz);
  int res3 = (ax * by) - (ay * bx);

  printf("el resultado es: (%d,%d,%d)\n", res1, res2, res3);
return 0;
}
