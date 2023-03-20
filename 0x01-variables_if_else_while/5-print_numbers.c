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
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);

	printf("\n");
	return (0);
}
