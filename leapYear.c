// Program to check whether it is leap year or not.

#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);  

    if (year % 4 == 0) // If year is divisible by 4 and the reminder comes 0 it's 4.
    {
        printf("%d is a leap year.", year);
    }
    else {
        printf("It's not a leap year.");
    }
}
