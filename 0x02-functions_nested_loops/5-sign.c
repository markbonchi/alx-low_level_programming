#include "main.h"

/**
 * print_sign - function to check for the sign of an int
 * @n: int argument of function for sign check
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}else if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else
	{
		putchar('0');
		return (0);
	}
	return (0);
}
