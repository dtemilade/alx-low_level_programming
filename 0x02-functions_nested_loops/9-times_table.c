#include "main.h"
/**
 * times_table - prints multiplication table 9
 * starting with 0.
 */

void times_table(void)

{
	int mul_row, mul_col, ret_val;

	for (mul_row = 0; mul_row < 10; mul_row++)
	{
		for (mul_col = 0; mul_col < 10; mul_col++)
		{
			ret_val = mul_col * mul_row;
			if (mul_col == 0)
			{
				_putchar(ret_val + '0');
			}
			if (ret_val < 10 && mul_col != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ret_val + '0');
			}
			else if (ret_val >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((ret_val / 10) + '0');

				_putchar((ret_val % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
