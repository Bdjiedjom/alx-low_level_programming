
/**
 * swap_int - swaps the values of two integer giving as parameter
 * @a: firt integer pointer point to the first variable to be swap
 * @b: second integer pointer point to the second variable to be swap
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
