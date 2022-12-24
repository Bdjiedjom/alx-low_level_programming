#include <stdio.h>

/**
 * main - Entry point
 * Description: printting of number base 10 starting from 0
 * Return: always (0)
 */

int main(void)
{
	int nb;

	for (nb = '0'; nb <= '9'; nb++)
	{
		putchar(nb);
	}
	putchar('\n');
	return (0);
}

