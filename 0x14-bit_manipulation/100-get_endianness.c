#include "main.h"

/**
 * get_endianness - Function that checks for endianness
 *
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;
	
	if (*c == 1)
		return (1);

	return (0);
}
