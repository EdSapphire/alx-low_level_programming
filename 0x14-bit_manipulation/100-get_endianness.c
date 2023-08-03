#include <stdio.h>
#include "main.h"

/**
 * get_endianness - A funtion that checks the endianness
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *end = (char *)&n;
	return (*end == 1);
}
