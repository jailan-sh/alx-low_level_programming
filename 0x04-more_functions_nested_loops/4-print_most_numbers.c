#include "main.h"

/**
 * print_most_numbers - prints the numbers
 * @a : variable 0 to 9
 * Return: void
 */

void print_most_numbers(void)
{
	int a;

	a = 0;

	while (a < 10)
	{
		if ((a = '2') && (a = '4'))
		{
			continue;
		}
		a++;
		_putchar(a +'0');
	}
	_putchar('\n');
}
