#include "main.h"

/**
 * print_triangle - coding
 * @size : variable
 * return : void
 */

void print_triangle(int size)
{
	int col;
	int row;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (col = 1; col <= size; col++)
	{
		for (row = 1; row <= size; row++)
		{
			if (col + row <= size)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
