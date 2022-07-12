#include "main.h"

/**
 * print_rev - print string in reverse
 * @s - pointer variable for string
 */

void print_rev(char *s)
{
	int i, len;

	len = 0;
	while (*s)
	{
		len++;
		s++;
	}
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
