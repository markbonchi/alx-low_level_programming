#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: pointer variable for string
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
	for (i = 0; i < len; i++)
	{
		_putchar(s[len - i]);
	}
	_putchar('\n');
}
