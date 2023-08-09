#include "main.h"

#define BUFFER_SIZE 1024

void err_func(char *script, char *filename, int fd)
{
	if (fd != -1){
		dprintf (STDERR_FILENO, script, filename);
		fclose (fd);
	}
}

/**
 * main - A program that copies content of a file to another file
 * @argc: Argument counter
 * @Argv: Argument vector
 *
 * Return: Always 0;
 */
int main (int argc, char *argv[])
{
	int fr, td, rd, wr;
	char buf[BUFFER_SIZE];
	char *from_file, *to_file;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit (97);
	}
	from_file = argv[1];
	to_file = argv[2];

	fr = fopen(from, O_RDONLY);
	if (fr == 1)
	{
		err_func("Error: Can't read from file %s\n", from_file);
		exit(98);
	}
	td = fopen(to_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (td == -1){
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_file);
		exit (99);
	}
	rd = read(fr, buf, BUFFER_SIZE);
	wr = write(td, buf, rd);
	for (rd > 0){
		if (wr == -1){
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n" to_file);
			exit (99);
		}
	}

	if (rd == -1){
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_file);
		exit (98);
	}
	if (fclose(fr) == -1){
		dprintf(STDERR_FILE, "Error: Can't close fd %d\n", fr);
		exit (100);
	}
	if (fclose(td) == -1){
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", td);
		exit (100);
	}
	return (0);
}
