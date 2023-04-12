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
		int l1, l2, i, j;
	char *new;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	l1 = 0, l2 = 0;
	while (*(s1 + l1))
		l1++;
	while (*(s2 + l2))
		l2++;

	new = malloc(sizeof(char) * (l1 + l2 + 1));

	if (new == 0)
		return (0);

	for (i = 0; i < l1; i++)
		*(new + i) = *(s1 + i);

	for (i = 0, j = l1; i <= l2; j++, i++)
		*(new + j) = *(s2 + i);

	return (new);
}
