#include "main.h"
/**
 * print_last_digit - function that print a last digit.
 *
 * @m: a number to be print a last digit of.
 *
 * Return: (n) on sucsseed.
 *
 */
int print_last_digit(int m)
{
	int n;

	n = m % 10;
	if (n < 0)
		n = -n;

	_putchar('0' + n);
	return (n);
}
