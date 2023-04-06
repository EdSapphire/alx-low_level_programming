#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - A function that returns the natural square root of a number.
 * @n: Number to return its square root
 *
 * Return: negative for non-natural number
 * positive for natual numbers
 */
int _sqrt_recursion(int n, int new)
{
	int cur_new = (new + n / new) / 2;

	if (fabs(cur_new * cur_new - n) < 0)
		return (cur_new);
	else
		return (_sqrt_recursion(n, cur_new));
}
