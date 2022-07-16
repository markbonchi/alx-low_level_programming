#include "main.h"

/**
 * print_number - ptints an integer
 * @n: integer parameter
 */

void print_number(int n)
{
	int i, j, k;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	j = 1;
	k = n;
	while (k / j > 9)
	{
		j *= 10;
	}

	i = n / j + '0';
	_putchar(i);
	while (j > 1)
	{
		j = j / 10;
		i = (n / j) % 10 + '0';
		_putchar(i);
	}
}
