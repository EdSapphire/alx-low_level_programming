#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character
 * @str: String to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		putchar(str[index]);

	putchar('\n');
}
