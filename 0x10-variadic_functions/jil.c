#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;
	if (n == 0)
	{
		return;
	}
	va_start(nums, n);


	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL && i < n-1)
		{
			printf("%s",separator);
		}
	}
				printf("\n");
				va_end(nums);
}
