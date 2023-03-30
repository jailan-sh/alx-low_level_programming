#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1 : first string
 * @s2 : second string
 * * Return: If str1 < str2, the negative difference of
 * the first unmatched characters.
 * If s1 == s2, 0.
 * If s1 > s2, the positive difference of
 * the first unmatched characters.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	}
		return (0);
}
