// Program to calculate the number of digits in a integers.

#include <stdio.h>

int	main()
{
	unsigned long long int	number;
	int	count = 0;

	printf("Enter a number: ");
	scanf("%llu", &number);
	while (number != 0)
	{
		number = number / 10;
		count++;
	}
	printf("The number of digits in an integer is : %d", count);
}
