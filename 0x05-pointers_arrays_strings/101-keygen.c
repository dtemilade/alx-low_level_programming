#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prototype program that generates random valid passwords
 * for the program 101-crackme
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pw[100];
	int x, y, ret_val;

	ret_val = 0;

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		pw[x] = rand() % 78;
		ret_val += (pw[x] + '0');
		putchar(pw[x] + '0');

		if ((2772 - ret_val) - '0' < 78)
		{
			y = 2772 - ret_val - '0';
			ret_val += y;
			putchar(y + '0');
			break;
		}
	}
	return (0);
}
