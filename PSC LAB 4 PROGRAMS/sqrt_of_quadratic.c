#include<stdio.h>

int main(){

    int a,b,c, d, r1, r2, r3, r4;
    
    printf("Enter a, b, c:");
    scanf("%d%d%d", &a,&b,&c);

    d = (b*b) - (2*a*c);

    r1 = (-b+d)/2*a;
    r2 = (-b-d)/2*a;
    r3 = r4 = -b/2*a;

    if (d>0)
    {
        printf("The roots are %d and %d\n", r1, r2);
    }
    else if (d==0)
    {
        printf("The roots are %d and %d\n", r3, r4);
    }
    else if (d<0)
    {
        printf("The roots are imaginary\n");
    }
    
    return 0;
}