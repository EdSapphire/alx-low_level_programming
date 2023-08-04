#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - Function that conversts a binary to an unsigned int.
 * @b: integer pointing to a string of 0 and 1 chars.
 *
 * Return: The converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int len = strlen(b);
	int i;

	for (i = 0; i < len; i++)
	{
		sum <<= 1;
		if (b[i] == '1')
			sum |= 1;
		else if (b[i] != '0')
			return 0;
	}
	return sum;
}
