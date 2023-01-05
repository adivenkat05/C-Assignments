// Swap the value between two variable.

#include<stdio.h>
int main()
{
    int a = 5, c;
    int b = 10;

    printf("The value of a and b: %d and %d\n", a, b);

    c = a; // Value of a will be assigned to c.
    a = b; // Value of b will be assigned to a.
    b = c; // Value of c will be assigned to b.

    printf("The value of a and b: %d and %d", a, b);
}
