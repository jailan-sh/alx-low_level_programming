#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1 : 1st string
 * @s2 : second string
 *
 * Return: new string or NULL if null
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *new;
	unsigned int l1 = strlen(s1);
	unsigned int l2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	new = malloc(l1 + l2 + 1);
			if (new == NULL)
			{
			return (NULL);
			}
			strcpy(new, s1);
			strcat(new, s2);
			return (new);
}
