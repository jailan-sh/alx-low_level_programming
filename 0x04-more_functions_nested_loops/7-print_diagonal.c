#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */

void print_diagonal(int n)
{
	int f;
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		f = 1;

		while (f <= n)
		{
			c = 1;
			while (c <= f)
			{
				_putchar(' ');
				c++;
			}
			_putchar('\\');
			f++;
		}
		_putchar('\n');
	}
}
