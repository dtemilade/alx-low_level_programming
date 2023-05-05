#include "main.h"

/**
 * get_bit - program that returns the value of a bit in a decimal number
 * @n: parameter for number
 * @index: parameter for index
* Return: to the terminal, value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
/*introduce parameter*/
int retval;

/*conditions for program*/
if (index > 63)
return (-1);

retval = (n >> index) & 1;
return (retval);
}

