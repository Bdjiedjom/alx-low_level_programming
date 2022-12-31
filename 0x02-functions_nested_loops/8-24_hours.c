#include "main.h"

/**
 * jack_bauer - prints every minute of the  day
 * Return: always 0
 */

void jack_bauer(void)
{
	int i, j, k, l;
	int counter;

	counter = 0;
	while (counter <= 1440)
	{
		for (i = '0'; i <= '2'; i++)
		{
			for (j = '0'; j <= '9'; j++)
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
						l++;
					}
				}
			}
		}
		counter++;
	}
}
