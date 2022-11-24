#include <stdio.h>

long long int fatorial (int n) {
  int resultado = 1;
  
  for(int i = 1; i <= n; i++) {
    resultado = resultado * i;
  }

  return (resultado);
}

int main(void) {
  
  printf("%lld\n", fatorial(10));
  
  return 0;
}