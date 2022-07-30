#include "main.h"

/**
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, n;
	char *ptr;

	n = size * nmemb;	
	if (n == 0)
		return (NULL);

	ptr = (void *)malloc(n);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		ptr[i] = '0';
	return (ptr);
}
