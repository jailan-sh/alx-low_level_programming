#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @x : pointer to string
 *
 * Return: x
 */

char *cap_string(char *x)
{
	int i = 0;

	while (x[i] != '\0')
	{
		if (x[0] >= 97 && x[0] <= 122)
		{
			x[0] = x[0] - 32;
		}
		else if (x[i] == ' ' || x[i] == '\t' ||
		x[i] == ';' || x[i] == '.' || x[i] == '\n' || x[i] == '!' ||
		x[i] == '?' || x[i] == '"' || x[i] == ',' ||
		x[i] == '(' || x[i] == ')' ||
		x[i] == '{' || x[i] == '}')
		{
			if (x[i + 1] >= 97 && x[i + 1] <= 122)
			{
				x[i + 1] = x[i + 1] - 32;
			}

		}
		i++;
	}

	return (x);
}
