#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - A function that concatenates two strings
 * @dest: String destination
 * @src: String to append to dest
 * @n: number of bytes
 *
 * Return: A pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}
