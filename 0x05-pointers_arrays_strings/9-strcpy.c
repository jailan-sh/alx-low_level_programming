#include "main.h"

/**
 * *_strcpy -  a function that copies the string
 *
 * @dest : pointer
 * @src : pointer
 * return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = -1; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		dest++;
		src++;
	}
	return (dest);
}
