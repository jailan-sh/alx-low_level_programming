#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * close_file - Closes file.
 * @fd : fd
 *
 * Return: void
 */

void close_file(int fd)
{
	int c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c);
	exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc : count argument
 * @argv : array pointer to arguments.
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int r, w, outp, inp;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	inp = open(argv[1], O_RDONLY);
	if (inp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	outp = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC , 0664);
	if (outp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((r = read(inp, buff, 1024)) > 0)
	{
		w = write(outp, buff, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_file(inp);
	close_file(outp);
	return (0);
}
