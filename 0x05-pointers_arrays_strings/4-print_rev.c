#include "main.h"
#include <stdio.h>
/**
 * print_rev - A function that prints a string, in reverse
 * @s: String to be reversed
 *
 * Return: Void
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	for (c -= 1; c >= 0; c--)
		putchar(s[c]);
	putchar('\n');
}
