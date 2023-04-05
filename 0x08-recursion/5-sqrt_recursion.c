#include "main.h"

/**
 * retval_recursion - prototype to find the natural square root of a number
 * @n: integers parameters for square root
 * @i: integers parameters for testing
 * Return: the resulting square root
 */

int retval_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (retval_recursion(n, i + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: integers parameters for square root
 *
 * Return: the integer value of the result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (retval_recursion(n, 0));
}
