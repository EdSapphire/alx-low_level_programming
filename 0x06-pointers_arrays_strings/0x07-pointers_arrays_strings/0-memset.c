#include "main.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>

/**
 * _memset - A function that fills memory with a constant byte.
 * @s: Memory to be filled
 * @b: Value to be filled
 * @n: number of bytes to be filled
 *
 * Return: A pointer to memory s.
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
