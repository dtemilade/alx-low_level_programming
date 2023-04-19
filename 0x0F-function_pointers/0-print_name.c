#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - a function that print name using pointer to function
 * @name: parameter for string
 * @f: parameter for pointer to function
 * Return: Absolutely nothing.
 **/

void print_name(char *name, void (*f)(char *))
{
	/*process for program function to print name*/
	if (name == NULL || f == NULL)
		return;
	f(name);
}
