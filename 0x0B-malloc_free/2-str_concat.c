#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: ptr || NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size, len1, len2;
	char *ptr;

	if (s1 == NULL)
		s1[0] = '\0';
	if (s2 == NULL)
		s2[0] = '\0';
	len1 = strlen(s1);
	len2 = strlen(s2);
	size = len1 + len2 + 1;
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	j = len1;
	for (i = 0; i < len2;)
		ptr[j++] = s2[i++];
	ptr[size] = '\0';
	return (ptr);
}
