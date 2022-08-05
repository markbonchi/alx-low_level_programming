#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 */

void vprint_all(const char *const format, va_list vp);
void separator(size_t i, const char *const format);

void print_all(const char *const format, ...)
{
	va_list vp;

	va_start(vp, format);
	vprint_all(format, vp);
	va_end(vp);
}


/**
 */

void vprint_all(const char *const format, va_list vp)
{
	char ch, *str;
	int num;
	double nf;
	size_t i = 0;

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
					printf("(nil)");
				else
					printf("%s", str);
				separator(i, format);
				break;
			default:
				break;	
		}
		i++;
	}
	printf("\n");
}

/**
 */

void separator(size_t i, const char *const format)
{
	if (format[i + 1] != '\0')
		printf(", ");
	else
		return;
}
