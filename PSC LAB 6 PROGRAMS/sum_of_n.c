#include<stdio.h>

int main(){
    int i, n, sum;

    printf("Enter a Natural Number: \n");
    scanf("%d", &n);

    sum = 0;

    for(i=1 ; i <= n ; i++){
        sum = sum + i;
    }

    printf("The Sum is %d\n", sum);

    return 0;
}