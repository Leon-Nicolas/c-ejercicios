#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  int main(int argc, char *argv[]) {
    /* code */
  srand(time(NULL));
  int c = rand ();
  int d = rand ();
  c = c % 6 + 1;
  d = d % 6 + 1;
  printf("%d\n", c + d);

  return 0;
}
