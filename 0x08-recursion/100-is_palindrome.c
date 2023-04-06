#include "main.h"
#include <stdio.h>

/**
 * newPalindrome - A function that check a string for palindrome
 * @str: String to check
 * @len: String length
 * @i: Incrementor
 *
 * Return: 1 for palindrome otherwise return 0.
 */
int newPalindrome(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (newPalindrome(str, len - 1, i + 1));
	else if (str[i] != str[len])
		return (0);
	else
		return (1);
}

/**
 * _recursion - A function that returns string length
 * @s: The string to return
 *
 * Return: String length
 */
int _recursion(char *s)
{
	if (*s != '\0')
		return (1 + _recursion(s + 1));
	return (0);
}

/**
 * is_palindrome - A function that returns 1 if a string is a palindrome
 * and 0 if not.
 * @s: The string to return
 *
 * Return: 1 for palindrome otherwise return 0.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = _recursion(s) - 1;

	return (newPalindrome(s, len, i));
}
