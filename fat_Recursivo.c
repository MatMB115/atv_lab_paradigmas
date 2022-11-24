#include <stdio.h>

long long int fatorial (long long int n) {
  if (n == 0 || n == 1) {
    return 1;
  }

  return (fatorial(n-1) * n);
}

int main(void) {
  
  printf("%lld\n", fatorial(10));
  
  return 0;
}