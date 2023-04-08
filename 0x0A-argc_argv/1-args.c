#include <stdio.h>

/**
 * main - coding mai function
 * @argc : number of arguments
 * @argv : string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		(*argv)++;
	}
	printf("%d\n", i - 1);
	return (0);
}
