#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: string to be printed between strings.
 * @n: strings passed to the function
 * @...: number of variables used in prints strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	/*introdducing the variable parameters*/
	va_list ret_val;
	char *str;
	unsigned int x;

	va_start(ret_val, n);

	/*conditional statements*/
	for (x = 0; x < n; x++)
	{
		str = va_arg(ret_val, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ret_val);
}
