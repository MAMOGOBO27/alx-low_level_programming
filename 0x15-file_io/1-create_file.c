#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - Creates a file
 * @filename: A pointer to the file name created
 * @text_content: A Pointer written in a string file
 * Return: Fail -1, Success (1)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (len = 0; text_content[len];)
	len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
	return (-1);

	close(fd);

	return (1);
}
