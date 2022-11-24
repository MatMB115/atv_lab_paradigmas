#include <stdio.h>
#include <time.h>

long double fatorialDouble (long double n) {
  if (n == 0 || n == 1) {
    return 1;
  }

  return (fatorialDouble(n-1) * n);
}

long long int fatorialInt (long long int n) {
  if (n == 0 || n == 1) {
    return 1;
  }

  return (fatorialInt(n-1) * n);
}

int main(void) {

  clock_t start, end;
  double execution_time;
  //Primeira metrica
  start = clock();
  printf("%lld\n", fatorialInt(100));
  end = clock();
  execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
  printf("%lf\n",execution_time);
  
  //Segunda metrica
  start = clock();
  printf("%Lf\n", fatorialDouble(100));
  end = clock();
  execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
  printf("%lf",execution_time);
  
  return 0;
}