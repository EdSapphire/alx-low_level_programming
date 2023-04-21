#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - A function that searches for an integer
 * @array: Pointer to array to be searched
 * @size: The number of elements in the array
 * @cmp: A pointer to the function to be used to compare values
 *
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (n < size)
			{
				if (cmp(array[n]))
					return (n);
				n++;
			}
		}
	}
	return (-1);
}
