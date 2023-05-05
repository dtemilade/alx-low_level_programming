#include "main.h"

/**
 * print_binary - program that prints the binary value of a decimal
 * @n: parameter for number no return value
 */
void print_binary(unsigned long int n)
{
/*introduce parameter*/
unsigned long int val_a;
int x, retcon = 0;

/*conditions for program*/
for (x = 63; x >= 0; x--)
{
val_a = n >> x;

if (val_a & 1)
{
_putchar('1');
retcon++;
}
else if (retcon)
_putchar('0');
}
if (!retcon)
_putchar('0');
}

