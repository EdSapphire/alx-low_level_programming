#include "main.h"

/**
 * read_textfile - A function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: Name of file
 * @letters: The number of letters it should read and print
 *
 * Return: Actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, pt;
	char *data;

	data = malloc(letters);
	if (data == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(data);
		return (0);
	}

	rd = read(fd, data, letters);

	pt = write(STDOUT_FILENO, data, rd);

	close(fd);

	return (pt);
}
