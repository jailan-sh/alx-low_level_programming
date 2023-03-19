#include <stdio.h>
/**
 * main	-coding
 * 
 * Return: 0
 */
int main(void)
{
	int j;
	int a;

	for (j = 0; j < 10; j++)
	{
		for (a = 1; a < 10; a++)
		{
			if (j < a && j!= a)
			{
				putchar(j + '0');
					putchar(a + '0');
			putchar(',');
	putchar(' ');
	}
		}
	}
	putchar('\n');
		return (0);
}
