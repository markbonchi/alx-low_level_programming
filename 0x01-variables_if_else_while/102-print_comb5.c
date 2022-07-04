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
	int k;
	int y;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (y = '0'; y <= '9'; y++)
				{
					if (i <= k && j < y)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(y);
						if (i == '9' && j == '8' && k == '9' && y == '9')
						{
							break;
						} else
						{
							putchar(',');
							putchar(' ');
						}
					} else
					{
						continue;
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
