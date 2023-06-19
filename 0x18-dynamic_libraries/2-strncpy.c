#include "main.h"

/**
 * _strncpy - prototype to copy a string
 * @dest: string parameter for input
 * @src: string parameter for input
 * @n: integer parameter for input
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int y;

	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[y] = src[y];
		y++;
	}
	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}

	return (dest);
}
