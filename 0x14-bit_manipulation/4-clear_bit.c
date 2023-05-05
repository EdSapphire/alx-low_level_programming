#include "main.h"

/**
 * clear_bit - Function that set bit value to 0 at a given index
 * @n: The bit
 * @index: Index of bit set to 1
 *
 * Return: 1 for success or -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 98)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
