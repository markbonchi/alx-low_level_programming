#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Enter
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	const char a[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	i = 0;
	while (i < (int)strlen(a))
	{
		if (a[i] != 'e' && a[i] != 'q')
		{
			putchar(a[i]);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
