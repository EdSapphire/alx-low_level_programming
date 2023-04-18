#include <stdio.h>

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Defines a new type
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: A struct that assign the name, age and owner of a new dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
