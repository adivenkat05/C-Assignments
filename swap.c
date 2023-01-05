// Swap the value between two variable.

#include<stdio.h>
int main()
{
    int a, b, temp;

    printf("Enter the value for a: ");
    scanf("%d", &a);
    printf("Enter the value for b: ");
    scanf("%d", &b);

    printf("The value of a and b: %d and %d\n", a, b);

    temp = a; // Value of a will be assigned to temp.
    a = b; // Value of b will be assigned to a.
    b = temp; // Value of temp will be assigned to b.

    printf("The value of a and b: %d and %d", a, b);
}
