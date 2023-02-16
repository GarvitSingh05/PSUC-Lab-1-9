#include<stdio.h>

int main(){
    int ops;
    float units, bill;

    printf("Enter the Units Consumed :\n");
    scanf("%f", &units);

    printf("Enter :\n1 if consumed units are between 1 and 100\n2 if consumed units are between 101 and 200\n3 if consumed units are between 201 and 400\n4 if consumed units are more than 400\n");
    scanf("%d", &ops);

    switch(ops){
        case 1:
        bill = 0;
        printf("The bill is %.3f\n", bill);
        break;

        case 2:
        bill = 1.5*(units-100);
        printf("The bill is %.3f\n", bill);
        break;

        case 3:
        bill = 2.5*(units-100);
        printf("The bill is %.3f\n", bill);
        break;

        case 4:
        bill = 3.5*(units-100);
        printf("The bill is %.3f\n", bill);
        break;
    }
    return 0;
}