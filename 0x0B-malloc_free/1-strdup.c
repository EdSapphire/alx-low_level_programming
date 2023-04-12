#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function returns a pointer to a new string which
 * is a duplicate of the string str
 * @str: String to duplicate
 *
 * Return: A pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *s;
	int n = 0;
	int i = 1;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (n < i)
	{
		s[n] = str[n];
		n++;
	}
	s[n] = '\0';
	return (s);
}
