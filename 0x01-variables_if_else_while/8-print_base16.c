#include <stdio.h>

/**
 * main - Entry point
 * Description: printting number of base 16
 * Return: Always (0)
 */

int main(void)
{
	int nb;

	for (nb = '0'; nb <= '9'; nb++)
	{
		putchar(nb);
	}
	for (nb = 'a'; nb <= 'f'; nb++)
	{
		putchar(nb);
	}
	putchar('\n');
	return (0);
}
