#include "main.h"

/**
 * _strstr - function that locates a substring
 * needle in the string haystack
 * @haystack : source string
 * @needle: searching string
 * Return: If a set is matched - a pointer to the locatesin haystring.
 * If no set is matched - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*haystack)
	{
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);

		}
		haystack++;
	}
	return ('\0');
}
