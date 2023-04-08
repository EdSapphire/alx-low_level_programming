#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A program that add positive numbers
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int low, high, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (low = 1; low < argc; low++)
	{
		for (high = 0; argv[low][high] != '\0'; high++)
		{
			if (!(isdigit(argv[low][high])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[low]);
	}
	printf("%d\n", sum);
	return (0);
}
