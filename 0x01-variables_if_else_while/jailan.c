#include <stdio.h>

/**
 * main -coding
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a < '8'; a++)
	{
		for (b = '1'; b < '9'; b++)
		{
			for (c = '2'; c <= '9'; c++)
			{
				if (a < b && b < c)
				{
				putchar(a);
			putchar(b);
		putchar(c);
		{

			if (a < 7)
			{
			putchar(',');
		putchar(' ');
			}
		}
				}
			}
		}
	}
putchar('\n');
return (0);
}
