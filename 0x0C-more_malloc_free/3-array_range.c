#include <stdlib.h>
#include "main.h"
/**
 * *array_range - function that creates an array of integers.
 * @min: parameter for minimum range
 * @max: parameter for maximum range
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	/*initializing variables*/
	int x, size;
	int *var_ptr;

	var_ptr = malloc(sizeof(int) * size);

	/*If min > max, return NULL*/
	if (min > max)
		return (NULL);

	/*If malloc fails, return NULL*/
	if (var_ptr == NULL)
		return (NULL);

	/*array_range process*/
	size = max - min + 1;
	for (x = 0; min <= max; x++)
		var_ptr[x] = min++;
	return (var_ptr);
}
