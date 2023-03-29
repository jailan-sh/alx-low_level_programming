#include "main.h"

/**
 * *_strncat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * @n: number of source to be taken
 * Return:pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
	j++;
	}
	if  (i < n)
	{
	dest[i] = '\0';
	}

	return(dest);
}
