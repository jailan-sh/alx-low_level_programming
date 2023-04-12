#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory
 * @str : string
 *
 * Return: NULL if str = NULL,
 * a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *t;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	t = malloc(strlen(str) + 1);

	if (t == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(str) + 1; i++)
	{
		t[i] = str[i];
	}
	/**
	 * strcpy(t, str);
	 */
	return (t);
	free(t);
}
