#include<stdio.h>

int main(){
    int num, ans, rem;

    printf("Enter a number:\n");
    scanf("%d", &num);

    ans = 0;

    while( num > 0 ) {
        int rem = num % 10;
        num /= 10;
        ans = ans * 10 + rem;
        }
    printf("Reverse - %d\n", ans);    
}