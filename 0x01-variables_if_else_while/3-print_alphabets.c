#include <stdio.h>

/**
 * main - Declare two variables for lowercase and uppercase alphabets
 * increment and print the lowercase
 * increment and print the uppercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet = 'a';
	char ALPHABET = 'A';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (ALPHABET = 'A'; ALPHABET <= 'Z'; ALPHABET++)
	{
		putchar(ALPHABET);
	}
	putchar('\n');
	return (0);
}	
