#include "main.h"
/**
 * print_alphabet_x10 -coding
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int c;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		} i++;
	_putchar('\n');
	}
}
