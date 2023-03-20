#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low_alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int list = 0;

	while (list < 26)

	{
		putchar(low_alph[list]);
		list++;
	}
	putchar('\n');
	return (0);
}
