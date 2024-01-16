#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of integers
 * @array:  pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of the number
 */

int jump_search(int *array, size_t size, int value)
{
	/*declaring the variables*/
	int x, y, index, prev;

	/*if array is NULL*/
	if (array == NULL || size == 0)
		return (-1);

	/*assign values to the variables*/
	x = (int)sqrt((double)size);
	y = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		y++;
		prev = index;
		index = y * x;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	/*value is not present in array*/
	return (-1);
}
