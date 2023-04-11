#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: parameter for size of array
 * @c: parameter for char to assign
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	/*introducing the variables*/
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}

