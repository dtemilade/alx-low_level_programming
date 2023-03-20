#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex_dec[16] = "0123456789abcdef";
	int list = 0;

	while (list < 16)

	{
		putchar(hex_dec[list]);
		list++;
	}

	putchar('\n');
	return (0);
}
