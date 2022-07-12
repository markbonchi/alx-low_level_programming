#include <stdio.h>

/**
 * _strlen - Countingnumber os characters in string
 * @s: string pointer variable
 *
 * Return: i
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		*s++;
	}
	return (i);
}
