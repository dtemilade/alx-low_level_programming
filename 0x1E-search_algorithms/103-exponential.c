#include "search_algos.h"

/**
 * _search_expon - Searches for a value in a sorted array of integers
 * @array: A pointer to the first element of the [sub]array to search.
 * @left: The starting index of the [sub]array to search.
 * @right: The ending index of the [sub]array to search.
 * @value: The value to search for.
 * Return: if the value is not present, -1.
 *         Otherwise, the index where the value is located.
 * Description: Prints the [sub]array being searched after each change.
 */
int _search_expon(int *array, size_t left, size_t right, int value)
{
	size_t retval;

	/*if array is NULL*/
	if (array == NULL)
		return (-1);

	while (right >= left)
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

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: if the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: Prints a value every time it is compared in the array.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t retval, right;

	/*if array is NULL*/
	if (array == NULL)
		return (-1);
	
	retval = 0;
	
	if (array[0] != value)
	{
		for (retval = 1; retval < size && array[retval] <= value; retval = retval * 2)
			printf("Value checked array[%ld] = [%d]\n", retval, array[retval]);
	}

	right = retval < size ? retval : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", retval / 2, right);
	return (_search_expon(array, retval / 2, right, value));
}
