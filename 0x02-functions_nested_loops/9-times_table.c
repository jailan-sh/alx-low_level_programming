#include "main.h"
/**
 *
 *
 *
 */
void times_table(void)
{
	int j;
	int n;
	int result;

	j = 0;
	while (j < 10)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		n = 1;
		while (n <10)
		{
			_putchar(',');
			_putchar(' ');

			result = j * n;
			
			if (result < 9)
			{
				_putchar(result + '0');
				_putchar(' ');
			}
			else if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			 n++;
		} j++;
	}
	_putchar('\n');
}
