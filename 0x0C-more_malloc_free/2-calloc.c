#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - A function that allocate memory
 * for an array
 * @nmemb: Array of elements
 * @size: Size of bytes
 *
 * Return: A pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = nmemb * size;
	s = malloc(b);

	if (s == NULL)
		return (NULL);
	while (a < b)
	{
		s[a] = 0;
		a++;
	}
	return (s);
}
