#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: array of int
 * @size: int argument
 * @cmp: function pointer
 * Return: i || 1 || -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);
	for (i = 0;i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
