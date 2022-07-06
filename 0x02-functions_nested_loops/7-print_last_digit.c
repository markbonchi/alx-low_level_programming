#include "main.h"

/**
 * print_last_digit - function to to print last digit
 * @n: int argument of function for int
 * Return: i
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		n * -1;
	}
	i = n % 10;
	_putchar(i + '0');
	return (i);
}
