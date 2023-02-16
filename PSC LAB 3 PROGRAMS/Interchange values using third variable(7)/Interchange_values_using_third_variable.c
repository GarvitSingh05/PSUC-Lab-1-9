// Interchange values using Third Variable

#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter first number :");
    scanf("%d", &a);
    printf("Enter second number :");
    scanf("%d", &b);

    c = a;

    a = b;

    b = c;

    printf("\nAfter interchanging : \nthe first number is : %d\n", a);
    printf("The second number is : %d\n", b);
    
    return 0;
}