#include<stdio.h>

int main(){
    int num, a = 0, b = 0, c = 1;
    
    printf("Enter a decimal  number:\n");
    scanf("%d", &num);

    while(num){
        b = num % 2;
        num = num / 2;
        a = a + (b*c);
        c = c * 10;
    }
    printf("Binary - %d\n", a);

    return 0;
}