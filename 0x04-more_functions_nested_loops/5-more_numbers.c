#includ "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * return: void
 */

void more_numbers(void)
{
	int count;
	int num;
	int cond;

	for (count = '0'; count < 10; count++)
	{
		for (num = '0'; num <= 14; num++)
		{
			cond = num;
			if (num > '9')
			{
				_putchar(1 + 48);
				chond = num  % 10;
			}
			_putchar(chond+ 48);
		}
		_putchar('\n');
	}
}
