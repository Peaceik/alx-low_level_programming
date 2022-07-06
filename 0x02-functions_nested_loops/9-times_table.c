#include "main.h"

/**
 * times_table - 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int p, k, opp;

	for (p = 0; p <= 9; p++)
	{
		_putchar(48);
		for (k = 1; k <= 9; k++)
		{
			opp = p * k;
			_putchar(44);
			_putchar(32);
			if (opp <= 9)
			{
				_putchar(32);
				_putchar(opp + 48);
			}
			else
			{
				_putchar((opp / 10) + 48);
				_putchar((opp % 10) + 48);
			}
		}
		_putchar('\n')
	}
}
