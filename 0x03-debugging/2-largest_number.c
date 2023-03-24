#include "main.h"

/**
* largest_number - prints the largest of 3 integers
* @a: is the first integer
* @b: is the second integer
* @c: is the third integer
* Return: the largest integer
*/

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
