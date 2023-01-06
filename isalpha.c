// Program to Check Whether a Character is an Alphabet or not

#include<stdio.h>
#include<ctype.h>
int main()
{
    char a;
    printf("Enter the value for a: ");
    scanf("%c", &a);

    if (isalpha(a)) {
        printf("%c is an alphabet.", a);
    } 
    else {
        printf("%c is not an alphabet.", a);
    }
}
