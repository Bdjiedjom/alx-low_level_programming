#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints stringd in reverse
 * @s: character pointer to string to be reverse
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int i, len;
	char str[] = s;

	len = strlen(s);
	for (i = len; i = 0; i--)
	{
		_putchar(str[i]);
	}
}
