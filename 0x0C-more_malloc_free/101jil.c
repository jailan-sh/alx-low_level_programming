#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int i;
	
	long long int j, result;
	
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i <= argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	if (atoi(argv[1] < 0 || atoi(argv[2] < 0)
				{
				printf("Error\n");
				exit(98);
				}

	if (atoi(argv[1] = 0 || atoi(argv[2] = 0)
			{
			printf("0\n");
			}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%lld\n", result);
	return(0);
}
