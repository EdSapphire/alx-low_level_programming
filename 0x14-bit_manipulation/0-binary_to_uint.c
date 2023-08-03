#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - Function that conversts a binary to an unsigned int.
 * @b: integer pointing to a string of 0 and 1 chars.
 *
 * Return: The converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	int sum = 0;
	int value = 1;
	int len = strlen(b);
	int i;

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '1')
			sum += value;
		value *= 2;
	}
	return sum;
}
