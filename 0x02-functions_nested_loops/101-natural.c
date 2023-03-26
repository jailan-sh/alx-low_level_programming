#include <stdio.h>

/**
  * main - computes and prints the sum of all the multiples of
  * 3 or 5
  * Return: 0
  */

int main(void)
{
	int m, pro;

	for (m = 3; m <= 1024; m++)
	{
		if ((m % 3 == 0) || (m % 5 == 0))
			pro += m;
	}
	printf("%d\n", pro);
		return (0);
}
