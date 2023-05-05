#include "main.h"

/**
 * get_endianness - Function that checks for endianness
 *
 * Return: 0 for big endian and 1 for little endian.
 */
int get_endianness(void)
{
	int num = 1;
	
	char *c = (char *)&num;
	
	return (*c);
}
