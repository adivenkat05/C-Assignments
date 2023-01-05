// Program to check even or odd

#include<stdio.h>
int main()
{
    int numb;
    printf("Enter the number: ");
    scanf("%d", &numb);

    if (numb % 2 == 0) { // If an int can be divided by 2 and the reminder is 0 it's even number
        printf("%d is an even number.\n", numb);
    } else {
        printf("%d is a odd number.\n", numb);
    }
}
