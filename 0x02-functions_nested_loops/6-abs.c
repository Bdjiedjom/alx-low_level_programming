#include "main.h"

/**
 * _abs - must compute the absolute value of an integer
 * @c: is an integer
 * Return: always 0 (sucess)
 */

int _abs(int c)
{
	int ab;

	if (c <= 0)
	{
		ab = (-1) * c;
	}
	else if (c > 0)
	{
		ab = c;
	}
	return (ab);
}
