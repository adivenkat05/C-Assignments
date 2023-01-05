// Program to check whether it's vowel or consonant

#include<stdio.h>
#include<ctype.h>

int main()
{
    char a;
    int lowerCase, upperCase;
    printf("Enter the character to check vowel or consonant: ");
    scanf("%c", &a);

    lowerCase = (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u');
    upperCase = (a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U');

    if(!isalpha(a)) //isaplha func is used to check whether the entered character is alphabet or not.
    {
        printf("ERROR: It's not an alphabetic character.");
    } 
    else if(lowerCase || upperCase)
    {
        printf("%c is vowel.\n", a);
    } 
    else 
    {
        printf("%c is consonant.\n", a);
    }
} 
