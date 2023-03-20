#include <stdio.h>

/**
 * main - Declare a variable and assign an alphabetical value
 * check that the value is less than the previous one
 * decrement the value
 * print the value
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet = 'z';

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
