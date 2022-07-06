#include "main.h"
#include <stdio.h>

/**
 * natural_35 - prints multiples of 3_&_5
 *
 * Return: 0
 */

long int natural_35(void)
{
	int n, i = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			i += n;
		}
	}
	printf("%lu\n", (long int)i);
	return (0);
}
