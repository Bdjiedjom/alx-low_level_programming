#include <stdio.h>

/**
 * main - Entry point
 * Description: Printting of alphabet in reverse mode
 * Return: always (0)
 */

int main(void)
{
	int str;

	for (str = 'z'; str >= 'a'; --str)
	{
		putchar(str);
	}
	putchar('\n');
	return (0);
}
