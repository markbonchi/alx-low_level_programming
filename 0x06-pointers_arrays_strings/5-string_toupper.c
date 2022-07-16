#include "main.h"

/**
 * string_toupper - convert characters in strings to upper case
 * @str: string parameter
 * Return: str
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] -= 32;
		} else
		{
			continue;
		}
	}
	return (str);
}
