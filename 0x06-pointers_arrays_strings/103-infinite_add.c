#include "main.h"
#include <stdio.h>

char *add_strings(char *n1, char *n2, char *r, int r_index);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * add_strings - Adds the numbers stored in two strings
 * @n1: First number
 * @n2: Second number
 * @r: Buffer that store the result
 * @r_index: The current index of the buffer
 *
 * Return: Pointer to the result
 */
char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, count = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += count;
		*(r + r_index) = (num % 10) + '0';
		count = num / 10;
	}

	for (; *n1; n1--, r_index--)
	{
		num = (*n1 - '0') + count;
		*(r + r_index) = (num % 10) + '0';
		count = num / 10;
	}

	for (; *n2; n2--, r_index--)
	{
		num = (*n2 - '0') + count;
		*(r + r_index) = (num % 10) + '0';
		count = num / 10;
	}

	if (count && r_index >= 0)
	{
		*(r + r_index) = (count % 10) + '0';
		return (r + r_index);
	}

	else if (count && r_index < 0)
		return (0);

	return (r + r_index + 1);
}
/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: Buffer that store the result
 * @size_r: Buffer size
 *
 * Return: Result pointer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, num1 = 0, num2 = 0;

	for (i = 0; *(n1 + i); i++)
		num1++;

	for (i = 0; *(n2 + i); i++)
		num2++;

	if (size_r <= num1 + 1 || size_r <= num2 + 1)
		return (0);

	n1 += num1 - 1;
	n2 += num2 - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}
