#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: int parameter
 * @max: int parameter
 * Return: ptr
 */

int *array_range(int min, int max)
{
	int i, *ptr, range;

	if (min > max)
		return (NULL);
	range = 1 + max - min;
	ptr = malloc(sizeof(int) * range);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
		ptr[i] = min + i;
	return (ptr);
}
