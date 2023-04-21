#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: number of variables used in prints numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	/*introducing the variables*/
	va_list ret_val;
	unsigned int x;

	va_start(ret_val, n);

	/*conditional statement for  variable x*/
	for (x = 0; x < n; x++)
	{
		/*processing the output and condition for separator*/
		printf("%d", va_arg(ret_val, int));
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ret_val);
}
