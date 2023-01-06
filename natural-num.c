// Program to Calculate the Sum of Natural Numbers

#include<stdio.h>
int main()
{
    int sum = 0, i, n; 

    printf("Enter the value for n: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i ++){
        sum = sum + i;
    }

    printf("Sum = %d.\n", sum);
}
