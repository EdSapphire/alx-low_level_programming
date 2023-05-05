#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get
 * from one number to another
 * @n: First number
 * @m: Number to flip into
 *
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int  check = n ^ m;
	unsigned long int new = 0;

	while (check > 0)
	{
		new += (check & 1);
		check >>= 1;
	}
	return (new);
}
