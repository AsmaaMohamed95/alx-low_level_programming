#include "main.h"
/**
 * jack_bauer - a function that prints every
 * minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 * Return: Always succsseed
 */
void jack_bauer(void)
{
	int h, min;

	for (h = 00; h < 24; h++)
	{
		for (min = 00; min < 60; min++)
		{
				_putchar(h / 10 + '0');
				_putchar(h % 10 + '0');
				_putchar(':');
				_putchar(min / 10 + '0');
				_putchar(min % 10 + '0');
				_putchar('\n');
		}
	}
}
