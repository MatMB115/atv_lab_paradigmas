#include <stdio.h>
#include <time.h>

long double fatorialDouble (int n) {
  long double resultado = 1;
  
  for(int i = 1; i <= n; i++) {
    resultado = resultado * i;
  }

  return (resultado);
}

unsigned long long int fatorialInt (int n) {
  long long int resultado = 1;
  
  for(int i = 1; i <= n; i++) {
    resultado = resultado * i;
  }

  return (resultado);
}

int main(void) {

  clock_t start, end;
  double execution_time;
  //Primeira metrica
  start = clock();
  printf("%lld\n", fatorialInt(5));
  end = clock();
  execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
  printf("%lf\n",execution_time);
  
  //Segunda metrica
  start = clock();
  printf("%.0Lf\n", fatorialDouble(100));
  end = clock();
  execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
  printf("%lf",execution_time);
  
  return 0;
}