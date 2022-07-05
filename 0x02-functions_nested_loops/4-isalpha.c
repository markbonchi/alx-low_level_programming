#include "main.h"

/**
 * _isalpha - function to check for alphabetic characters
 * @c: int argument of function for characters
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
