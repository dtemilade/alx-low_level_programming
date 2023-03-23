#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: parameter for the integer
 */
void print_number(int n)
{
	unsigned int num_val;

	if (n < 0)
	{
		num_val = -n;
		_putchar('-');
	}
	else
	{
		num_val = n;
	}
	if (num_val / 10)
	{
		print_number(num_val / 10);
	}
	_putchar((num_val % 10) + '0');
}
