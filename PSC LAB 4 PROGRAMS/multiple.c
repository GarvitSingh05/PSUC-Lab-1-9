#include<stdio.h>

int main(){
    int a, b;

    printf("Enter two numbers A & B:");
    scanf("%d%d", &a,&b);

    if (a%b==0)
    printf("A is a multiple of B\n");
    
    else if(b%a==0)
    printf("B is a multiple of A\n");
    
    else
    printf("A and B are not multiples of each other\n");

    return 0;
}