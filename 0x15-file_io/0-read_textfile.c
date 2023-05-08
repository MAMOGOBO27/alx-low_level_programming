#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile -  Read a text file and prints standard output.
 * @filename: letters it should read and print
 * @letters: number of letters it could read and print
 * Return: write actual number of bytes printed & read 0
 * when function fails Or filename Is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
