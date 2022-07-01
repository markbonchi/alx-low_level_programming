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
	int len;
	char a;
	int i;

	a = "abcdefghijklmnopqrstuvwxyz";
	len = (int)strlen(a);

	for (i = 0; i < len; i++)
	{
		printf("%c", a[i]);
	}
	return (0);
}
