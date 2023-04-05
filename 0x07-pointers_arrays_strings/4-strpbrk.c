#include "main.h"
#include <string.h>

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: String to be searched
 * @accept: Character of bytes being searched
 *
 * Return: Pointer to bytes @s that matches bytes @accept
 * or NULL if no byte found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
			if (*s == accept[i])
				return (s);
		s++;
	}
	return (NULL);
}
