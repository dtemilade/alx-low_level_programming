#include "main.h"

/**
 * reverse_array - prototype that reverse array of integers
 * @a: integer array
 * @n: number of elements in an integer array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int z;

	for (x = 0; x < n--; x++)
	{
		z = a[x];
		a[x] = a[n];
		a[n] = z;
	}
}
