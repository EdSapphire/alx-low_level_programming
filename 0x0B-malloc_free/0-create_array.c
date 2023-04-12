#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars
 * @size: Array size
 * @c: The char to create
 *
 * Return: A pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
