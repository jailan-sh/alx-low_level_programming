#include "main.h"

/**
 * _strlen : a function that returns the length of a string.
 * @s : pointer
 * return: void
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s[i]; i++)
	{
		_putchar(i + 48);
	}
}
