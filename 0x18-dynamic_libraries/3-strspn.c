#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: parameter for input
 * @accept: parameter for input
 * Return: Always 0 (Success).
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				l++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (l);
		}
		s++;
	}
	return (l);
}
