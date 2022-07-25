#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * append_text_to_file - append new text to existing file text.
 * @filename: filename.
 * @text_content: new text to be append.
 *
 * Return: nothing.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len;

	fd = open(filename, O_RDWR | O_APPEND);
	if (text_content == NULL)
		text_content = "";
	for (len = 0; text_content[len]; len++)
	{}
	if (fd == -1)
		return (-1);
	if (filename == NULL)
		return (-1);
	wr = write(fd, text_content, len);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}


