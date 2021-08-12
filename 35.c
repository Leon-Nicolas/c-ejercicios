#include <stdio.h>
#include <stdlib.h>

int main (void){

int n = 1000;
int m = 1001;

while (n < 2000) {
  printf("%d ", n);
  if (m % 5 == 0) {
    printf("\n");
  }
  n++;
  m++;
}
printf("\n");





return 0;
}
