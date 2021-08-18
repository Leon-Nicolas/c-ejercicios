#include <stdio.h>
#include <stdlib.h>

int main(int argc, char argv[]) {
  / code */
  double xi = atoi (argv[1]);
  double vi = atoi (argv[2]);
  double t  = atoi (argv[3]);
  double res = (xi + (vi * t) + (9.8 * (t * t)) / 2; 
                
  printf("%f\n", res);

  return 0;
}
