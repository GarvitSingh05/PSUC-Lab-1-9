#include<stdio.h>
int main(){
    int n, i, j, k, c, d;
    
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        if(i%2==0){
            c = i;
            for(j = 1; j <= i; j++){
            printf("%d ",c);
            c += 2;
            }
        }
        else{
            d = i;
            for(k = 1; k <= i; k++)
            printf("%d ", i);
            i += 2;
        }
    printf("\n");
    }
    return 0;
}
