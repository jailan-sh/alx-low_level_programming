#include "main.h"

/**
 * *_strncat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * @n: number of source to be taken
 * Return:pointer to the resulting string
 */

_strncat(char *dest, char *src, int n)
{
	int i;

	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0')
		i++;
	n--;
	dest[i] = src[n];
	if (! (dest[i] = src[n]))
	{
		return (dest);
	}
	dest[i] = '\0';
	return (dest);
}
