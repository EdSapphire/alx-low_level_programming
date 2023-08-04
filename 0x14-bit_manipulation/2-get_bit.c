#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index.
 * @n: Bit value to return
 * @index: The bit index
 *
 * Return: Value of bit at index or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (n >> index) & 1;
}
