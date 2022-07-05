#include "main.h"

/**
 * _abs - function to return absolut valure of int
 * @n: argument of function
 * Return: 0
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	} else if (n < 0)
	{
		return (n * -1);
	}	
	return (0);
}
