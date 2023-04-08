#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc : count of arguments
 * @argv : vector string
 *
 * Return: 1 if are o iteger arguments otherwise 0.
 */

int main(int argc, char *argv[])
{
	int num;
	int i = 0;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);

	if (num == 0)
	{
		printf("Error\n");
		return (1);
	}
	result += num;
	}
	printf("%d\n", result);
	return (0);
}
