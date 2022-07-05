#include <stdio.h>
#include <stdlib.h>

/**
 * main - Enter
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = '0', j = '0';
	int k = '0', y = '0';

	while (i <= '9' && j <= '9')
	{
		while (k <= '9' && y <= '9')
		{
			putchar(i);
			putchar(j);
			putchar(' ');
			putchar(k);
			putchar(y);
			if (i == '9' && j == '8' && k == '9' && y == '9')
			{
				break;
			}
			putchar(',');
			putchar(' ');
			k++;
			y++;
		}
		i++;
		j++;
	}
	putchar('\n');
	return (0);
}
