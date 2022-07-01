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

	for (i = 0; i < (int)strlen(a); i++)
	{
		if (a[i] != "e" || a[i] != "q")
		{
			putchar(a[i]);
		}
	}
	putchar('\n');
	return (0);
}
