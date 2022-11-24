#include <stdio.h>
#include <time.h>

long double fatorial (long double n) {
  if (n == 0 || n == 1) {
    return 1;
  }

  return (fatorial(n-1) * n);
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