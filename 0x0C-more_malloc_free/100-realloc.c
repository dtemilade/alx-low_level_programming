#include <stdlib.h>
#include "main.h"
/**
 * *_realloc - function that reallocates a memory block using
 * @ptr: parameters for pointer
 * @old_size: parameters for old size
 * @new_size: parameters for new size
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/*introducing variables*/
	unsigned int x;
	char *ptrvar;
	char *retptr;

	/*comparing old and new sizes*/
	if (new_size == old_size)
		return (ptr);

	/*Basis for returning NULL*/
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	retptr = malloc(new_size);
	if (!retptr)
		return (NULL);
	ptrvar = ptr;

	/*process for initializing the “added” memory*/
	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			retptr[x] = ptrvar[x];
	}

	/*process for not initializing the “added” memory*/
	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			retptr[x] = ptrvar[x];
	}
	free(ptr);
	return (retptr);
}
