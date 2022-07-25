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
	int fd, sz;
	char *c = (char *) malloc(letters * sizeof(char) + 1);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	sz = read(fd, c, letters);
	if (sz < 0 || sz == '\0')
		return (0);
	c[sz] = '\0';
	printf("%d %s\n", fd, c);
	return (sz);
}
