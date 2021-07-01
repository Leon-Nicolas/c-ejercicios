#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i = 1000;

  while (i < 2000) {
   printf("%d %d %d %d %d\n ", i, i++, i++, i++, i++);
   i++;
  }

  return 0;
}
