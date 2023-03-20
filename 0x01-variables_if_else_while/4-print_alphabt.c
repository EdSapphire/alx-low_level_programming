#include <stdio.h>

/**
 * main - Declare alowercase alphabet variable
 * increment the declared variable
 * check that variable does not
 * include letter q and e
 * print the variable
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
