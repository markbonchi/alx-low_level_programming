#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - print string in reverse
 * @s: pointer variable for string
 */

void rev_string(char *s)
{
	int i, j;
	char rev;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		rev[j] = s[i];
		j++;
	}
	printf("%s\n", rev);
}
