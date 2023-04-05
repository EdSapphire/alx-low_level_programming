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
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
