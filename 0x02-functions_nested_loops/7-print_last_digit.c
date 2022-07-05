#include "main.h"

/**
 * print_last_digit - function to to print last digit
 * @n: int argument of function for int
 * Return: 0
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		n *= -1;
		i = (n % 10) + '0';
		_putchar(i);
	} else
	{
		i = (n % 10) + '0';
		_putchar(i);
	}
}
