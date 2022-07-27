#include "main.h"

/**
 * alloc_grid - returns a pointer of two dimensional array of int
 * @width: lenght of sub array
 * @height: length of parent array
 * Return: ptr || NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j, **ptr;

	ptr = (int**)malloc(sizeof(*ptr) * height);
	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int*)malloc(sizeof(**ptr) * width);
		if (ptr == NULL)
		{
			/*Free if malloc fails*/
			while (i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
