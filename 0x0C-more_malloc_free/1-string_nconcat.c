#include "main.h"
#include <stdlib.h>
#include <strig.h>

/**
 * string_nconcat -  concatenates two strings
 * @s1: string1
 * @s2: string2
 * @n: n bytes of string 2
 *
 * Return: Pointer to allocated memory of s1 + nbytes of s2
 */

#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	s2 = "";

	new = malloc(strlen(s1) + n + 1);
	if (new == NULL)
		return (NULL);
	strcpy(new, s1);

	for (i = 0, j = strlen(s1); i < n && s2[i] != '\0'; i++, j++)
	{
		new[j] = s2[i];
	}
	new[j] = '\0';
	return (new);
}
