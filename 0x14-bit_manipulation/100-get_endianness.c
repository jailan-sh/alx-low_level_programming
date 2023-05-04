#include "main.h"

/**
 * get_endianness - the way the computer store multiple bytes
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int n = 1;
	char* endian = (char*) &n;
	return (*endian == 1);
}
