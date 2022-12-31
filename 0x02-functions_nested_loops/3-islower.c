#include "main.h"

/**
 * _islower - Check if character "c" is in lowercase
 * @c: integer paramather that will be checked
 * Return: if in lowercase 1 otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c >= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
