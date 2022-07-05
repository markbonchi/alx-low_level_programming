#include "main.h"

/**
 * _islower - function to check for lowercase characters
 * @c: int argument of function for characters
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
