#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: int number of bytes for string two
 * Return: ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j, len;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len = n;
	for (; s1[i]; i++)
		len += 1;

	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);

	j = 0;
	for (i = 0; s1[i]; i++)
		ptr[j++] = s1[i];
	for (i = 0; i < n; i++)
		ptr[j++] = s2[i];
	ptr[j] = '\0';
	return (ptr);
}
