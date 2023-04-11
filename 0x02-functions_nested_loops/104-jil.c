#include <stdio.h>

int  main(void)
{
	int i;
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long result = 0;

	for (i = 0; i <98; i++)
	{
		result = a + b;
		printf("%ld", result);
		a = b;
		b = result;
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
