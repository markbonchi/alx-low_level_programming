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

	for (i = 0; i <= 15; i++)
	{
		putchar(hex[i]);
	}
	putchar('\n');
	return (0);
}
