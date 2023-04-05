#include "main.h"

/**
 * mycheck - confirm the characters for palindrome
 * @s: parameter to check string
 * @i: parameter for the process check
 * @len: length of the string
 * Return: if palindrome 1, otherwise 0
 */

int mycheck(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (mycheck(s, i + 1, len - 1));
}

/**
 * strlen_r - returns the length of a string
 * @s: parameter for string
 * Return: length value of the string
 */

int strlen_r(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen_r(s + 1));
}

/**
 * is_palindrome - function returns 1 if a string is a palindrome and 0 if not
 * @s: parameter for string to reverse for checking
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (mycheck(s, 0, strlen_r(s)));
}
