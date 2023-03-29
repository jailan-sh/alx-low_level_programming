#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest : pointer to string
 * @src : pointer to string
 * return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int destlen = 0;

	while (dest[i++])
		destlen++;
	for (i= 0; src[i]; i++)
		dest[destlen++] = src[i];
	return (dest);
}
