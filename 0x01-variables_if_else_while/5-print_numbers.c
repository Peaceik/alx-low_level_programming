#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int w, x, y, z;

	for (w = 0; w <= 9; w++)
	{
		for (x = 0; x <= 9 ; x++)
		{
			for (y = w; y < 10; y++)
			{
				for (z = x + 1; z < 10; z++)
				{
					putchar((w) + '0');
					putchar((x) + '0');
					putchar(' ');
					putchar((y) + '0');
					putchar((z) + '0');
					if (w == 9 && x == 9 && y == 9 && z == 9)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
