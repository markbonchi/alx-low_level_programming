#include "function_pointers.h"

/**
 * array_iterator - print array
 * @array: int array
 * @size: size in bytes
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
