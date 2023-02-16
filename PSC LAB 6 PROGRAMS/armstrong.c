#include <stdio.h>
int main() {
    int n, a, b = 0, c;
    printf("Enter a three-digit integer: ");
    scanf("%d", &n);
    

    for (c = n; c != 0;){
        a = c % 10;
        b += a * a * a;
        c /= 10;
    }

    if (b == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}
