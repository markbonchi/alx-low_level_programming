#include <stdio.h>
#include "main.h"
/**
 * _puts - print out string
 * @str: string pointer variable
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
