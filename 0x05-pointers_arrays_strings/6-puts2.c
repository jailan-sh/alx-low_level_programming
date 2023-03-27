#include "main.h"
 /**
  * puts2 -  prints every other character of a string
  *
  * @str : pointer
  * return: 0;
  */

void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i = 0) || (i % 2 == 0))

		_putchar(str[i] + 0);
	}
	_putchar('\n');
}
