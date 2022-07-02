#include <stdio.h>
#include <stdlib.h>

/**
 * main - Enter
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j = "10";

	for (i = '0'; i < j; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
