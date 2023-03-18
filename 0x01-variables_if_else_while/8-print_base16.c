#include <stdio.h>
/**
 *main	-coding
 *
 *Return: 0
 */

int main(void)
{
	int i = 0;
	int ch;

	while (i <= 9)
	{
		putchar('i'); i++;
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar ('\n');
	return (0);
}

