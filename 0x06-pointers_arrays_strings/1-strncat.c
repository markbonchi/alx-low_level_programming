#include "main.h"

/**
 * _strncat - concatenatetwo strings up to point n
 * @dest: destination string
 * @src: source string
 * @n: number of characters to finish
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;

	j = 0;
	len = 0;
	while (dest[j] != '\0')
	{
		len++;
		j++;
	}
	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			break;
		}
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
