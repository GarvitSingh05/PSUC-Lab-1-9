#include<stdio.h>

int main(){
    int calls, ops;
    float bill;

    printf("Enter the number of calls made : \n");
    scanf("%d", &calls);

    printf("Enter :\n1 if calls are less than 100\n2 if calls are between 100 and 150\n3 if calls are between 151 and 200\n4 if calls are more than 200\n");
    scanf("%d", &ops);

    switch(ops){
        
        case 1:
        bill = 200;
        printf("The bill is %f\n", bill);
        break;
        
        
        case 2:
        bill = 200 + 0.60*(calls-100);
        printf("The bill is %f\n", bill);
        break;
        
        
        case 3:
        bill = 200 + 0.6*50 + 0.50*(calls-150);
        printf("The bill is %f\n", bill);
        break;
        
        
        case 4:
        bill = 200 + 0.6*50 + 0.5*50 + 0.4*(calls-200);
        printf("The bill is %f\n", bill);
        break;

        default:
        printf("Invalid input\n");
        break;
    }
    return 0;
}