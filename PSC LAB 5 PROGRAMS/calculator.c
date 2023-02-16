#include<stdio.h>

int main(){
    int a, b, ops, result;

    printf("Enter two numbers a and b : \n");
    scanf("%d%d", &a,&b);

    printf("Now enter:\n1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division\n");
    scanf("%d", &ops);

    switch(ops){
        case 1:
        result = a + b;
        printf("The result is %d\n", result);
        break;

        case 2:
        result = a - b;
        printf("The result is %d\n", result);
        break;

        case 3:
        result = a * b;
        printf("The result is %d\n", result);
        break;

        case 4:
        result = a / b;
        b != 0;
        printf("The result is %d\n", result);
        break;

        default:
        printf("Wrong input\n");
        break;
    }
    return 0;
}