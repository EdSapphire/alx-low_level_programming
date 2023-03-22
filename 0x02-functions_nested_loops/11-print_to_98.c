#include "main.h"

#include <stdio.h>
/**
 * print_to_98 - Print natural numbers from n to 98
 * numbers are seperated by commas
 * @n: number to start counting
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
