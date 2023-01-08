// Program to display Alphabets.

#include <stdio.h>

int	main()
{
	char characters;
	printf("Enter 'u' to display Upper case characters or 'l' to display Lower case characters: ");
	scanf("%c", &characters);

	if (characters == 'u')
	{
		for (char a = 'A'; a <= 'Z'; a++)
		{
			printf("%c\n", a);
		}
	}
	else
	{
		for (char a = 'a'; a <= 'z'; a++)
		{
			printf("%c\n", a);
		}
	}
}
