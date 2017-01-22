#include <stdio.h>
#include <math.h>

#define MAX 600851475143

int main (void) {
  long long int low=1, high=sqrt(MAX);
  int i,j,flag=0, highRes=0;

  while (low < high)    {
    flag=0;
    for(i = 2; i <= low/2; ++i) {
            if(low % i == 0) {
	      flag = 1;
	      break;
            }
    }

    if (!flag &&  low>highRes && MAX%low == 0) {
      highRes=low;
      printf("%i\n", highRes);
    }
    low++;
  }

  //printf("%i\n", highRes);
  return(0);
}
