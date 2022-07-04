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
	int j;

	for (i = '0'; i < '9'; i++)
	{
		for (j = '1'; j < '9'; j++)
		{
			if ((i * j) != (j * i))
			{
				putchar(i);
				putchar(j);
				if (ij == 89)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
