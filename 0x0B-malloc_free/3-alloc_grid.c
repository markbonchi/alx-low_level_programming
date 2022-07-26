#include "main.h"

/**
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr = (int**)malloc(sizeof(int) * height);

	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
		ptr[i] = (int*)malloc(sizeof(int) * width);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	return (ptr);
}
