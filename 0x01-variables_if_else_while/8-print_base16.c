#include <stdio.h>
/**
 *main	-coding
 *
 *Return: 0
 */

int main(void)
{
	int num;
	int ch;

	for (num = 0; num <= '9'; num++)
	{
		putchar(48 + num);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar ('\n');
	return (0);
}

