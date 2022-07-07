#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int d, e, f, largest;

	d = a - b;
	e = b - c;
	f = a - c;
	if (d > 0 && f > 0)
	{
		largest = a;
	}
	else if (e > 0 && d < 0)
	{
		largest = b;
	}
	else if (f < 0 && e < 0)
	{
		largest = c;
	}

	return (largest);
}
