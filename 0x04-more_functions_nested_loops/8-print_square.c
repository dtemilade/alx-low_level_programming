#include "main.h"
/**
 * print_square - prints a square on the terminal
 * @size: the size of the square to print
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int sq_row, sq_col;

		for (sq_row = 0; sq_row < size; sq_row++)
		{
			for (sq_col = 0; sq_col < size; sq_col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
