#include "main.h"

/**
 * rev_string - prototype that reverse array
 * @n: parameters for integer
 * Return: Always 0
 */
void rev_string(char *n)
{
	int x = 0, y = 0;
	char ret_val;

	while (*(n + x) != '\0')
	{
		x++;
	}
	x--;

	for (y = 0; y < x; y++, x--)
	{
		ret_val = *(n + y);
		*(n + y) = *(n + x);
		*(n + x) = ret_val;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, x = 0, y = 0, digits = 0;
	int a = 0, b = 0, retval = 0;

	while (*(n1 + x) != '\0')
		x++;
	while (*(n2 + y) != '\0')
		y++;
	x--;
	y--;
	if (y >= size_r || x >= size_r)
		return (0);
	while (y >= 0 || x >= 0 || overflow == 1)
		{
			if (x < 0)
				a = 0;
			else
				a = *(n1 + x) - '0';
			if (y < 0)
				b = 0;
			else
				b = *(n2 + y) - '0';
			retval = a + b + overflow;
			if (retval >= 10)
				overflow = 1;
			else
				overflow = 0;
			if (digits >= (size_r - 1))
				return (0);
			*(r + digits) = (retval % 10) + '0';
			digits++;
			y--;
			x--;
		}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
