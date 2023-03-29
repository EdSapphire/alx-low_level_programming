#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * puts_half - A function that prints half of a string
 * @str: String to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, j = 0, n;

	while (str[i++])
		j++;

	if ((j % 2) == 0)
		n = j / 2;

	else
		n = (j + 1) / 2;

	for (i = n; i < j; i++)
		putchar(str[i]);

	putchar('\n');
}
