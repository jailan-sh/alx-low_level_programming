#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @x : pointer to string
 * leet : arry of characters
 * return: x
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
