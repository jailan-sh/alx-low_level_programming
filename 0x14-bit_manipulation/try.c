#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n : decimal number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i;
	unsigned long int mask = 0x01;
	int bit = (sizeof(n) * 8);

	if (n == 0)
	{	_putchar('0');
	return;
	}

	for (i = 0; i < bit; i++, bit--)
	{
		if (n & (mask << i))
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
