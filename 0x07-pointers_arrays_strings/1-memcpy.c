#include "main.h"

/**
 * _memcpy - copy memory area of constant byte
 * @dest: pointer parameter for mem destination
 * @src: source pointer
 * @n: number of iterations
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
