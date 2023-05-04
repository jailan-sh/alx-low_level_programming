#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n : decimal number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while ((bit << 1) <= n)
	{
		bit <<= 1;
	}
	while (bit > 0)
	{
		if (n & bit)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		bit >>= 1;
	}
}
