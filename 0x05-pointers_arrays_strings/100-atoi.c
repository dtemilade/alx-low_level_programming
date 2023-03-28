#include "main.h"
/**
 * _atoi - prototype that converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a = 0, b = 0, c = 0, xy = 0, n = 0, retval = 0;

	while (a < xy && n == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			retval = s[a] - '0';
			if (b % 2)
				retval = -retval;
			c = c * 10 + retval;
			n = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			n = 0;
		}
		a++;
	}

	if (n == 0)
		return (0);

	return (c);
}
