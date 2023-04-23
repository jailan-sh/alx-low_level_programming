#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: String to be printed between numbers
 * @n: number of variadic arguments
 * @...: Arguments Variadic
 *
 * Return: No return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
				printf("\n");
				va_end(nums);
}
