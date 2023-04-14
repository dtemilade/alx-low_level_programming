#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_val - function that checks if a string contains a non-val char
 * @k: parameter for string
 * Return: 0 if a non-val is found and 1 for vals
 */
int is_val(char *k)
{
	/*introducing variable*/
	int x = 0;

	while( k[x] )
	{
		if( k[x] < '0' || k[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
* _strl - function that returns the length of a string
* @k: parameter for string
* Return: the length of the string
*/
int _strl(char *k)
{
	/*introducing variable*/
	int x = 0;

	while( k[x] != '\0')
	{
		x++;
	}
	return(k);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - function that multiplies two positive numbers
 * @argc: parameter for number
 * @argv: parameter for array
 * Return: always 0 (success)
 */
int main(intargc, char *argv[])
{
	/*introducing variable*/
	char *k1, *k2;
	int a, b, l, x, carry, val1, val2, *ret_val, a = 0;

	p = argv[1], q = argv[2];
	if (argc != 3 || !is_val(k1) || !is_val(k2))
		errors();
	a = _strl(k1);
	b = _strl(k2);
	l = a + b + 1;
	ret_val = malloc(sizeof(int) * l);
	if (!ret_val)
		return (1);
	for (x = 0; x <= a + b; x++)
		ret_val[x] = 0;
	for (a = a - 1; a>= 0; a--)
	{
		val1 = p[a] - '0';
		carry = 0;
		for (b = _strl(k2) - 1; b>= 0; b--)
		{
			val2 = q[b] - '0';
			carry += ret_val[a + b + 1] + (val1 * val2);
			ret_val[a + b + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			ret_val[a + b + 1] += carry;
	}
	for (x = 0; x <l - 1; x++)
	{
		if (ret_val[x])
			a = 1;
		if (a)
			_putchar(ret_val[x] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(ret_val);
	return (0);
}
