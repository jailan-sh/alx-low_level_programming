#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @a : 2dimentional arry
 * return: void
 */

void print_chessboard(char (*a)[8])
{
	int r;
	int c;

	for (r = 0; r < 8; r++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[r][j]);
		}
		_putchar('\n');
	}
}
