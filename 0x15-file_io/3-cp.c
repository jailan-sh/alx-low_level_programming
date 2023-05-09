#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef BUFF_SIZE
#define BUFF_SIZE 1024
#endif

int main(int argc, char *argv[])
{
	int r, w, outp, inp;
	char buff[BUFF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,"Usage: cp file_from file_to\n");
		exit(97);
	}
	inp = open(argv[1], O_RDONLY);
	if (inp == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	outp = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | 0664);
	if (outp == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((r = read(inp, buff, BUFF_SIZE)) > 0)
	{
		w = write(outp, buff, r);;
		if (w == -1)
		{
			dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close(inp);
	if (inp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", inp);
		exit(100);
	}
	close(outp);
	if (outp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", outp);
		exit(100);
	}
	return (0);
}
