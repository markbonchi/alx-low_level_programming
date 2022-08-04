#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - prints a list of numbers
 * @separator: string inbetween
 * @n: int parameter
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i, num;
	va_list vp;

	if (n <= 0)
		return;

	va_start(vp, n);
	for (i = 0; i < (int)n; i++)
	{
		num = va_arg(vp, int);
		printf("%d", num);
		if ((i + 1) != (int)n)
		{
			if (separator != NULL)
				printf("%s", separator);
			else
				printf(" ");
		}
	}
	va_end(vp);
	printf("\n");
}
