#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @x : The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *x)
{
	char leet_char[] = "aAeEoOtTlL";
	char leet_num[] = "4433007711";
	int l;
	int i;

	i = 0;
	while (x[i] != '\0')
	{
		l = 0;
		while (leet_char[l] > 10)
		{
			if (x[i] == leet_char[l])
			{
				x[i] = leet_num[l];
			}
			l++;
		}
		i++;
	}
	return (x);
}
