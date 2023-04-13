#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two string
 * @s1: parameter for string
 * @s2: parameter for string
 * @n: parameter for string condition
 * Return: a pointer which shall point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/*introducing pointers*/
	char *k;
	unsigned int x = 0, y = 0, var_a = 0, var_b = 0;

	/*introducing conditional statement*/
	while (s2 && s2[var_b])
		var_b++;
	while (s1 && s1[var_a])
		var_a++;
	if (n < var_b)
		k = malloc(sizeof(char) * (var_a + n + 1));
	else
		k = malloc(sizeof(char) * (var_a + var_b + 1));

	/*function fails, return NULL*/
	if (!k)
		return (NULL);

	while (x < var_a)
	{
		k[x] = s1[x];
		x++;
	}
	while (n >= var_b && x < (var_a + var_b))
		k[x++] = s2[y++];
	while (n < var_b && x < (var_a + n))
		k[x++] = s2[y++];
	k[x] = '\0';

	return (k);
}
