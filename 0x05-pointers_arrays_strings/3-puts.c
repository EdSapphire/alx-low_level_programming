#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _puts - A function that prints a string
 * followed by a new line
 * @str: String to be printed
 *
 * Return: 0
 */
void _puts(char *str)
{
	while (*str)
		putchar(*str++);
	putchar('\n');
}
