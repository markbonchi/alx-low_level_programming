#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: string parameter
 * Return: str
 */

char *leet(char *str)
{
	int i, j;
	char s[] = "aeotl";
	char l[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (str[i] == s[j] || str[i] == s[j] - ('a' - 'A'))
			{
				str[i] = l[j];
				break;
			}
		}
	}
	return (str);
}
