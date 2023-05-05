#include "main.h"

/**
 * get_endianness - program that checks if a machine is little or big endian
 * Return: to the terminal, 0 for big, 1 for little
 */
int get_endianness(void)
{

	unsigned int x;
	char *c = (char *) &x;

x = 1;
return (*c);
}
