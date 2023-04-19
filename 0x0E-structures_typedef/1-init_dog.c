#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes a new variable of type struct dog
 * @d: New variable to initialize
 * @name: Pointer to dog name
 * @age: Dog age
 * @owner: Pointer to dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
