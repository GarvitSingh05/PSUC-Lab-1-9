#include<stdio.h>

int main(){
    int n;
    printf("Enter a random number:\n");
    scanf("%d", &n);

    if (n%2==0){
        printf("The number is Even");
    }
    else{
        printf("The number is Odd\n");
    }
    return 0;
    
}