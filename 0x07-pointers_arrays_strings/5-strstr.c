#include "main.h"

/**
 * *_strstr - function finds the first occurrence of the substring
 * needle in the string haystack
 * @haystack : source string
 * @needle: searching string
 * Return : remaing of string or null if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	while (*haystack)
	{
		if (*haystack == *needle 

