#include <stdio.h>

int main (void) {
  int sols[1000];
  int i,j,sum=0;

  // find all mod 0s of 3,5 and store solutions
  for (i=1; i<1000; i++) {
    if (i%3==0 || i%5==0) { 
	sols[j]=i;
	j++;
        fprintf(stdout, "%i\n", i);
    }
  }  

  // now summ up the solutions
  for (i=0; i<j; i++) 
    sum=sum+sols[i];
  fprintf(stdout, "%i\n", sum);
  return(0);
} 
