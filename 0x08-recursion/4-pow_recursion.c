#include "main.h"

/**
 * _pow_recursion - returns int to the pow of an int
 * @x: first parameter, int to be raised
 * @y: second parameter, power integer
 * Return: x pow y
 */

int _pow_recursion(int x, int y)
{
	if (y <= 0)
	{
		if (y < 0)
		{
			return (-1);
		}
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
