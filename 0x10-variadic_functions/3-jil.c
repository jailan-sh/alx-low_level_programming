#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

void print_all(const char * const format, ...)
{
	unsigned int i, len;
	float d;
	char a;
	char *str;
	int x;

	va_list(strings);

	len = strlen(format);

	va_start(strings, format);

	i = 0;
	while (i < len)
	{
		if (format[i] == 'c')
		{
			a = va_arg(strings, int);
		printf("%c", a);
		}
		else if (format[i] == 'i')
		{
			x = va_arg(strings, int);
		printf("%d", x);
		}
		else if (format[i] == 's')
		{
			str = va_arg(strings, char *);
			if (str == NULL)
			{
				printf("nil");
			}
			else
			{
		printf("%s", str);
		}
		}
		else if (format[i] == 'f')
		{
			d = va_arg(strings, double);
		printf("%f", d);
		}
		
		i++;
	}

	printf("\n");
	va_end(strings);
}






