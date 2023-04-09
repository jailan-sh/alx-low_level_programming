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
	int amount = atoi(argv[argc - 1]);
	int i;
	int coins[] = {25, 10, 5, 2, 1};
	int total_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	else if (amount < 0)
                {
                        printf("0\n");
                        return (0);
		}
			else
	{
		for (i = 0; i < 5; i++)
		    {
	    int count = amount / coins[i];
	total_coins += count;
	amount -= count * coins[i];
    }
	}
	printf("Total coins used: %d\n", total_coins);
    return (0);
}
