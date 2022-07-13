#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: pointer variable for string
 */

void rev_string(char *s)
{
	int i, j;
	char rev;

	for (i = _strlen(s); i >= 0; i--)
	{
		strcat(rev, s[i]);
	}
}
