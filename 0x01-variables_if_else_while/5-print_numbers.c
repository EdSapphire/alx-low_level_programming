#include <stdio.h>

/**
 * main - Declare an integer variable
 * increment the variable
 * variable less than 10
 * print the variable
 *
 * Return: Always 0.
 */
int main(void)
{
	int number = 0;

	for (number = 0; number < 10; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
