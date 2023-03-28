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

		if (l % 2 == 0)
		{
			for (i = 0; i <= (l / 2); i++)
			{
				l--;
				_putchar(str[i]);
			}

		}
		else if 
		{
			for (i = 0; i <= (l + 1 / 2);i++)
			{
				l--;
				_putchar(str[i]);
			}
		}
		_putchar('\n');
}
