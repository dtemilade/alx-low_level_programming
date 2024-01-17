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
	size_t t;

	/*if array is NULL*/
	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (t = left; t < right; t++)
			printf("%d, ", array[t]);
		printf("%d\n", array[t]);

		t = left + (right - left) / 2;
		if (array[t] == value)
			return (t);
		if (array[t] > value)
			right = t - 1;
		else
			left = t + 1;
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
	size_t right, t;

	/*if array is NULL*/
	if (array == NULL)
		return (-1);

	t = 0;

	if (array[0] != value)
	{
		for (t = 1; t < size && array[t] <= value; t = t * 2)
			printf("Value checked array[%ld] = [%d]\n", t, array[t]);
	}

	right = t < size ? t : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", t / 2, right);
	return (_search_expon(array, t / 2, right, value));
}
