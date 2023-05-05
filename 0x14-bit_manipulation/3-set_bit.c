#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1 at given index
 * @n: The bit
 * @index: The index of the bit set to 1
 *
 * Return: 1 for success or -1 for error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 98)
		return (-1);
	*n ^= (1 << index);
	return (1);
}
