#include <primesieve.h>
#include <stdio.h>
#include <math.h>

#define MAX 600851475143

int main (void) {
  long long int low=1, high=sqrt(MAX);
  int highRes=0;

  primesieve_iterator it;
  primesieve_init(&it);
  uint64_t prime;

  while ((prime = primesieve_next_prime(&it)) <= high) {

    if (  MAX%prime == 0) highRes=prime;
  }

  printf("%i\n", highRes);

  primesieve_free_iterator(&it);
  return(0);
}
