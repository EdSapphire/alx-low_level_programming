#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: Name of file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int pt, rd, wr;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (wr = 0; text_content[wr]; wr++)
			;
	}

	pt = open(filename, O_WRONLY | O_APPEND);

	if (pt == -1)
		return (-1);

	rd = write(pt, text_content, wr);

	if (rd == -1)
		return (-1);
	
	close(pt);

	return (1);
}
