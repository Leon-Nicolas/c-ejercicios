#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){
  srand(time(NULL));
  int r = rand() % 8 + 1;

  if (r >= 6) {
    printf("6\n");
  }else{
    printf("%d\n", r);
  }

}
