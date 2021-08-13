#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int dinero = atoi(argv[1]);

  // de 1000
  printf("1000: %d\n", dinero / 1000);
  dinero = dinero % 1000;
  // de 500
  printf("500: %d\n", dinero / 500);
  dinero = dinero % 500;
  // de 200
  printf("200: %d\n", dinero / 200);
  dinero = dinero % 200;
  // de 100
  printf("100: %d\n", dinero / 100);
  dinero = dinero % 100;
  // de 50
  printf("50: %d\n", dinero / 50);
  dinero = dinero % 50;
  // de 20
  printf("20: %d\n", dinero / 20);
  dinero = dinero % 20;
  // de 10
  printf("10: %d\n", dinero / 10);
  dinero = dinero % 10;
  return 0;
}
