#include <stdio.h>

/**
 * swap_int - swaps the values in two memory addresses
 * @a: First int value
 * @b: Second int value
 */

void swap_int(int *a, int *b)
{
	int temp = *b;

	*b = *a;
	*a = temp;
}
