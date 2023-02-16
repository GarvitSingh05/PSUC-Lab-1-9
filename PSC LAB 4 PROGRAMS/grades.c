#include<stdio.h>

int main(){
    int marks;

    printf("Enter the marks out of 10:");
    scanf("%d", &marks);

    if(marks >=9 && marks <= 10)
    printf("Grade - A\n");

    else if(marks >=7 && marks <= 8)
    printf("Grade - B\n");

    else if(marks >=5 && marks <=6)
    printf("Grade - C\n");

    else if(marks >=3 && marks <=4)
    printf("Grade - D\n");

    else if(marks<3)
    printf("Grade - F\n");

    return 0;
}