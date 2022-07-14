#include "main.h"

/**
 * _strncpy - copy n characters of strings
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
		dest[i] = src[i];
	}
	return (dest);
}
