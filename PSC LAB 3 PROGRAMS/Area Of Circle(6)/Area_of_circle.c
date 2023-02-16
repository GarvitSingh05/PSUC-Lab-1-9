// Area of Circle

#include<stdio.h>
int main(){
    float radius, area;
    
    printf("Enter the radius of circle in CMs : ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("\nThe Area of Circle is - %f sqaure cm\n", area);
    return 0;
}