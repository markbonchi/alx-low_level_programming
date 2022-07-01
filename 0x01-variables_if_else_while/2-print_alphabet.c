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
	const char a[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; i < (int)strlen(a); i++)
	{
		putchar(a[i]);
	}
	return (0);
}
