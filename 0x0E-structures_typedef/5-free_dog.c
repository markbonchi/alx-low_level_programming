#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: pointer
 */

void free_dog(dog_t *d)
{
	free(d);
}
