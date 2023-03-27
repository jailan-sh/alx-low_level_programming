#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s : pointer
 * return: 0
 */

void rev_string(char *s)
{
	int i = 9;
	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
