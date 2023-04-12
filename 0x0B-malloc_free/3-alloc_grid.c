#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: Array width
 * @height: Array height
 *
 * Return: Width or height
 */
int **alloc_grid(int width, int height)
{
	int i, a, b, c;
	int **d;

	if (width <= 0 || height <= 0)
		return (NULL);

	d = malloc(sizeof(int *) * height);
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		d[i] = malloc(sizeof(int) * width);
		if (d[i] == NULL)
		{
			for (a = i; a >= 0; a--)
				free(d[a]);
			free(d);
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
			d[b][c] = 0;
	}
	return (d);
}
