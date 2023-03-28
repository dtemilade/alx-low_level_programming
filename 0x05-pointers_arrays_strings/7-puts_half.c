#include "main.h"
/**
 * puts_half - prints half of a string on a terminal with a define standard
 * @str: parameter to input strings
 * Return: output half of the input to the terminal
 */
void puts_half(char *str)
{
	int x, y, retval;

	retval = 0;

	for (x = 0; str[x] != '\0'; x++)
		retval++;

	y = (retval / 2);
	if ((retval % 2) == 1)
		y = ((retval + 1) / 2);
	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
