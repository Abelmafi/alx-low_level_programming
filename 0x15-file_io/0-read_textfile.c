#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - read file.
 * @filename: file name.
 * @letters: print char size.
 *
 * Return: number of printed chars.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wt;
	char *c = (char *) malloc(letters * sizeof(char) + 1);

	if (c == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	rd = read(fd, c, letters);
	if (rd < 0)
		return (0);
	wt = write(STDOUT_FILENO, c, rd);
	if (wt < 0)
		return (0);
	close(fd);
	free(c);
	return (rd);
}
