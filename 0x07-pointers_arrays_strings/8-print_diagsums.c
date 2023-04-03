#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: parameter for input
 * @size: parameter for input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int x, y, i;

	x = 0;
	y = 0;

	for (i = 0; i < size; i++)
	{
		x = x + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		y += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", x, y);
}
