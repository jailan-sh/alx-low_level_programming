#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x : integer
 * @y : power
 *
 * Return: x
 */

int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}
	else
	{
		i = x * _pow_recursion(x, y - 1);
		return (i);
	}
}
