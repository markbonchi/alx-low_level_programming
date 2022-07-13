#include "main.h"
#include <stdio.h>

/**
 * rev_string - print string in reverse
 * @s: pointer variable for string
 */

void rev_string(char *s)
{
	int i, len1, len2;
	char rev;

	len1 = 0;
	while (*s)
	{
		len1++;
	}

	len2 = len1 - 1;

	for (i = 0; i <= len2; i++)
	{
		rev = s[i];
		s[i] = s[len2];
		s[len2] = rev;
		len2--;
	}
}
