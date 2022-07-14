#include "main.h"

/**
 * _strcpy - copy strings
 * @dest: destination
 * @src: source string
 * @n: number of characters to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{

			break;
		}
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
