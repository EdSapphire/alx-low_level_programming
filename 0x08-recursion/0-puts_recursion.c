#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _puts_recursion - A function that prints a string, followed by a new line.
 * @s: String to print
 *
 * Return: Void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
