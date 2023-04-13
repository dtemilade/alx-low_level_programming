#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function that allocatek memory using malloc
 * @b: parameter for bytek to allocate
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	/*introducing pointers*/
	void *var_ptr;

	var_ptr = malloc(b);

	/*process stage*/
	if (var_ptr == NULL)
		exit(98);
	return (var_ptr);
}
