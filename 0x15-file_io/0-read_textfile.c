#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it to
 * the POSIX standard output.
 * @filename: The text file
 * @letters: Number of letters it should read and print
 *
 * Return: 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ptr;
	ssize_t rd, wrt;
	char *buf;
	
	ptr = open(filename, O_RDONLY);

	if (filename == NULL)
		return (0);
	if (ptr == -1)
		return (0);
	
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	rd = read(ptr, buf, letters);
	wrt = write(STDOUT_FILENO, buf, rd);

	free(buf);
	close(ptr);
	return (wrt);
}
