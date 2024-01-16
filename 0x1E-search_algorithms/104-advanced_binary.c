#include "search_algos.h"

/**
 * _search_adv - searches for a value in an array of integers
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int _search_adv(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t retval;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (retval = 0; retval < size; retval++)
		printf("%s %d", (retval == 0) ? ":" : ",", array[retval]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (_search_adv(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (_search_adv(array, half + 1, value));

	half++;
	return (_search_adv(array + half, size - half, value) + half);
}

/**
 * advanced_binary - search and return the index of the number
 * @array:  pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of the number
 */

int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = _search_adv(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
