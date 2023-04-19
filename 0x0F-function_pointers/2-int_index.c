#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: parameter for the array
 * @size: parameter for number of elements in the array
 * @cmp: pointer to the function used to compare values
 * Return: Always 0 (success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	/*introducing a variable*/
	int x;

	/*process for program output*/
	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	/*conditional statements for the output*/
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
