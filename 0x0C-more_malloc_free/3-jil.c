#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		((char *)ptr)[i] = 0;
	}
	return (ptr);
}
