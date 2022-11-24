#include <stdio.h>
#include <time.h>

long double fatorial (int n) {
  long double resultado = 1;
  
  for(int i = 1; i <= n; i++) {
    resultado = resultado * i;
  }

  return (resultado);
}

int main(void) {

  clock_t start, end;
  double execution_time;
  start = clock();
  
  printf("%Lf\n", fatorial(1000000));

  end = clock();
  execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
  printf("%lf",execution_time);
  
  return 0;
}