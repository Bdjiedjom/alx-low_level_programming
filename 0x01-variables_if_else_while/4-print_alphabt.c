
#include <stdio.h>

/**
 * main - entry point
 * Description: print of alphabet from 'a' to 'z' without 'e' and 'q'
 * Return: Always (0)
 */

int main(void)
{
	int str;

	for (str = 'a'; str <= 'z'; str++)
	{
		if (str != 'e' && str != 'q')
		{
			putchar(str);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
