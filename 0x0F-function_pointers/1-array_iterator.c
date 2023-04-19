#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function prototype
 *
 * @array: variable parameter for array
 * @size: parameter for size of the array
 * @action: parameter for pointer to the function needs to use
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/*introducing a variable*/
	unsigned int x;

	/*declaring the process*/
	/*process for program output*/
	if (array == NULL || action == NULL)
		return;

	/*conditional statements for the output*/
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
