#include <stdio.h>
#include <math.h>

int isPal(int n) {
  int res[6];
  int i,j=0;
  while (n>0) {
    res[j] = n%10; 
    n = n/10;
    j++;
  }
  n=j--;

 for (i=0; i<=n/2; i++,j--) {
  if (res[i] != res[j]) return(0);
 }

 return(1);
}
 

int main (void) {
  int i, j;
  int prod=0, res=0;

  for (i=1; i<1000; i++) {
    for (j=1; j<1000; j++) {
      prod=i*j;
      if (isPal(prod) && prod>res) res=prod;

    }
  }
  printf("%i\n", res);
}

