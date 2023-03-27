#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s : pointer
 * return: 0
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i])
		
		i++;
	while (i--)
	{
		_putchar(s[i]);
		i--;
	}
	
	_putchar('\n');
}
