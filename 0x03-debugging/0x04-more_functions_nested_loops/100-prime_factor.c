#include <stdio.h>
#include <math.h>

/**
 * main - a program that finds and prints the largest prime factor of
 * the number 612852475143, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	long y, maxf;
	long prime = 612852475143;
	double square = sqrt(prime);

	for (y = 1; y <= square; y++)
	{
		if (prime % y == 0)
		{
			maxf = prime / y;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
