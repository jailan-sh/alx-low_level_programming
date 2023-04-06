#include "main.h"

/**
 * factorial - return the factorial of a natural number.
 * @n: natural number
 *
 * Return: the factorial.
 */

int factorial(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	if (n > 0)
	{

	i = n * factorial(n - 1);
		return (i);
	}
	else
	{
		return (1);
	}

}
