#include <stdio.h>

/**
 * main - coding
 * return: 0
 */

int main(void)
{
	unsigned long a, i, b, result;
	float sum;

	a = 0;
	b = 1;

	for (i = 0; i <= 35; i++)
	{
		result = a + b;

		if (result < 4000000)
		       break;
		if ((result % 2) == 0)
			sum += result;
		a = b;
                b = result;
	}
				printf("%f\n", sum);
				return (0);
}
