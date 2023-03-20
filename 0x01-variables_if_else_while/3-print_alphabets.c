#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char f_alph[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int list = 0;

	while (list < 52)

	{
		putchar(f_alph[list]);
		list++;
	}
	putchar('\n');
	return (0);
}
