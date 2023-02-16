// Find Sum of Four Digits

#include<stdio.h>
int main(){
    int sum, n;
    
    printf("Enter the four digit number:");
    scanf("%d", &n);

    sum = (n%10000)/1000 + (n%1000)/100 + (n%100)/10 + (n%10);
    
    printf("\nThe sum of the digits is: %d\n", sum);
    return 0;
}
