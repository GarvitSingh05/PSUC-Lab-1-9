// Fahrenheit to Celsius

#include<stdio.h>

int main(){
    float celsius, fahrenheit;
    
    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32 * 5/9);

    printf("%f Fahrenheit = %f Celsius\n", fahrenheit, celsius);
    return 0;
}