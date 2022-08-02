#ifndef DOG_H
#define DOG_H

/**
 * struct dog - poppy
 * @name: char element
 * @owner: char owner
 * @age: int element
 * Desciption: A dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
