#include <stdio.h>

/**
 * main - coding
 * return: 0
 */

int main(void)
{
	unsigned long a, i, b, result,sum;

	a = sum = 0;
	b = 1;

	for (i = 0; i < 50; i++)
	{
		result = a + b;
			a = b;
		b = result;
		if (result % 2 == 0) && result < 4000000)
		{
			sum += result;
		}
	}
				printf("%lu\n", sum);
				return (0);
}
