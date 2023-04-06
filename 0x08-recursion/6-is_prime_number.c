#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * primeNumber - A function that checks for prime number
 * @n: The integer to check for prime number
 * @m: The integer to iterate with
 *
 * Return: Prime number.
 */
int primeNumber(int n, int m)
{
	if (n <= 1 || n % m == 0)
		return (0);
	else if (n == m)
		return (1);
	else if (n > m)
		primeNumber(n, m + 1);
	return (1);
}

/**
 * is_prime_number - A function that returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: The prime number
 *
 * Return: 1 if @n is a prime number otherwise return 0.
 */
int is_prime_number(int n)
{
        return (primeNumber(n, 2));
}
