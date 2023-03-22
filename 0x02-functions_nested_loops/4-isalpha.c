#include "main.h"

/**
 * _isalpha - Check for alphabetic character
 * @c: character to be checked
 *
 * Return: 1 for a letter and 0 for otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
