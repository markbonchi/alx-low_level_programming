#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: pointer variable for string
 */

void rev_string(char *s)
{
	int i, len1, len2;
	char tmp;

	len1 = 0;
	while (*s != '\0')
	{
		len1++;
		s++;
	}

	len2 = len1 - 1;
	for (i = 0; i < len1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len2];
		s[len2] = tmp;
		len2--;
	}
}
