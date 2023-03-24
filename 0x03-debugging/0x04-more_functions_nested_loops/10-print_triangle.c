#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line
 * @size: the size of the triangle.
 *
 * Return: Empty.
 */
void print_triangle(int size)
{
	int up, down;

	if (size <= 0)
		_putchar('\n');
	for (up = 0; up <= size; up++)
	{
		for (down = size - up; down > 0; down--)
		{
			_putchar(32);
		}
		for (down = 0; down < up; down++)
		{
			_putchar(35);
		}
		if (down == size)
			continue;
		_putchar('\n');
	}
}
