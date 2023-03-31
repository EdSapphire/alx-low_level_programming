#include "main.h"
#include <stdio.h>

/**
 * print_buffer - A function that prints a buffer
 * @b: Buffer to be printed
 * @size: Size of buffer bytes
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int num, len;

	for (num = 0; num < size; num += 10)
	{
		printf("%08x: ", num);

		for (len = 0; len < 10; len++)
		{
			if ((len + num) >= size)
				printf("  ");

			else
				printf("%02x", *(b + len + num));

			if ((len % 2) != 0 && len != 0)
				printf(" ");
		}

		for (len = 0; len < 10; len++)
		{
			if ((len + num) >= size)
				break;

			else if (*(b + len + num) >= 31 &&
				 *(b + len + num) <= 126)
				printf("%c", *(b + len + num));

			else
				printf(".");
		}

		if (num >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
