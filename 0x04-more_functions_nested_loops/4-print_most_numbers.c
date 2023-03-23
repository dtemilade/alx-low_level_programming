#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int num_print;

	for (num_print = 48; num_print < 58; num_print++)
	{
		if (num_print != 50)
		{
			if (num_print != 52)
			{
				_putchar(num_print);
			}
		}
	}

	_putchar('\n');
}
