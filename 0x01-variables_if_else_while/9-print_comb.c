#include <stdio.h>
/**
 * main	-coding
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(48 + num);
	}
	putchar (',');
	return (0);
}

