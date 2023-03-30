#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prototype that prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int o, y, x;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		y = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (x = 0; x < 10; x++)
		{
			if (x < y)
				printf("%02x", *(b + o + x));
			else
				printf("  ");
			if (x % 2)
			{
				printf(" ");
			}
		}
		for (x = 0; x < y; x++)
		{
			int c = *(b + o + x);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}
