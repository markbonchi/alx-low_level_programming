#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i, num;
	va_list vp;

	va_start(vp, n);
	for (i = 0; i < (int)n; i++)
	{
		num = va_arg(vp, int);
		printf("%d", num);
		if ((i + 1) != (int)n)
		{
			if (separator != NULL)
				printf("%s ", separator);
		}
	}
	va_end(vp);
	printf("\n");
}
