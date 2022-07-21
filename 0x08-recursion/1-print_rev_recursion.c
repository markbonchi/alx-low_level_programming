#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - print the revers of a string
 * @s: sttring parameter
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
