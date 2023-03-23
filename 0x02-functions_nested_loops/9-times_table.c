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
	int c;

	j = 0;
	while (j < 10)
	{
		n = 0;
		while (n <10)
		{
			c =0;
			while (c <10)
			{
				c = c * n;

				_putchar(c + '0');
				_putchar(',');
				_putchar(' ');
			       	c++;
			} n++;
		} j++;
	}
	_putchar('\n');
}
