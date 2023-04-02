#include "main.h"

void print_times_table(int n)
{
	int c, r, res;

	if  (!(n >15 || n < 0))
	{
		for (c=0; c <= n ; c++)
		{
			_putchar(48);
			_putchar(',');
			_putchar(' ');

			for (r = 1; r <= n; r++)
			{
				res = c * r;

				if (res < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(res + 48);
				}
				else if (res >= 10 && res < 100)
				{
					_putchar(' ');
					_putchar((res / 10) + 48);
					_putchar((res % 10) + 48);
				}
				else if (res >= 100)
				{
					_putchar((res / 100) +48);
					_putchar((res / 10) % 10 + 48);
                                        _putchar((res % 10) + 48);
				}
				if (r != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}_putchar('\n');
	}
