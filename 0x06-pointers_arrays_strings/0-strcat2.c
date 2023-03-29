#include "main.h"

char *_strcat(char *dest, char *src)
{
	int j;
	int i;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		dest[i] = src[j];
	i++;
	j++;
	dest[i] = '\0';
	resturn (dest);
}
