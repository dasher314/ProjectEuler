#include <stdio.h>


#define MAX_VAL 4000000
long long int retVal=0;

long long int fib(int n) { 
  if(n <= 0) return 0;
  if(n > 0 && n < 3) return 1;

  int result = 0;
  int preOldResult = 1;
  int oldResult = 1;
  
  for (int i=2;i<n;i++) { 
    result = preOldResult + oldResult;
    preOldResult = oldResult;
    oldResult = result;
    
    if(result >= MAX_VAL) return result;
    else {
      n++;
      if (result%2==0) retVal = retVal + result;
    }
  }
}
  
int main (void) {
  int i,j;

  fib(MAX_VAL);
  
  fprintf(stdout, "%i\n", retVal);
  return(0);
} 
