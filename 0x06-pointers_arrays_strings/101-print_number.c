#include "main.h"

/**
 * print_number - prototype that print numbers chars
 * @n: parameter for integer
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int ret_val;

	ret_val = n;

	if (n < 0)
	{
		_putchar('-');
		ret_val = -n;
	}

	if (ret_val / 10 != 0)
	{
		print_number(ret_val / 10);
	}
	_putchar((ret_val % 10) + '0');
}
