#include "main.h"
#include <string.h>

/**
 * _memset - A function that fills memory with a constant byte.
 * @s: Address of memory to be filled
 * @b: Value to be filled
 * @n: Number of bytes to be filled
 *
 * Return: Pointer to memory s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
