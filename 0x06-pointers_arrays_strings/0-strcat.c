#include <stdio.h>

/**
 * _strcat - concatenate two strings together
 * @dest: destination string
 * @src: source string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (*dest != '\0')
	{
		len++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		if (dest[len] == '\0' && i == 0)
		{
			dest[len] = src[i];
		} else
		{
			dest[len++] = src[i];
		}
	}
	dest[len++] = '\0';
	return (*dest);
}
