#include "main.h"
 /**
  * puts2 -  prints every other character of a string
  * @str : pointer
  * return: 0;
  */

void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar((str[i] + 2) + 0);
	}
	_putchar('\n');
}
