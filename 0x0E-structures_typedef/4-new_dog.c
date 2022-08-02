#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * new_dog - creates a new dog
 * @name: char argument
 * @owner: char argument
 * @age: float argument
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (!dog)
	{
		free(dog);
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
	free(dog);
}
