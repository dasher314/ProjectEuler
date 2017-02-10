#include <stdio.h>
#include <math.h>

int main (void) {
  int n = 100, i;
  int sumsq=0, sqsum=0;

  for (i=1; i<=n; i++) {
    sumsq = sumsq + pow(i,2);
    sqsum = sqsum + i;
  } 
  sqsum = pow(sqsum,2); 

  printf("%i\n", sqsum-sumsq);

  return(0);
}
