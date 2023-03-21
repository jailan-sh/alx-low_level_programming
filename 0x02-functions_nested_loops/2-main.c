#include <stdio.h>
#include "main.h"
/**
 * main	-coding
 * Return: 0
 */
void print_alphabet_x10(void);
int main(void)
{
	int i;
	int c;
	i = 0;

       while (i < 10)
       {
	       for (c = 'a'; c <= 'z'; c++)
	       {
		       _putchar(c);
	       }
	       i++;
	       _putchar('\n');
       }
       return (0);
}
