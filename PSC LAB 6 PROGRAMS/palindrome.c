#include<stdio.h>

int main(){
    int n, a, b = 0, c;
    printf("Enter a number:\n");
    scanf("%d", &n);

    c = n;

    while(n>0)
    {
        a = n % 10;
        b = (b * 10) + a;
        n = n / 10;
    }
    if(c==b)
    {
        printf("Palindrome number\n");
    }
    else{
        printf("Not a Palindrome Number\n");
    }
    return 0;
}