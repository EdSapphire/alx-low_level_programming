#include "main.h"

/**
 * get_endianness - Function that check for endianness
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int d = 1;
	char *c = (char *)&d;

	return (*c);
}
