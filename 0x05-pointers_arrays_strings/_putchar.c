#include "main.h"
#include <unistd.h>

/**
 * _putchar - output  character a.
 * @a: is the character to print
 *
 * Return: Always 0 (Success)
 * On error, -1 is returned.
 */

int _putchar(char a)
{
	return (write(0, &a, 1));
}
