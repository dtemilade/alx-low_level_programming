#include "main.h"

/**
 * binary_to_uint - program that converts a binary
 * @b: parameter for string
 * Return: to the terminal, converted number
 */

unsigned int binary_to_uint(const char *b)
{
/*introduce parameter*/
unsigned int retval;
int i;

retval = 0;

if (!b)
return (0);

for (i = 0; b[i]; i++)
{
if (b[i] > '1' || b[i] < '0')
return (0);
retval = (b[i] - '0') + (2 * retval);
}
return (dec_val);
}

