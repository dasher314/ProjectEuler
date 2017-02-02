#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {
  unsigned int i, j, k, res=0;

  for (i=2520; i<2^32; i++) {
    k=0;
    for (j=1; j<=20; j++) 
      if (i%j == 0) k++;
      if (k==20) {
	res = i;
  	printf("%i\n", res);
	exit(0);
     }
  }
  printf("Number not found ...\n");

}

