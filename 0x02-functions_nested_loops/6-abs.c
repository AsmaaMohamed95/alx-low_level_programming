#include "main.h"
/**
 * _abs - function that compute an absolute valu i.
 *
 * @i: integer to be computed.
 *
 * Return: Return (i) on succsseed Always (0).
 *
 */
int _abs(int i)
{
	if (i >= 0)
	{
		i = i;
	}
	else if (i < 0)
	{
		i = -i;
	}
	return (i);
}
