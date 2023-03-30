#include "main.h"
#include <string.h>

/**
 * _strcat - A function that concatenates two strings
 * @dest: String destination
 * @src: String source
 *
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i]; i++)
		dest[j++] = src[i];
	return (dest);
}
