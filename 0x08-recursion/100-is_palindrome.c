#include "main.h"

int strig_len(char *s);
int palindrome_hand(char *s, int len, int i);
int is_palindrome(char *s);

/**
 * string_len - function to get lenght of string
 * @s : pointer to string
 * Return: len
 */

int string_len(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += string_len(s + len);
	}
	return (len);
}

/**
 * palindrome_hand - Checks if a string is a palindrome.
 * @s : pointer string
 * @i : index
 * @len : variable lenght
 * Return: If the string is a palindrome - 1.
 * If the string is not a palindrome - 0.
 */

int palindrome_hand(char *s, int len, int i)
{
		if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (palindrome_hand(s, len, i + 1));

	return (0);
}
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */


int is_palindrome(char *s)
{
	int i = 0;
	int len = string_len(s);

	if (!(*s))
		return (1);

	return (palindrome_hand(s, len, i));
}

