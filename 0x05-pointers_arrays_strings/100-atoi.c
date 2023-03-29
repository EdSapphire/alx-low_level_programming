#include "main.h"
#include <stdio.h>

/**
 * _atoi - A function that convert a string to an integer
 * @s: String to convert
 *
 * Return: Integer
 */
int _atoi(char *s)
{
	int alpha = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			alpha *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * alpha);
}
