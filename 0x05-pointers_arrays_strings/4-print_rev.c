#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: pointer variable for string
 */

void print_rev(char *s)
{
	int i, len;
	char a;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	while (len --)
	{
		a = s[len];
		_putchar(a);
	}
	_putchar('\n');
}
