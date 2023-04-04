#include "main.h"
#include <string.h>

/**
 * _strchr - A function that locates a character in a string
 * @s: String to be searched
 * @c: character occurrence to search
 *
 * Return: A pointer to @c in string @s
 * or NULL pointer if character found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
