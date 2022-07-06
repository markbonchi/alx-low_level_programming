#include "main.h"


/**
 * times_table - prints times tables
 * @n: int argument of function to be timesed
 * Return: 0
 */

void times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= 9; i++)
		{
			for (j = 0; j <= 9; j++)
			{
				k = i * j;
				if (j == 0)
				{
					_putchar(k + '0');
				} else if (k < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				} else if (k >= 10 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				} else if ( >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(k / 100 + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0')
				}
			}
			_putchar('\n');
		}
	}
}
