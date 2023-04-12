#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates arguments
 * @ac: parameter for input
 * @av: parameter for double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	/*introducing the variable*/
	int x, y, z = 0, k = 0;
	char *str;

	/*Returns NULL if ac == 0 or av == NULL*/
	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			k++;
	}
	k = k + ac;
	str = malloc(sizeof(char) * k + 1);

	/*New strin fails, return NULL*/
	if (str == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			str[z] = av[x][y];
			z++;
		}
		if (str[z] == '\0')
		{
			str[z++] = '\n';
		}
	}
	return (str);
}
