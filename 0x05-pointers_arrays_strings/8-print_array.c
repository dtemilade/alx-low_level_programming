#include "main.h"
/**
 * print_array - function that prints n elements of an array
 * @a: array name just like a variable name
 * @n: is the number of elements an array will contained
 * Return: a and n as the outputs
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < (n - 1); x++)
	{
		printf("%d, ", a[x]);
	}
	if (x == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
