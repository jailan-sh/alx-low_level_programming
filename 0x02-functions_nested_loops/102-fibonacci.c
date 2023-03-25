#include <stdio.h>

/**
 * main - codig
 * Return: 0
 */

int main(void)
{
	int i, a, b, result;

	a = 0;
	b = 1;

	for (i = 0; i <= 50; i++)
	{
		printf("%d, ", a);
		result = a + b;
		a = b;
		b = result;
	}
	return (0);
}
