#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac : first argument count
 * @av : second argument vector 2D array
 *
 * Return: NULL if ac == 0 or av == NULL
 * pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *new;
	int i, j;
	int len = 0;
	int to_len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		to_len += len + 1;
	}
	new = malloc(sizeof(char) * to_len);

	if (new == NULL)
	{
		return (NULL);
	}

	len = 0;
	for (i = 0; i < ac; i++)
	{

		for (j = 0; av[i][j]; j++)
			new[len++] = av[i][j];
		new[len++] = '\n';
	}
	new[len] = '\0';
	return (new);
}
