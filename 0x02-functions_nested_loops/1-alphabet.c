#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase followed by new line
 * Return: Always (0)
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}