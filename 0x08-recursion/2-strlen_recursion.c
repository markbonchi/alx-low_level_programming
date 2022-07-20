#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string
 * @s: pointer to string argument
 * Return: i
 */

int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s == '\0')
	{
		return (0);
	}
	i += _strlen_recursion(s + 1);
	return (i);

}
