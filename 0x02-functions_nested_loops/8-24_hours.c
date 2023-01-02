#include "main.h"

/**
 * jack_bauer - prints every minute of the  day
 * Return: void
 */

void jack_bauer(void)
{
	int i, j, k, l, hrs_max;

	for (i = '0'; i <= '2'; i++)
	{
		if (i == '2')
		{
			hrs_max = '3';
		}
		else
		{
			hrs_max = '9';
		}
		for (j = '0'; j <= hrs_max; j++)
		{
			for (k = '0'; k <= '5'; k++)
			{
				l = '0';
				while (l <= '9')
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					l++;
				}
			}
		}
	}

}
