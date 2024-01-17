#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array:  pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: if the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 */

int linear_search(int *array, size_t size, int value)
{
	int retval;

	/*if array is NULL*/
	if (array == NULL)
		return (-1);

	for (retval = 0; retval < (int)size; retval++)
	{
		printf("Value checked array[%u] = [%d]\n", retval, array[retval]);
		if (value == array[retval])
			return (retval);
	}
	/*value is not present in array*/
	return (-1);
}
