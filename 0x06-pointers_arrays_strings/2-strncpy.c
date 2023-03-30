#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - A function that copies a string
 * @dest: String storage
 * @src: String source
 * @n: Number of bytes
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = j; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
