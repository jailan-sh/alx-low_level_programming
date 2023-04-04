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
	while (*haystack)
	{
		if (*haystack == *needle)
			return (haystack);
				haystack++;
	}
	return ('\0');
}
