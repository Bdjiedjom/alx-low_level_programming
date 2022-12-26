#include <stdio.h>

/**
 * main - Entry point
 * Description: printing of numbers separete by ',' and space
 * Return: alwyas (0)
 */

int main(void)
{
	int nb;

	for (nb = '0'; nb <= '9'; nb++)
	{
		putchar(nb);
		if (nb != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
