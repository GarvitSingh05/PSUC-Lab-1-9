#include<stdio.h>

int main(){
    int a, b, c, area;

    printf("Enter length of three sides of the triangle:\n");
    scanf("%d%d%d",&a,&b,&c);

    area = (a+b+c)/2;

    if(a+b>c && b+c>a && a+c>b)
    printf("The area of the traingle is %d\n", area);

    else
    printf("The conditions are not satisfied\n");

    return 0;
}