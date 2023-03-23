#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
	int num_row, num_col;

	for (num_row = 0; num_row < 10; num_row++)
	{
		for (num_col = 0; num_col < 15; num_col++)
		{
			if (num_col >= 10)

				_putchar(num_col / 10 + '0');
			_putchar(num_col % 10 + '0');
		}
		_putchar('\n');
	}
}
