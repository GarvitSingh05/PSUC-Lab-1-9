// Distance between Two Points

#include<stdio.h>
int main(){
    int x1, x2, y1, y2, d;
    
    printf("Enter X1 :");
    scanf("%d", &x1);

    printf("Enter Y1 :");
    scanf("%d", &y1);

    printf("Enter X2 :");
    scanf("%d", &x2);

    printf("Enter Y2 :");
    scanf("%d", &y2);
    
    d = (x2 - x1)^2 + (y2 - y1)^2;
    
    printf("The distance is : %d\n", d);
    return 0;
}