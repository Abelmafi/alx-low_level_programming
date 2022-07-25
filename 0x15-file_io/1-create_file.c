#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * create_file - creats file.
 * @filename: file name.
 * @text_content: file text content.
 *
 * Return: nothing.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wrt, len;

	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (filename == NULL)
		return (-1);
	for (len = 0; text_content[len]; len++)
	{}
	wrt = write(fd, text_content, len);
	if (wrt == -1)
		return (-1);
	return (1);
}
