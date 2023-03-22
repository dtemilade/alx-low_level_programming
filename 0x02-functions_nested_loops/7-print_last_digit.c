#include "main.h"
/**
 * print_last_digit - display the last digit of a number
 * @n: parameter used to pick the last digit
 * Return: value of the last digit to return
 */

int print_last_digit(int n)

{
	int l_digit;

	if (n < 0)

		n = -n;

	l_digit = n % 10;
	if (l_digit < 0)
		l_digit = -l_digit;

	_putchar(l_digit + '0');

	return (l_digit);
}
