#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100 of a Fizz-Buzz Test
 * followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int buz;

	for (buz = 1; buz <= 100; buz++)
	{
		if ((buz % 3) == 0 && (buz % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((buz % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((buz % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", buz);
		}
		if (buz != 100)
		{
			printf(" ");
		}
	}
		printf("\n");
		return (0);
}
