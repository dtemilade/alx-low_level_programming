#include <stdlib.h>
#include "main.h"
/**
 * *_alomem - program that fills memory with a constant
 * @k: parameter for memory area
 * @c: parameter for char
 * @l: parameter for number of times
 * Return: a pointer to the memory area
 */
char *_alomem(char *k, char c, unsigned int l)
{
	/*initialize variables*/
	unsigned int x;

	/*condition for mem*/
	for (x = 0; x < l; x++)
	{
		k[x] = c;
	}
	return (k);
}
/**
 * *_calloc - function that allocates memory for an array
 * @nmemb: parameter for elements in the array
 * @size: parameter for element’s size
 * Return: a pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *var_ptr;

	/*_calloc returns NULL If nmemb or size is 0*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	/*_calloc returns NULL If malloc fails*/
	var_ptr = malloc(size * nmemb);
	if (var_ptr == NULL)
		return (NULL);

	/*process to returns a pointer to the allocated memory.*/
	_alomem(var_ptr, 0, nmemb * size);
	return (var_ptr);
}

