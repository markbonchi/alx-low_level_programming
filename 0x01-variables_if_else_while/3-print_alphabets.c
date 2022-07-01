#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
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
		putchar(a[i]);
	}

	for (i = 0; i < (int)strlen(a); i++)
	{
		putchar(toupper(a[i]));
	}
	putchar("\n")
	return (0);
}
