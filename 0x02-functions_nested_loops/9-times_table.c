#include "main.h"
/**
 *
 *
 *
 */
void times_table(void)
{
	int num1;
	int num2;
	int num3;
	int n;

	num1 = 0;
	while (num1 < 10)
	{
		for (num2 = 0; num2 <10; num2++)
		{
			for (num3 =0; num3 <10; num3++)
			{
				n = num2 * num3;
				_putchar(n);
				_putchar(',');
				_putchar(' ');
			}
		} num1++;
	}
	_putchar('\n');
}
