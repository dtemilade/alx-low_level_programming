#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 *
 *  Return: Always 0
 */

void print_numbers(void)
{
	int disp_num;

	for (disp_num = 48; disp_num < 58; disp_num++)
	{
		_putchar(disp_num);

	}
	_putchar('\n');
}
