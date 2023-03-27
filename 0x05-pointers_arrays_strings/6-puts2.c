#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: for inputs
 * Return: the string character output
 */
void puts2(char *str)
{
	int retval = 0;
	int x = 0;
	char *my_point = str;
	int y;

	while (*my_point != '\0')
	{
		my_point++;
		retval++;
	}
x = retval - 1;
for (y = 0; y <= x; y++)
{
	if (y % 2 == 0)
	{
		_putchar(str[y]);
	}
}
_putchar('\n');
}
