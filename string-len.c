// Program to calculate length of string.

#include <stdio.h>
int main()
{
    char name[20];
    int i;
    printf("Enter your name: ");
    scanf("%s", name);

    for (i = 0; name[i] != '\0'; i++);
    printf("Length of the string: %d", i);
}
