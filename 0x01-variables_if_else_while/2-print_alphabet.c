#include <stdio.h>

/**
 * main - Declare a variable that is the first letter of the alphabet
 * increment the current value
 * print the current value.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
