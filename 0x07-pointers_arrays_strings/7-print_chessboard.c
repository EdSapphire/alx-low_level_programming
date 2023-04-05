#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_chessboard - A function that prints the chessboard
 * @a: The rows
 *
 * Return: Void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			if (j == 7)
			{
				_putchar(a[i][j]);
				_putchar('\n');
			}
			else
				_putchar(a[i][j]);
	}
}
