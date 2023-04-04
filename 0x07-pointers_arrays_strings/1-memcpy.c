#include "main.h"
#include <string.h>

/**
 * _memcpy - A function that copies memory area
 * @dest: Pointer to destination array where
 * content is to be copied
 * @src: Pointer to the source of data
 * to be copied
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
