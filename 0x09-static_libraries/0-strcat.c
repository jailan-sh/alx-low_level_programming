#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return:pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int destlen = 0;

	while (dest[i++])
		destlen++;
	for (i = 0; src[i]; i++)
		dest[destlen++] = src[i];
	return (dest);
}
