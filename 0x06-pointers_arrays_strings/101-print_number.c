#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_number - A function that prints an integer
 * @n: Integer to be printed
 *
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int count = n;

	if (n < 0)
	{
		_putchar('-');
		count = -count;
	}

	if ((count / 10) > 0)
		print_number(count / 10);

	_putchar((count % 10) + '0');
}
