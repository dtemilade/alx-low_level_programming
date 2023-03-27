#include "main.h"
/**
 * _strlen - prototype that returns the length of a string
 * @s: parameter for string
 * Return: lenght the length of a string
 */
int _strlen(char *s)
{
	int retval = 0;

	while (*s != '\0')
	{
		retval++;
		s++;
	}
	return (retval);
}
