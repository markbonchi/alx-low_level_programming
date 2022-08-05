#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * print_all - prints anything by flags
 * @format: input string
 * @i: int parameter
 */

void separator(size_t i, const char *const format);

void print_all(const char *const format, ...)
{
	va_list vp;
	char ch, *str;
	int num;
	double nf;
	size_t i = 0;

	while (format == NULL || vp == NULL)
		return;

	va_start(vp, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				ch = va_arg(vp, int);
				printf("%c", ch);
				separator(i, format);
				break;
			case 'i':
				num = va_arg(vp, int);
				printf("%d", num);
				separator(i, format);
				break;
			case 'f':
				nf = va_arg(vp, double);
				printf("%f", nf);
				separator(i, format);
				break;
			case 's':
				str = va_arg(vp, char *);
				if (str == NULL)
				{
					printf("(nil)");
					separator(i, format);
					break;
				}
				printf("%s", str);
				separator(i, format);
				break;
			default:
				break;
		}
		i++;
	}
	va_end(vp);
	printf("\n");
}

/**
 * separator - prints between output string characters
 * @i: int argument
 * @format: string
 */

void separator(size_t i, const char *const format)
{
	if (format[i + 1] != '\0')
		printf(", ");
}

