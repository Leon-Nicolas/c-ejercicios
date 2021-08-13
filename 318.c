#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int x = atoi(argv[1]);
  int y = atoi(argv[2]);

  if (x > 0 && y > 0) {
    printf("El vector (%d, %d) pertenece al I cuadrante\n", x, y);
  } else if (x > 0 && y < 0) {
    printf("El vector (%d, %d) pertenece al IV cuadrante\n", x, y);
  } else if (x < 0 && y > 0) {
    printf("El vector (%d, %d) pertenece al II cuadrante\n", x, y);
  } else if (x < 0 && y < 0) {
    printf("El vector (%d, %d) pertenece al III cuadrante\n", x, y);
  } else{
    printf("El vector (%d, %d) no pertenece a ningun cuadrante\n", x, y);
  }



  return 0;
}
