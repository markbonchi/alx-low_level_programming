#include <stdio.h>
#include <stdlib.h>

/**
 * main - Enter
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;
	int k, y;

	for (i = '0', j = '0'; i <= '9', j <= '9'; i++, j++)
	{
		for (k = '0', y = '0'; k <= '9', y <= '9'; k++, y++)
		{
			putchar(i);
			putchar(j);
			putchar(' ');
			if ((i <= k) || (i == k && j < y))
			{
				putchar(k);
				putchar(y);
			}
			if (i == '9' && j == '8' && k == '9' && y == '9')
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
