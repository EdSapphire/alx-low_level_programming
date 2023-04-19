#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - A function that frees dogs
 * @d: The dog to free
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
