#include "main.h"
/**
 * times_table - function that print 9 times tables.
 *
 * Return: (0) on success.
 */
void times_table(void)
{
	int m, n, res;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			res = n * m;
			if (n == 0)
			{
				_putchar('0');
			}
			else if (res <= 9)
			{
				_putchar(' ');
				_putchar(res + '0');
			}
			else
			{
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
			if (n != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
