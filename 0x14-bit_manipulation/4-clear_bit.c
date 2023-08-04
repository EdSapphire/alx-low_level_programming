#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit
 * to 0 at a given index.
 * @n: Bit pointer
 * @index: Index of bit
 *
 * Return: 1 if it worked or -1 if error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	return (*n &= (~(1 << index)));
}
