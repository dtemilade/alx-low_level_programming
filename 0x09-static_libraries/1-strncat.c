#include "main.h"

/**
 * _strncat - prototype that concatenates two strings
 * using at most n bytes from source
 * @dest: string parameter for input
 * @src: string parameter for input
 * @n: integer parameter for input
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
