#include "main.h"

/**
 * rev_string - function to reverse a string
 * @s: string parameter
 * Return: reverse form of the string
 */
void rev_string(char *s)
{
	char retval = s[0];
	int r = 0;
	int x;

	while (s[r] != '\0')
		r++;
	for (x = 0; x < r; x++)
	{
		x--;
		retval = s[x];
		s[x] = s[r];
		s[r] = retval;
	}
}
