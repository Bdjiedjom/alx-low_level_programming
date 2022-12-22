 #include <stdio.h>

/**
 * main - Entry point
 * Description: print of alphabet lowercase and uppercase
 * Return: Always (0)
 */

int main(void)
{
	int str;

	for (str = 'a'; str <= 'z'; str++)
	{
		putchar(str);
	}
	for (str = 'A'; str <= 'Z'; str++)
	{
		putchar(str);
	}
	putchar('\n');
	return (0);
}
