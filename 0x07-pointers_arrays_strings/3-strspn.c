#include "main.h"
#include <string.h>

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: Segment to return the number of bytes
 * @accept: Bytes contained
 *
 * Return: Number of bytes to @s
 */
unsigned int _strspn(char *s, char *accept)
{
	int j = 0, k = 0, c = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] != 32)
		{
			for (k = 0; accept[k] != '\0'; k++)
				if (s[j] == accept[k])
					c++;
		}
		else
			return (c);
	}
	return (c);
}
