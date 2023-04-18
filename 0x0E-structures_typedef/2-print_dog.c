#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: parameter for pointers used to print struct dog
 */
void print_dog(struct dog *d)
{
	/* print (nil) instead of this element if d is NULL*/
	if (d == NULL)
		return;

	/*process for prints a struct dog*/
	if ((*d).name == NULL)
		(*d).name = "(nil)";
	if ((*d).owner == NULL)
		(*d).owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
