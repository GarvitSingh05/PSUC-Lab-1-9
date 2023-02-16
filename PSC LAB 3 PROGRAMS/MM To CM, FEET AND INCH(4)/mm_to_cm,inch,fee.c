//Convert Milimetres to cm, inch and feet

#include<stdio.h>
int main(){
    long mm, cm, inch, feet;
    
    printf("Enter distance in Milimetres :");
    scanf("%ld", &mm);
    
    cm = mm/10;
    inch = mm/25.4;
    feet = mm/304.8;

    printf("\nCM:INCH:FEET - %d:%d:%d\n", cm, inch, feet); 
    return 0;
}
