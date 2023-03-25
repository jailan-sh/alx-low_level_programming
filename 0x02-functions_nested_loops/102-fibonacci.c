#include <stdio.h>

/**
 * main - codig
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long a, b, result;

	a = 0;
	b = 1;

	for (i = 0; i < 50; i++)
	{
		result = a + b;
		printf("%d, ", result);
		a = b;
		b = result;
		if (i <49)
			printf(", ");
	}
	return (0);
}
