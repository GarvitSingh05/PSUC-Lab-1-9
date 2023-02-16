#include<stdio.h>

char main(){
    
    char c;

    printf("Enter a character:\n");
    scanf("%c", &c);

    if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c == 'u' || c=='U')
    printf("The character %c is a Vowel\n", c);
     
    else
    printf("The character '%c' is a Consonant\n", c);

    return 0;
}