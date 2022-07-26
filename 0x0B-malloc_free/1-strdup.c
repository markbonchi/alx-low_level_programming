#include "main.h"

/**
 * _strdup - returns pointer to copy of string given
 * @str: string parameter
 * Return: ptr || NULL
 */

char *_strdup(char *str)
{
	int i, size, len = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len++;
	size = len + 1;
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		ptr[i] = str[i];
	return (ptr);
}
