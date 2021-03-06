#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * cp_file - copy file content from sourse to destination
 * @sourse: sourse file.
 * @target: destination file.
 *
 * Return: Always 0.
 */
int cp_file(char *sourse, char *target)
{
	int fd1, fd2, rd, wr;
	char buffer[1024];

	fd1 = open(sourse, O_RDONLY);
	fd2 = open(target, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	rd = read(fd1, buffer, 1024);
	wr = write(fd2, buffer, rd);
	if (rd == -1)
		return (98);
	if (wr == -1)
		return (99);
	if (rd > 0)
	{
		while (rd > 0)
		{
			rd = read(fd1, buffer, 1024);
			wr = write(fd2, buffer, rd);
		}
	}
	if (close(fd1) == -1 || close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		return (100);
	}
	return (1);
}
/**
 * main - check the code
 * @ac: argument counter
 * @av: argument(filename) pointer.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	res = cp_file(av[1], av[2]);
	if (res == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (res == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (res == 100)
	{
		exit(100);
	}
	return (0);
}
