#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc
 * @ptr: address to mem block
 * @old_size: int
 * @new_size: int
 * @dest: destination
 * @src: source
 */

void _memcpy(void *dest, void *src, size_t n);

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
		return (NULL);
	} else if (ptr != NULL)
	{
		return (malloc(new_size));
	} else if (old_size < new_size)
	{
		return (ptr);
	} else if (new_size == old_size)
	{
		return (ptr);
	} else
	{
		newptr = malloc(new_size);
		if (newptr)
		{
			_memcpy(newptr, ptr, old_size);
			free(ptr);
		}
		return (newptr);
	}
}

/**
 * _memcpy - copy n bytes
 * @dest: destinsation
 * @src: source
 */

void _memcpy(void *dest, void *src, size_t n)
{
	size_t i;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
		cdest[i] = csrc[i];
}
