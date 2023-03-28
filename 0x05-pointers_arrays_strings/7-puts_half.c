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
	i = (l / 2);
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
		_putchar('\n');
}
