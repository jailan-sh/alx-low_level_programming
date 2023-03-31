#include "main.h"

/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 */

void print_number(int n)
{
	int m;

	if  (n >= 10 && n < 100)
	{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
	if (n < 10 && n >= 0)
	{
		_putchar(n + 48);
	}
	if (n < 0)
	{
		_putchar('-');
		m = -n;
		_putchar((m / 10) + 48);
		_putchar((m % 10) + 48);
	}
	if  (n >= 100 && n < 1000)
	{
		_putchar((n / 100) + 48);
		_putchar((n / 10) % 10 + 48);
		_putchar((n % 10) + 48);
	}
	if  (n >= 1000 && n <= 10000)
	{
		_putchar((n / 1000) + 48);
		_putchar((n / 100) % 10 + 48);
			_putchar((n / 10) % 10 + 48);
			_putchar((n % 10) + 48);
	}
}
