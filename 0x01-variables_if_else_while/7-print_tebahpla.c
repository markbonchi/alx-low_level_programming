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

	for (i = (int)strlen(a) - 1; i >= 0; i--)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
