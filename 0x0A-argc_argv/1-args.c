#include "main.h"
#include <stdio.h>

/**
 * main - Print number of arguments
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
