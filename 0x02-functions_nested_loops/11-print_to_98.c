#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers to _98
 * @n: int argument of function for reference
 * Return: 0
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			} else
			{
				printf("%d\n", i);
			}
		}
	} else if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			} else
			{
				printf("%d\n", i);
			}
		}
	}
}
