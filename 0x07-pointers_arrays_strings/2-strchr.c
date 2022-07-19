#include "main.h"
#include <stddef.h>

/**
 * _strchr - finds first occurence of a char in string
 * @s: pointer parameter for search string
 * @c: character to locate
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
