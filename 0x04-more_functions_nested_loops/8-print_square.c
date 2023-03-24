#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */

void print_square(int size)
{
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (size = 1; size >= 1; size++)
		{
			for (c = 1; c <= size; c++)
			{
				_putchar('#');
				_putchar('\n');
			}
		}
	}
}
