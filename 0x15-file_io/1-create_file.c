#include "main.h"
#include <string.h>
/**
 * create_file - function that creates a file.
 * @filename : file
 * @text_content : content
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w;
	int len = strlen(text_content);

	if (filename == 0)
	{
		return (0);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == 0)
	{
		return (-1);
	}
	w = write(fd, text_content, len);
	if (w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
