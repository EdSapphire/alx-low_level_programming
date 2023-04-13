#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenate string
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes
 *
 * Return: A pointer to the string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, a = 0, b = 0, c = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;
	while (s2[b])
		b++;
	if (n >= b)
		c = i + b;
	else
		c = i + n;

	s = malloc(sizeof(char) * c + 1);

	if (s == NULL)
		return (NULL);
	b = 0;
	while (a < c)
	{
		if (a <= i)
			s[a] = s1[a];
		if (a >= i)
		{
			s[a] = s2[b];
			b++;
		}
		a++;
	}
	s[a] = '\0';
	return (s);
}
