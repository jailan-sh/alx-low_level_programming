#include "main.h"

/**
 * int _strspn - a function that gets the length of a prefix substring
 * @s : pointer string
 * @accept : he other string
 * retrun : number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j =0;
	int k;
	int c;
       	unsigned int res = 0;

	
	for (i = 0; s[i] < '\0'; i++)
	{
		;
		i++;
	}
	for (j = 0; accept[j] < '\0'; j++)
	{
		;
		j++;
	}
	for (k = 0; k <= i; k++)
	{
		for (c = 0; c <= j; c++)
		{
			if (accept[c] == s[k])
			{
				res++; 
				break;
			}
		}
	}
	return (res);
}

