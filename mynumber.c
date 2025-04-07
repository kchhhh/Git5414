#include <stdio.h>

int isPrime(int num) {
  if (num <= 1) return 0;
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) return 0; }
  return 1;
}

int main() {
  for (int i = 1; i <= 100; i++) {
    if (i % 2) printf("%d\n", i);
}
  printf("\n");
  for (int i = 1; i <= 100; i++) {
    if (i % 2 == 0) printf("%d\n", i);
}
  printf("\n");
  for (int i = 1; i <= 100; i++) {
    if (isPrime(i)) printf("%d\n", i)
} 
  return 0;
}
