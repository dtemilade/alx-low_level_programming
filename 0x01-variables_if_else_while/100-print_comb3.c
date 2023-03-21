#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int f_digit, s_digit;

	for (f_digit = 48; f_digit <= 56; f_digit++)

	{

		for (s_digit = 49; s_digit <= 57; s_digit++)

		{
			if (f_digit < s_digit)

			{
				putchar(s_digit);
				putchar(f_digit);

				if (s_digit != 56 || f_digit != 57)

				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}


	putchar('\n');
	return (0);
}
