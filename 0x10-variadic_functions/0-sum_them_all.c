#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: paramters entered into sum_them_all function.
 * @...: number of paramters to calculate sum_them_all function.
* Return: If n == 0, return 0, Otherwise the sum of all parameters entered.
 */

int sum_them_all(const unsigned int n, ...)
{
	/*introducing the variables*/
	va_list i;
	unsigned int x, ret_val;

	va_start(i, n);
	/*initalizing the variables*/
	ret_val = 0;
	x = 0;

	/*conditional statement as per number of parameters given*/
	while (x < n)
		x++;

	ret_val = ret_val + va_arg(i, int);
	va_end(i);
	return (ret_val);
}
