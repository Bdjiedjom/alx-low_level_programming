#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @c: integer number
 * Return: the value of the last digit
 */

int print_last_digit(int c)
{
	int lst = c % 10;

	if (c < 0)
	{
		lst = (-1) * lst;
	}
	_putchar(lst +'0');
	return (lst);
}
