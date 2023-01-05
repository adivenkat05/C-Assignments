// Program to find the largest number among three numbers

#include<stdio.h>
int main()
{
int a, b, c;

printf("Enter the value for a: ");
scanf("%d", &a);

printf("Enter the value for b: ");
scanf("%d", &b);

printf("Enter the value for c: ");
scanf("%d", &c);

if(a >= b && a >= c) { // If a is greater than b or c, a is largest
    printf("%d is the largest number.\n", a);
}
if(b >= a && b >= c) { // If b is greater than a or c, b is largest
    printf("%d is the largest number.\n", b);
}
if(c >= a && c >= b) { // If c is greater than a or b, c is largest
    printf("%d is the largest number.\n", c);
}
}
