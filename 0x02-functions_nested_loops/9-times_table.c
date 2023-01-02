#include "main.h"

/**
 * times_table - function that prints 9 times table, starting with 0
 * Return: void
 */

void times_table(void)
{
	int i, j, tens, unit, prod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
			tens = prod / 10;
			unit = prod % 10;
			if (j != 9)
			{
				_putchar(tens + '0');
				_putchar(unit + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(tens + '0');
				_putchar(unit + '0');
				_putchar('\n');
			}
		}
	}
}
