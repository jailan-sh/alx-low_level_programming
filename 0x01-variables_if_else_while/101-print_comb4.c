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

	for (a = 0; a < 8; a++)
	{
		for (b = 1; b < 9; b++)
		{
			for (c = 2; c < 10; c++)
			{
				if (a < c && b < c && a < b && a != c && c != b && a != b)
				{
				putchar(a + '0');
			putchar(b + '0');
		putchar(c + '0');
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
