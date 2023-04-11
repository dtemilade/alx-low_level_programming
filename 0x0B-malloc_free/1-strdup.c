#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space in mem.
 * @str: parameter for character
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	/*introducing the variables*/
	char *c_var;
	int x, k = 0;

	/*Returns NULL if str = NULL*/
	if (str == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
		x++;
	c_var = malloc(sizeof(char) * (x + 1));

	if (c_var == NULL)
		return (NULL);
	for (k = 0; str[k]; k++)
		c_var[k] = str[k];
	return (c_var);
}
