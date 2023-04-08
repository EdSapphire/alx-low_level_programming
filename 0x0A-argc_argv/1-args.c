#include <stdio.h>
#include <stdlib.h>

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
	(void)argv;

	printf("%d\n", argc);
	
	return (0);
}
