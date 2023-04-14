#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
	free(new);
}
