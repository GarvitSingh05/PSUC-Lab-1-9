#include<stdio.h>
int main(){
    int n, k, i, j;
    
    printf("Enter N : ");
    scanf("%d", &n);

    printf("Enter K : ");
    scanf("%d", &k);

    for(i = 1; i <= k; i++){
        for(j = 1; j <= n; j++){
            printf("%d \n", n*i);
            break;
        }
    }
    return 0;
}