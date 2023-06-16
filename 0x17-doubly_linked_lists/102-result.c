#include "stdio.h"

int palnidrom(int num)
{
	int compare = num;
	int remain;
	int result = 0;

	while (num)
	{
		remain = num % 10;
		result = result * 10 + remain;
		num = num /10;
	}
	if (result == compare)
		return (1);
	else
		return (0);
}

int main(void)
{
	int a, b;
	int n, c = 0;
	FILE *fp;

	for (a = 999; a >= 900; a--)
	{
		for (b = 999; b >= 900; b--)
		{
			c = a * b;
			if (c > n && palnidrom(c))
			{
				n = c;
			}
		}
	}
	fp = fopen("102.result", "w");
	fprintf(fp, "%d", n);
	fclose(fp);
	return (0);
}
