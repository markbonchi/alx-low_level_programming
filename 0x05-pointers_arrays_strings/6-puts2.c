#include <stdio.h>
#include "main.h"
/**
 * _puts2 - print out string by index +2
 * @str: string pointer variable
 */

void _puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
