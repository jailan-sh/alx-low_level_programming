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
       	unsigned int res = 0;

	
	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
			if (accept[j] == s[i])
			{
				res++;
				return (res);
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (res);
			}
		}
	}
	return (res);
}

