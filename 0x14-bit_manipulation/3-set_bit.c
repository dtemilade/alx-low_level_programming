#include "main.h"

/**
 * set_bit - program that sets a bit at a given index to 1
 * @n: parameter for pointer
 * @index: parameter for index
* Return: to the terminal, 1 for success and -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
/*conditions for program*/
if (index > 63)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}

