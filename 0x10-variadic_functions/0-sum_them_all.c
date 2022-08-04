#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameters
 * @n: int argument
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, num, sum = 0;
	va_list arg1;

	if (n == 0)
		return (0);

	va_start(arg1, n);
	for (i = 0; i < (int)n; i++)
	{
		num = va_arg(arg1, int);
		sum += num;
	}
	va_end(arg1);
	return (sum);
}
