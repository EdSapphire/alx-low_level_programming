#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints all argument it
 * receives, one argument per line
 * @argc: Argument counter
 * @argv: Argumment vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
