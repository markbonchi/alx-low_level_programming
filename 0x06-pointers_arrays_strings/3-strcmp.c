#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 + 15 || 0 || 0 - 15
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != '\0' && s1 != 0)
		{
			return (15);
		}
		if (s2[i] != '\0' && s2 != 0)
		{
			return (-15);
		}
	}
	return (0);
}
