// Interchange Values without Third Variable

#include<stdio.h>
int main(){
    double a, b;
    printf("Enter first number :");
    scanf("%lf", &a);
    printf("Enter second number :");
    scanf("%lf", &b);

    a = a - b;

    b = a + b;
    
    a = b - a;

    printf("After Interchanging, first number : %lf\n", a);
    printf("After Interchanging, second number : %lf\n", b);
    
    return 0;
}