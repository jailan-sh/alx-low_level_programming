#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - program that performs simple operations
 *
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers containing strings entering main
 *
 * Return: No element matches -1, if size <=0 -1
 * else index of first element cmp func does not rtrn 0
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *op = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) ||
	    (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
