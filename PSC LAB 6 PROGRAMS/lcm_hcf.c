#include <stdio.h>

int main() {
  int a, b, p, q, i, hcf, lcm;
  

  printf("Enter two integers\n");
  scanf("%d%d", &p, &q);

    a = p;
    b = q;

  for (; b != 0 ;) {
    i = b;
    b = a % b;
    a = i;
  }

  hcf = a;
  lcm = (p*q)/hcf;

  printf("Highest Common Factor of %d and %d = %d\n", p, q, hcf);
  printf("Least Common Multiple of %d and %d = %d\n", p, q, lcm);

  return 0;
}