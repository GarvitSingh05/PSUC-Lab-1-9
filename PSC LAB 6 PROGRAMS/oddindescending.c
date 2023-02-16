#include<stdio.h>

int main(){
    int n, i, result;
    printf("Enter a number:\n");
    scanf("%d", &n);

    printf("Odd numbers in Descending order are :\n");

    for(i = n - 1; i >= 0; i--)
    {
        result = 1 + 2*i;
        if(result <= n){
        printf("%d\n", result);
        }
        
    }
    return 0;
}