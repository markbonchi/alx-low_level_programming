#include "main.h"

/**
 * print_rev - print string in reverse
 * @s - pointer variable for string
 */

void print_rev(char *s)
{
	int i = _strlen(*s);

	while(i != 0)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}
