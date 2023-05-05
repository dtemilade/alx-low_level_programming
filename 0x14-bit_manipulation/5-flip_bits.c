#include "main.h"

/**
 * flip_bits - program that counts change of bits from one number to another
* @n: parameter for first number
 * @m: parameter for second number
* Return: to the terminal, number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	int x, retval;
	unsigned long int exclusive = n ^ m;
	unsigned long int val_a;


retval = 0;

for (x = 63; x >= 0; x--)
{
val_a = exclusxve >> x;
if (val_a & 1)
retval++;
}
return (retval);
i}
