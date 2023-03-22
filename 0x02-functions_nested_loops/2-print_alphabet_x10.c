#include "main.h"

/**
 * print_alphabet_x10 - Declare an alphabet variable
 * print lowercase alphabet x10
 * followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i = 1;

	while (i <= 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		i++;
	}
}
