#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - A function that compares two strings
 * @s1: First string to compare
 * @s2: Second string
 *
 * Return: Negative or 0 or Positive differences
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
