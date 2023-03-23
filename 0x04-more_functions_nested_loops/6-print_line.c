#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int my_line;

		for (my_line = 1; my_line <= n; my_line++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
