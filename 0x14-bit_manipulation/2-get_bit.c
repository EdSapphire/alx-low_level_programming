#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index
 * @n: The bit
 * @index: The index to get value, starting at 0
 *
 * Return: Value of the bit at index or -1 if error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	if (index > 89)
		return (-1);
	result = (n >> index) & 1;
	return (result);
}
