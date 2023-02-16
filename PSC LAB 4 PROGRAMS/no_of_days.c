#include<stdio.h>

int main(){
    int month, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;
    
    printf("Enter the number of months:\n");
    scanf("%d", &month);

    if(month==1)
    {
        d1 = 31;
        printf("The number of days are %d\n", d1);
    }
    else if (month==2)
    {
        d2 = 59;
        printf("The number of days are %d\n", d2);
    }
    else if (month==3)
    {
        d3 = 90;
        printf("The number of days are %d\n", d3);
    }
    else if(month==4)
    {
        d4 = 120;
        printf("The number of days are %d\n", d4);
    }
    else if(month==5)
    {
        d5 = 151;
        printf("The number of days are %d\n", d5);
    }
    else if(month==6)
    {
        d6 = 181;
        printf("The number of days are %d\n", d6);
    }
    else if(month==7)
    {
        d7 = 212;
        printf("The number of days are %d\n", d7);
    }
    else if(month==8)
    {
        d8 = 243;
        printf("The number of days are %d\n", d8);
    }
    else if(month==9)
    {
        d9 = 273;
        printf("The number of days are %d\n", d9);
    }
    else if(month==10)
    {
        d10 = 304;
        printf("The number of days are %d\n", d10);
    }
    else if(month==11)
    {
        d11 = 334;
        printf("The number of days are %d\n", d11);
    }
    else if(month==12)
    {
        d12 = 365;
        printf("The number of days are %d\n", d12);
    }
    
    return 0;

}