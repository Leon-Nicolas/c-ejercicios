#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  srand(time(NULL));
  int c = rand ();
  c = (c % (b - a + 1)) + a;
  printf("c %% b: %d\n", c);

  return 0;
}
