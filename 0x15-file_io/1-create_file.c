#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: Name of file to create
 * @text_content: NUll terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, t = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[t] != '\0')
	{
		t++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	write(fd, text_content, t);

	return (1);
}
