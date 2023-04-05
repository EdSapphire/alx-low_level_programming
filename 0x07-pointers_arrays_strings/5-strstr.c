#include "main.h"
#include <string.h>

/**
 * _strstr - A function that locates a substring.
 * @haystack: String to search
 * @needle: Substring to search for
 *
 * Return: A pointer to beginning of @needle
 * or NULL if no substring is found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (needle[j] != '\0')
                j++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != j)
			haystack++;
		else
			return (haystack);
	}	
	return (NULL);
}
