#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: Bit value
 * @index: The index
 *
 * Return: Value of bit at index or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (n >> index) & 1;
}
