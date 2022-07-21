#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int parameter to find square root of
 * @i: int parameter for call function
 * Return: i
 */

int square(int n, int i);

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find the square if a number
 * @n: int parameter to compare
 * @i: int pareameter to square
 * Return: i
 */
int square(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i < n)
	{
		return (square(n, i + 1));
	}
	return (-1);
}
