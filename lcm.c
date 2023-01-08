// Progarm to calculate LCM. (Least Common Multiple)

#include <stdio.h>

int	main()
{
	int n1, n2, lcm, gcd;
    
	printf("Enter the integer to calculate LCM: ");
	scanf("%d %d", &n1, &n2);

	for (int i = 1; i <= n1 && i <= n2; i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			gcd = i;
		}
	}

    lcm = (n1 * n2) / gcd; // Formula to calculate using GCD.

	printf("The LCM of %d and %d is %d.\n", n1, n2, lcm);
}
