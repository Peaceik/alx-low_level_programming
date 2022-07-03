#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;

	x = 0;
	while (x <= 9)
	{
		y = x + 1;
		while (y <=9)
		{
			z = y + 1;
			while (z <=9)
			{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if (((x * 100) + (y * 10) + z) != 789)
					{
						putchar(',');
						putchar(' ');
					}
					z++;
				}
				y++;
			}
			x++;
		}
		putchar('\n');
		return (0);
}
