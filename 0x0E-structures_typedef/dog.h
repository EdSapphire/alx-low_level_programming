#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type struct dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 *
 * Description: Header file that describes a new struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for the new struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
