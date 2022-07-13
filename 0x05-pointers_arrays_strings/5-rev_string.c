#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: pointer variable for string
 */

void rev_string(char *s)
{
	int i, len;
	char rev[] = "";

	len = 0;
	while (s[len] != '\0')
	{
		len++;
		s++;
	}
	for (i = len; i <= 0; i--)
	{
		rev = s[i];
	}
	*s = rev;
}
