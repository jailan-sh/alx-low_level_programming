#include "main.h"

/**
 * tprint_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return:0
 */

void print_alphabet(void)
{	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++; }
	_putchar('\n');
}
