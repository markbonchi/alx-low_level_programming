#include "main.h"

/**
 * _strcat - concatenate two strings together
 * @dest: destination string
 * @src: source string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, len;

	j = 0;
	len = 0;
	while (dest[j] != '\0')
	{
		len++;
		j++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
