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
		for (j = '1'; j <= '9'; j++)
		{
			if (i == '9')
			{
				break;
			} else {
				if (i < j)
				{
					putchar(i);
					putchar(j);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
