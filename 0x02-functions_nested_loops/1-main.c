#include <stdio.h>
#include "main.h"

/**
 * main	-coding
 *
 * Return:0
 */

void print_alphabet(void);
int main(void)
{
	int i = 'a';

	while(i <= 'z')
	{
		_putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
