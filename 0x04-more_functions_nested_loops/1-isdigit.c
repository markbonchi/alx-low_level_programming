#include "main.h"

/**
 * _isupper - checks for upper case characters
 * @c: int argument of function for ASCII comparison
 * Return: 1 if upper, 0 if no match
 */

int _isupper(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
