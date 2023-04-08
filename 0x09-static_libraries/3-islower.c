#include "main.h"

/**
 * _islower - it checks for lowercase character
 * @c: parameter for checking
 * Return: It returns 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)

{

	if (c >= 'a' && c <= 'z')
		return (1);

	else
		return (0);
}

