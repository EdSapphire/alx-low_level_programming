#include <stdio.h>

/**
 * main - A function that prints the number of arguments
 * passed into it
 * @argc: Counts the number of argument
 * @argv: A pointer of array of strings
 *
 * Return: 0,
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argv;

	for (i = 0; i <= argc; i++)
	{}
	printf("%d\n", i - 2);
	
	return (0);
}
