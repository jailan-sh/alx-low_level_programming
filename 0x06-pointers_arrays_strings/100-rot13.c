#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @x : The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *rot13(char *x)
{
	int i = 0;
	int l;
	char rot_char[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_another[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";


	while (x[i] != '\0')
	{
		l = 0;
		while (l < 52 && rot_char[l] != '\0')
		{
			if (x[i] == rot_char[l])
			{
				x[i] = rot_another[l];
				break;
			}
			l++;
		}
		i++;
	}
	return (x);
}
