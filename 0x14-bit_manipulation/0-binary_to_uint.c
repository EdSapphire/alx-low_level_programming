#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - Function that converts binary number to unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: Converted number or 0 if there is one or more chars in
 * string b that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int check = 0, dec = 1;
	if (*b == '\0')
		return (0);
	
	for (len = 0; b[len];)
		len++;
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		check += (b[len] - '0') * dec;
		dec *= 2;
	}
	return (check);
}
