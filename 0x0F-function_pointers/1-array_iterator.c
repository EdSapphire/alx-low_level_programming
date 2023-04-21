#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - A function that executes a function given as a parameter
 * on each element of an array.
 * @size: Size of the array
 * @array: Ampointer to an array
 * @action: A pointer to the function to use.
 *
 * Return: Void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (n < size)
		{
			action(array[n]);
			n++;
		}
	}
}
