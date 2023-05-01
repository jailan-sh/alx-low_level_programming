#include <stdio.h>

void print_msg(void)__attribute__((constructor));

/**
 * print_msg - function that prints msg before main function excution
 *
 * Return: void
 */

void print_msg(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
