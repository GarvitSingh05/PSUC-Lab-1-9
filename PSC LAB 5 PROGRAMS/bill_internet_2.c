#include<stdio.h>

int main(){
    int calls, ops;
    float bill;

    printf("Enter the number of calls made : \n");
    scanf("%d", &calls);

    printf("Enter :\n1 if calls are less than 150\n2 if calls are between 151 and 250\n3 if calls are between 251 and 400\n4 if calls are more than 400\n");
    scanf("%d", &ops);

    switch(ops){
        
        case 1:
        bill = 0;
        printf("The bill is %f\n", bill);
        break;
        
        
        case 2:
        bill = 0.9*(calls-150);
        printf("The bill is %f\n", bill);
        break;
        
        
        case 3:
        bill = 0.9*(calls-150) + 1.2*(calls-250);
        printf("The bill is %f\n", bill);
        break;
        
        
        case 4:
        bill = 0.9*(calls-150) + 1.2*(calls-250) + 1.5*(calls-400);
        printf("The bill is %f\n", bill);
        break;

        default:
        printf("Invalid input\n");
        break;
    }
    return 0;
} 