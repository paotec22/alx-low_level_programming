#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Create file with write only permissions
 * if the file does not exist
 * Truncate file if it exists; fill file with the contents of text_content.
 * @filename: The name of the file to create
 * @text_content: Content of the text
 * Return: 1 if success, -1 if failed.
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t file;
	ssize_t b_write;
	size_t length;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	b_write = 0;
	if (text_content)
	{
		for (length = 0; text_content[length]; lenth++)
			;
		b_write = write(file, text_content, length);
	}
	close(file);
	if (b_write == -1)
		return (-1);

	return (1);
}
