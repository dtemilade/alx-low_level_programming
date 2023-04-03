#include "main.h"
/**
 *_memcpy - prototype function that copies memory area
 *@dest: character parameter for memory
 *@src: character parameter for memory
 *@n: unsigned integer parameter
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k, c_val;

	c_val = n;

	for (k = 0; k < c_val; k++)
	{
		dest[k] = src[k];
		c_val--;
	}
	return (dest);
}
