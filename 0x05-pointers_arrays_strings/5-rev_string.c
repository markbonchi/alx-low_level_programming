#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: pointer variable for string
 */

void rev_string(char *s)
{
	int i, len;
	char tmp;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (i = len; i >= 0; i--)
	{
		tmp = s[i];
		s[i] = *s;
		*s = tmp;
	}
}
