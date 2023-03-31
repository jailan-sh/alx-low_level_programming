#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */

void print_number(int n)
{
	if (n >= 1 && n <= 9)
	{
		_putchar(n + 48);
	}
	if (n >= 10 && n < 99)
	{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
	if (n >= 100 && n < 1000)
	{
		_putchar((n /100) + 48);
		_putchar((n /10) % 10 + 48);
	       _putchar((n %10) + 48);
	}
	if (n >= 1000 && n < 10000)
	{
		_putchar((n /1000) + 48);
		_putchar((n /100) % 10 + 48);
		_putchar((n /10) % 10 + 48);
		_putchar((n %10) + 48);
	}
	if (n < 0)
	{
		_putchar('-');
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
	else 
	{
		_putchar(48);
	}
}

