#include "main.h"

/**
 * print_number - ptints an integer
 * @n: integer parameter
 */

void print_number(int n)
{
	int i, j, k;

	j = 1;
	k = n;
	while (k > 0)
	{
		j *= 10;
		k = k / 10;
	}

	i = n / j + '0';
	_putchar(i);
	while (j != 1)
	{
		j = j / 10;
		i = (n / j) % 10 + '0';
		_putchar(i);
	}
	i = n % 10 + '0';
	_putchar(i);
}
