#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it.
 * @filename : text of file
 * @letters : the number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, w, r;
	char *buff = malloc(sizeof(char) * letters + 1);

	if (buff == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	r = read(fd, buff, letters);
	if (r < 0)
	{
		free(buff);
		return (0);
	}
	w = write(STDOUT_FILENO, buff, r);
	if (w < 0)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (w);
}
