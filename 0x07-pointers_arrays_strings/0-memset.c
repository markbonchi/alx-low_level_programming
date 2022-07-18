#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: pointer parameter for mem allocation
 * @b: char byte to fill
 * @n: number of iterations
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
	{
		s[i] = b;
	}
	return (s);
}
