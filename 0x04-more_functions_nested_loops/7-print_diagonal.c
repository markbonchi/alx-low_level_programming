#include "main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: int argument of function for unit length of line
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		if (i > 0)
		{
			for (j = 0; j <= i; j++)
			{
				if (j > 1)
				{
					_putchar(' ');
				}
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
