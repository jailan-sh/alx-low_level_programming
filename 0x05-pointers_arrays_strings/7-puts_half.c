#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str : pointer
 * return: printer
 */

void puts_half(char *str)
{
	int i;
	int l;

	for (l = 0; str[l] != '\0'; l++)
		;
	l++;
	
	for (i = (l / 2); str[i] != '\0'; i++)
			{
				_putchar(str[i]);
			}
		_putchar('\n');
}
