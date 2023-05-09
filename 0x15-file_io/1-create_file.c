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
	int pt, rd, con;

	if (filename == NULL)
		return (-1);

	pt = open(filename, O_CREAT | O_TRUNC, O_RDWR);

	if (pt == -1)
		return (-1);

	if (text_content == NULL)
	{
		for (con = 0; text_content[con];)
			con++;
	}
	
	rd = write(pt, text_content, con);
	
	if (rd == -1)
		return (-1);

	close(pt);

	return (1);
}
