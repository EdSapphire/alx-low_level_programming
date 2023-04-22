#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function prints the opcodes of its own
 * @argc: Argument counter
 * @argv: Argument vector
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int num, op;
	int (*bytes)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("Error\n");
		exit(1);
	}

	for (op = 0; op < num; op++)
	{
		opcode = *(unsigned char *)bytes;
		printf("%.2x", opcode);

		if (op == num - 1)
			continue;
		printf(" ");

		bytes++;
	}
	printf("\n");
	return (0);
}
