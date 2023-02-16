#include<stdio.h>

#define N 5

int main(){
    int a[N], i, key, count = 0;

    printf("Enter %d integer numbers\n", N);
    for(i=0; i < N; i++)
    scanf("%d", &a[i]);

    printf("Enter the number to be searched ...\n");
    scanf("%d", &key);
    printf("\n");

    for (i=0; i<N; i++){
        if(a[i] == key){
            printf("%d has appeared at position %d in the array.\n", key, i + 1);
            count++;
        }
    }
    printf("\n Final Result : %d has appeared %d times in the array.\n", key, count);
    return 0;
    }