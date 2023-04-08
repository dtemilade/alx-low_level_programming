#include "main.h"
/**
 * _puts - outputs a string on a terminal
 * @str: string to print on the terminal
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
