#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main	-coding
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n % 10) > 5)
	{
		printf("the lastdigit of %d is %d and is greater than \n5", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0", n, n % 10);
	}
	else
	{
		printf("last digit is %d is %d and is 0\n", n, n % 10);
	}
	return (0);
}
