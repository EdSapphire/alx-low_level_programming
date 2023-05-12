#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that reads and prints text files
 * @filename: The name of the file
 * @letters: Number of letters it should read and print
 *
 * Return: Number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t rd, wr;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	rd = read(fd, buf, letters);
	if (rd == -1)
		return (0);
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1 || wr != rd)
		return (0);

	free(buf);
	close(fd);
	return (wr);
}
