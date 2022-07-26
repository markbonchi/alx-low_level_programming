#include "main.h"

/**
 * create_array - creates an array of char c
 * @size: size of array
 * @c: elements of array
 * Return: ptr || NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size != 0)
	{
		ptr = malloc(sizeof(char) * size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	} else
	{
		return (NULL);
	}
	return (ptr);
}
