#include "main.h"

/**
 * jack_bauer - prints every minute of the  day
 * Return: void
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '2'; i++)
	{
		for (j = '0'; j <= '3'; j++)
		{
			for (k = '0'; k <= '5'; k++)
			{
				l = '0';
				while (l <= '9')
				{
					if (j == '3' && l == '9')
					{
						_putchar(i);
                                                _putchar(j);
                                                _putchar(':');
                                                _putchar(k);
                                                _putchar(l);
                                                _putchar('\n');
						break;
					}
					else
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

}
