#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char rev_alph = 'z';

	while (rev_alph >= 'a')

	{
		putchar(rev_alph);
		rev_alph--;
	}


	putchar('\n');
	return (0);
}
