#include <stdio.h>

/**
 * main - Entry point
 * Description: Printting alphabet in lowercase
 * Return: always 0
 */

int main(void)
{
	int str;

	for (str = 'a'; str <= 'z'; str++)
	{
		putchar(str);
	}
	putchar('\n');
	return (0);
}
