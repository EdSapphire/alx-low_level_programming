#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - A function that reallocates a memory block
 * @ptr: Pointer to the memory
 * @old_size: Size of the bytes
 * @new_size: New size of the bytes
 *
 * Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int i;
	
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		s = malloc(new_size);		
		if (s == NULL)
			return (NULL);
		return (s);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	
	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	
	for (i = 0; i < old_size && i < new_size; i++)
		s[i] = ((char *) ptr)[i];
	
	free(ptr);
	return (s);
}
