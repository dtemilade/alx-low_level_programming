#include "main.h"
/**
 * print_rev - function that prints a reverse string
 * @s: the string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int retval = 0;
	int val_start;

	while (*s != '\0')
	{
		retval++;
		s++;
	}
	s--;
	for (val_start = retval; val_start > 0; val_start--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
