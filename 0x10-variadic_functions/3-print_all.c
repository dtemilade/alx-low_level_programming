#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - a function that prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	/*introducing variables*/
	va_list ret_val;
	int x = 0;
	char *s, *var_s = "";

	va_start(ret_val, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				/*case statement for list of types of arguments passed to the function*/
				case 'c':
					printf("%s%c", var_s, va_arg(ret_val, int));
					break;
				case 'i':
					printf("%s%d", var_s, va_arg(ret_val, int));
					break;
				case 'f':
					printf("%s%f", var_s, va_arg(ret_val, double));
					break;
				case 's':
					s = va_arg(ret_val, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", var_s, s);
					break;
				default:
					x++;
					continue;
			}
			var_s = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(ret_val);
}
