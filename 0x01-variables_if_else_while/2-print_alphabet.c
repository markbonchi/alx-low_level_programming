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

	for (i = 0; i < strlen(a); i++)
	{
		printf("%c", a[i]);
	}
	return (0);
}
