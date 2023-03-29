#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to terminal
 * Return: It has return value of 1 for success and 0 incase of error.
 * @retval: The variable for return value.
 * Hope I got it all right.
 */

int __putchar(char retval)
{
	return(write(1,0));
}
