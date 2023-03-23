#includ "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * return: void
 */

void more_numbers(void)
{
	int a;
	int b;

	a = 0;

	while (a <= 9)
	{
		b = 0;

		while (b <= 14)
		{
			_putchar(b + 48);
			b++;
		}
		_putchar('\n');
		a++;
	}
}
