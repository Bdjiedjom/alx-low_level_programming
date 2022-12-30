#include <stdio.h>

/**
 * main - Entry point
 * Description: printing of two two-digit numbers combination
 * Return: Always (0)
 */

int main(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
	{

		for (j = '0'; j <= '9'; j++)
		{

			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
				if (((l + k) > (i + j) && k >= i) || i < k)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i + j + k + l == 227 && i == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
