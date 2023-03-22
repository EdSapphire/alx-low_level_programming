#include "main.h"

/**
 * main - Declare a variable and assign alphabet value
 * print the alphabet in lowercase
 * followed by a new line
 *
 * Return: void 
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
