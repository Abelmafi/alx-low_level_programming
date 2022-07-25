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
	int fd;

	if (text_content == NULL)
		text_content = "";
	fd = creat(filename, 00600);
	if (fd == -1)
		return (-1);
	if (filename == NULL)
		return (-1);
	write(fd, text_content, sizeof(text_content));
	return (1);
}
