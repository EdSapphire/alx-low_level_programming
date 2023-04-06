#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _newRec - A function that returns the square root of two numbers
 * @n: Main number
 * @m: Number to check for square root
 *
 * Return: Square root.
 */
int _newRec(int n, int m)
{
	if (m * m > n)
		return (-1);
	else if (m * m == n)
		return (m);
	else
		return (_newRec(n, m + 1));
	return (1);
}

/**
 * _sqrt_recursion - A function that returns the natural square root of a number.
 * @n: Number to return its square root
 *
 * Return: negative for non-natural number
 * positive for natual numbers
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_newRec(n, 1));
}
