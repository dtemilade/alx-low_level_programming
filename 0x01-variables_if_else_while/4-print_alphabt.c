#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ommit_eq[24] = "abcdfghijklmnoprstuvwxyz";
	int list = 0;

	while (list < 24)

	{
		putchar(ommit_eq[list]);
		list++;
	}

	putchar('\n');
	return (0);
}
