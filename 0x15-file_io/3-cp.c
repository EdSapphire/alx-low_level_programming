#include "main.h"

#define BUFFER_SIZE 1024


/**
 * main - A program that copies content of a file to another file
 * @argc: Argument counter
 * @Argv: Argument vector
 *
 * Return: Always 0;
 */
int main (int argc, char *argv[])
{
	int r = 0, w = 1024;
	int file_in, file_out;
	char buf[BUFFER_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit (97);
	
	file_in = open(argv[1], O_RDONLY);
	
	if (file_in == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_out = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR 
			| S_IRGRP | S_IWGRP | S_IROTH);
	
	if (file_out == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_in), exit(99);
	}
	
	while (w == 1024)
	{
		w = read(file_in, buf, 1024);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		r = write(file_out, buf, r);
		if (r < w)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	
	if (close(file_in) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_in);
		exit(100);
	}
	
	if (close(file_out) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_out);
		exit(100);
	}
		
	return (0);
}
