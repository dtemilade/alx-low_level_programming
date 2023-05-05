#include "main.h"

/**
 * clear_bit - program that sets the value of a given bit to 0
 * @n: parameter for pointer
 * @index: parameter for index
* Return: to the terminal, 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}

