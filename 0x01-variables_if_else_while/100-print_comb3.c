#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, s;

	i = 48;
	s = 48;

	while (s < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (s != i && s < i)
			{
				putchar(s);
				putchar(i);
				if (i == 57 && s == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		s++;
	}
	putchar('\n');
	return (0);
}
