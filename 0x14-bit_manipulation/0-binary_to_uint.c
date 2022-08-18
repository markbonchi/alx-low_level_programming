#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary nuber to an unsigned int
 * @b: string of 1's and 0's
 *
 * Return: result || 0
 */

typedef unsigned int u_int;

u_int _pow(u_int num, u_int rate);

unsigned int binary_to_uint(const char *b)
{
	u_int i = 0, idx, len, result = 0;

	if (!b)
		return (0);
	len = 0;
	while (b[i] != '\0')
	{
		len++;
		i++;
	}

	idx = len - 1;
	for (i = 0; i < len; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		if (b[i] == '1')
			result += _pow(2, idx - i);
	}
	return (result);
}

/**
 * _pow - gets the power if a number
 * @num: base number
 * @rate: power
 *
 * Return: result
 */

u_int _pow(u_int num, u_int rate)
{
	u_int i, result = 1;

	for (i = 0; i < rate; i++)
		result *= num;
	return (result);
}
