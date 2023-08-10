#include "main.h"

/**
 * append_text_to_file - Function that appends text to end of file
 * @filename: Name of file
 * @text_content : NULL terminated string to add to end of file
 *
 * Return: 1 on Success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ap, a = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[a] != '\0')
		a++;

	ap = open(filename, O_WRONLY | O_APPEND);

	if (ap == -1)
		return (-1);

	write(ap, text_content, a);

	return (1);
}
