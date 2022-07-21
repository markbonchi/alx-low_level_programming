#include "main.h"

/**
 * is_prime_number - check if input iniger is a prime number
 * @n: input int parameter
 * @val: counter parameter
 * Return: prime
 */

int prime(int n, int val);

int is_prime_number(int n)
{
	return (prime(n, 1));
}

/**
 * prime - compare through possible prime numbers
 * @n: input int parameter
 * @val: counter parameter
 * Return: 1
 */

int prime(int n, int val)
{
	int i, j;

	i = (6 * val) - 1;
	j = (6 * val) + 1;
	if ((i == n || j == n) && n > 1)
	{
		if (n % 3 != 0 && n % 5 != 0)
		{
			return (1);
		}
	}
	if (j < n)
	{
		return (prime(n, val + 1));
	}
	return (0);
}
