#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - prints a list of strings
 * @separator: string inbetween
 * @n: int parameter
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *ptr;
	va_list vp;

	if (n <= 0)
		return;

	va_start(vp, n);
	for (i = 0; i < (int)n; i++)
	{
		ptr = va_arg(vp, char *);
		if (!ptr)
			printf("(nil)");
		else
			printf("%s", ptr);
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
