#include <primesieve.h>
#include <stdio.h>
#include <math.h>

int main (void) {
  int n = 10001, i;
  primesieve_iterator it;
  primesieve_init(&it);
  uint64_t prime;

  //while ((prime = primesieve_next_prime(&it)) && ((++i) <= n)) ;
  for (i=1; i<=n; i++) {
    prime=primesieve_next_prime(&it);
  }  

  printf("%i\n", prime);

  primesieve_free_iterator(&it);
  return(0);
}
