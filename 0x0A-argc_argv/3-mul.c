#include <stdio.h>
#include <stdlib.h>

/**
 * main _ print the arguments of the program
 * @argc : count
 * @argv : vector
 * return: 0
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	else 
	{
		result = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%d\n", result);
	}
	return (0);
}
