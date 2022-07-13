#include <stdio.h>
#include "main.h"
/**
 * puts2 - print out string by index +2
 * @str: string pointer variable
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
