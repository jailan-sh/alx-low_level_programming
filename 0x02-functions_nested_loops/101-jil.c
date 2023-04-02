#include <stdio.h>

int main(void)
{
	int n = 0;
	int sum = 0;
	int d;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			d = n;
			sum = d + sum;
		}
	}
		printf("%d\n", sum);
		return (0);
}

