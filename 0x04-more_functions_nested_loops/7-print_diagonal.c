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
		for (j = 0; j <= n; j++)
		{
			if (j > 0)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		_putchar('\n');
	}
}
