// Fibonacci Series

#include <stdio.h>

int	main(void)
{
	int num1 = 0, num2 = 1, nextNum, n;

	printf("Enter number of terms to be printed: ");
	scanf("%d", &n);

	nextNum = num1 + num2;

	printf("Fibonacci Series: %d, %d, %d, ", num1, num2, num2);
	for (int i = 3; i <= n; ++i)
	{
		num1 = num2;
		num2 = nextNum;
		nextNum = num1 + num2;
		printf("%d, ", nextNum);
	}
}
