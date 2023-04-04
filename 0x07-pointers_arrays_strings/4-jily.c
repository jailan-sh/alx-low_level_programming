#include "main.h"

/**
 * *_strpbrk - function locates the first occurrence in the string s of
 * any of the bytes in the string accept
 * @s : pointer to first char
 * @accept : string
 * return : s
 */

char *_strpbrk(char *s, char *accept)
{
	if (*s = '\0' || *accept = '\0' )
		return ('\0');
	const char *temp;

	while (*s != '\0')
	{
		temp = accept;

		while (*temp != '\0')
		{

			if (*s = *accept)
			{
				return (char*) s;
			}
			temp++;
		}
		s++;
	}
}
