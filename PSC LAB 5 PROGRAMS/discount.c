#include<stdio.h>

int main(){
    float cp, discount;
    int ops;

    printf("Enter the cost price :\n");
    scanf("%f", &cp);

    printf("Enter :\n1 if Cost Price is greater than 800\n2 if Cost Price is between 500 and 800\n3 if Cost Price is less than 500\n");
    scanf("%d", &ops);

    switch(ops){
        case 1:
        discount = 0.25*cp;
        printf("The discount is %.3f\n", discount);
        break;

        case 2:
        discount = 0.20*cp;
        printf("The discount is %.3f\n", discount);
        break;

        case 3:
        discount = 0.0;
        printf("The discount is %.3f\n", discount);
        break;
    }
    return 0;
}