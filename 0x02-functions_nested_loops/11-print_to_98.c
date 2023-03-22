#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number as passed to the function
 */

void print_to_98(int n)
{
	int num_row, num_col;

	if (n <= 98)
	{
		for (num_row = n; num_row <= 98; num_row++)
		{
			if (num_row != 98)
				printf("%d, ", num_row);
			else if (num_row == 98)
				printf("%d\n", num_row);
		}
	} else if (n >= 98)
	{
		for (num_col = n; num_col >= 98; num_col--)
		{
			if (num_col != 98)
				printf("%d, ", num_col);
			else if (num_col == 98)
				printf("%d\n", num_col);
		}
	}
}
