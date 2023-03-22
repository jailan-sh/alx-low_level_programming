#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * h = hour, m = minutes
 * / 10 allows second digit to rotate
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int a = 0;
	int b;
	int c;
	int d;

	while (a < 10)
	{
		b = 0;
		while (b < 6)
		{
			c = 0;
			while (c < 4)
			{
				d = 0;
			while (d < 3)
			{
				_putchar(a + '0');
				_putchar(b + '0');
				_putchar(':');
				_putchar(c + '0');
				_putchar(d + '0');
			}d++
			} c++;

		} b++;
	} a++;
	_putchar('\n');
}
