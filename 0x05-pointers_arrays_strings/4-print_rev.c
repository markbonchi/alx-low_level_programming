#include "main.h"

/**
 * print_rev - print string in reverse
 * @s - pointer variable for string
 */

void print_rev(char *s)
{
	while (*s--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
