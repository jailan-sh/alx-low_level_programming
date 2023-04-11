#include <stdio.h>
#include <stdlib.h>


/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc : count argument
 * @argv : vector array of arguments
 * Return: 1 if number of arguments passed to your program is not exactly 1
 * 0 if not 
 */

int main(int argc, char *argv[])
{
	int coins = 0;
	int cents = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = cents / 25;
	cents = cents % 25;
	coins = coins + cents / 10;
	cents = cents % 10;
	coins = coins + cents / 5;
	cents = cents % 5;
	coins = coins + cents / 2;
	cents = cents % 2;
	coins = cents + coins;


	printf("%d\n", coins);
    return (0);
}
