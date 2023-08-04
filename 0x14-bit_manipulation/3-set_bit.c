#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1
 * at a given index
 * @n: Bit pointer
 * @index: Bit index
 *
 * Return: 1 if success or -1 if error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int mask = (1UL << index);
	return *n |= mask;
}
