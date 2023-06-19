#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: character parameter
 * @b: character parameter
 * @n: unsigned integer parameter
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
