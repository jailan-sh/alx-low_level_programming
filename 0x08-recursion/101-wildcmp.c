#include "main.h"
#include <stdio.h>

/**
 * wildcmp - a function that compares two strings
 * @s1 : first string
 * @s2 : second string
 *
 * Return: 1 if the strings can be considered identical otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		while (*(s2 + 1) == '*')
		{
			s2++;
		}
		if (*(s2 + 1) == '\0')
		{
			return (1);
		}
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
					{
					return (1);
					}
					s1++;
					}
}
					return (0);
}

