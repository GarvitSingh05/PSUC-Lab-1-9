#include <stdio.h>

int main() {

  int n, i;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  // Since, 0 and 1 are not prime numbers, we have : 
  if (n == 0 || n == 1){
    printf("%d is not a prime number.\n", n);}

  for (i = 2; i <= n ; ++i) {

    // if n is divisible by i, then n is not prime
    if (n % i == 0) {
      printf("%d is not a prime number.\n", n);
      break;
    }
    else{
        printf("%d is a prime number\n");
    }
  return 0;
  }
}    

  