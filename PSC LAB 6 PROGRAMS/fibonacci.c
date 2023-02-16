#include<stdio.h>
int main(){
    int a, b, count, n, temp;

    printf("Enter the number of fibonacci numbers to be printed:\n");
    scanf("%d", &n);

    a = 0;
    b = 1;

    for(count = 2; count <= n; count ++){
        temp = b;
        b = b + a;
        a = temp;
        printf("%d\n", b);
    }
}        