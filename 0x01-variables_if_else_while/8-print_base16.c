#include <stdio.h>
/**
 *main	-coding
 *
 *Return: 0
 */

int main(void)
{
	int num;

	num = 0;

	int ch;

	while (num < 10)
	{
		putchar(num);
		num++;
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar ('\n');
	return (0);
}
