#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - A function thatb creates array of integers
 * @min: Minimum range
 * @max: Maximum range
 *
 * Return: A pointer to new array
 */
int *array_range(int min, int max)
{
	int *s, n = 0;

	if (min > max)
		return (NULL);

	s = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (s == NULL)
		return (NULL);
	while (min <= max)
	{
		s[n] = min;
		n++;
		min++;
	}
	return (s);
}
