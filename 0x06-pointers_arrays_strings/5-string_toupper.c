#include "main.h"
#include <stdio.h>

/**
 * string_toupper - A function that changes all lowercase
 * letters of a string to uppercase
 * @str: String to change
 *
 * Return: Pointer to string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
