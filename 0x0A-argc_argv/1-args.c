#include "main.h"
#include <stdio.h>

/**
 * main - A function that prints the number of arguments
 * @argc: Counts the number of argument
 * @argv: A pointer of array of strings
 *
 * Return: 0,
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);	
	return (0);
}
