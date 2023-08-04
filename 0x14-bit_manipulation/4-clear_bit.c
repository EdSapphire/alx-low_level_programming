#include "main.h"
#include <stdio.h>

/**
 * clesr_bit - A function that sets the value of a bit
 * to 0 at a given index
 * @n: Bit pointer
 * @index: Index of bit
 *
 * Returns: 1 if it worked or -1 if error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	return (*n &= ~(1 << index));
}
