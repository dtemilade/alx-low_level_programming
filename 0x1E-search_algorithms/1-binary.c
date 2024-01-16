#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array:  pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: if the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t retval, left, right;

	/*if array is NULL*/
	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (retval = left; retval < right; retval++)
			printf("%d, ", array[retval]);
		printf("%d\n", array[retval]);

		retval = left + (right - left) / 2;
		if (array[retval] == value)
			return (retval);
		if (array[retval] > value)
			right = retval - 1;
		else
			left = retval + 1;
	}
	/*value is not present in array*/
	return (-1);
}
