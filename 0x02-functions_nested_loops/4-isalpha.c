#include "main.h"

/**
 * _isalpha - Check for alphabet character
 * @c: integer parameter that will be checked
 * Return: 1 if c is letter 0 otherwise
 */

int _isaplha(int c)
{
	if (c >= 'a' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
