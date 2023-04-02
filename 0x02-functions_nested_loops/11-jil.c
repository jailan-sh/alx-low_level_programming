#include <stdio.h>

void print_to_98(int n)
{
	int c;
	c = n;

	if (n < 0)
	{
		for (c = n; c <= 98; c++)
		{
			printf("%d, ", c);
		}
	}
	else if  (n >= 0 && n <= 98)
	{
		for (c = n; c <= 98; c++);
		{
			printf("%d, ", c);
		}
	}
	else if (n > 98)
	{
		for (c = n; c >=98; c--)
		{
			printf("%d, ", c);
		}
	}
	else 
	{
		n = 98;
		printf("%d", c);
	}
}
