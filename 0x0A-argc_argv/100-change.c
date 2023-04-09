#include <stdio.h>
#include <stdlib.h>

/**
 * main - Takes in exactly one argument for minimum coin count
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0 if exactly 1 argument is passed into this program, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i;
	int coin = 0;
	int values[] = {25, 10, 5, 2, 1};
	int money = atoi(argv[1]);


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (money < 0)
	{
		printf("0\n");
	}
	for (i = 0; i < 5; i++)
	{
		if (money >= values[i])
		{
			coin += money / values[i];
			money = money % values[i];
			if (money % values[i] == 0)
			{
				break;
			}
		}
	}

		printf("%d\n", coin);
	return (0);
}

