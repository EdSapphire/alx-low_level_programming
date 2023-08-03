#include <stdio.h>
#include "main.h"

/**
 * get_endianness - A funtion that checks the endianness
 *
 * Returns: 0 for big endian and 1 for little endian.
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *)&n;

	return (int)*c;
}
