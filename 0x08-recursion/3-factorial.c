#include "main.h"
#include <stdio.h>

/**
 * factorial - A function that returns the factorial of a given number.
 * @n: The number to return its factorial
 *
 * Return: negative if n < 0 and
 * positive for factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
