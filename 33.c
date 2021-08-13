#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){

  srand(time(NULL));
  int n = rand() % 8 + 1;

  if (n >= 6) {
    printf("6\n");
  }else{
    printf("%d\n", n);
  }

  return 0;
}
