#include "main.h"
#include <stddef.h>

/**
 * *_strchr - a function that locates a character in a string.
 * @s : is the pointer to string
 * @c : is the character
 * Return: first c or null if it not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
