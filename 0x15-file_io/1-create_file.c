#include "main.h"

/**
 * create_file - A function that creates file
 * @filename: Name of file to create
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int ptr, crt, rdw;

	if (filename == NULL)
		return (-1);

	ptr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (ptr == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (crt = 0; text_content[crt]; crt++)
			;
	}
	
	rdw = write(ptr, text_content, crt);

	if (rdw == -1)
		return (-1);

	close(ptr);

	return (1);
}
