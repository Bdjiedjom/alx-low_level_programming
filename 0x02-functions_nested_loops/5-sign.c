#include "main.h"

/**
 * print_sign - will print the sign of a number
 * @n: integer parameter that the sign will be print
 * Return: will be 1 if the number is greater than 0,
 * 0 if the number is zero and -1 if
 * number is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
