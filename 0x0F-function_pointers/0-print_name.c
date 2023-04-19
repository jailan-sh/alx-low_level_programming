#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that prints a name.
 * @name : the pointer to name
 * @f : function pointer to bring name char
 * Return : void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
	if (name == NULL || f == NULL)
	{
		return;
	}
}
