#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers
 * @array:  pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of the number
 */

int interpolation_search(int *array, size_t size, int value)
{
	/*declaring the variables*/
	double k;
	size_t pos, low, high;

	/*if array is NULL*/
	if (array == NULL)
		return (-1);

	/*assign values to the variables*/
	low = 0;
	high = size - 1;

	while (size)
	{
		k = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = (size_t)(low + k);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

		if (low == high)
			break;
	}
	/*value is not present in array*/
	return (-1);
}
