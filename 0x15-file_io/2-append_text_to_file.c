#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename : file name
 * @text_content : content
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;
	int len = 0;

	if (filename == 0)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
		{
			return (-1);
		}
	if (text_content)
	{
		len = strlen(text_content);
		w = write(fd, text_content, len);
		if (w == -1)
		{
			return (-1);
		}
	}
	close (fd);
	return (1);
}
