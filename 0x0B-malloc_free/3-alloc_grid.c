#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: parameters for width
 * @height: parameters for height
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	/*introducing the variables*/
	int **p_var;
	int a, b;

	/*return NULL on failure*/
	p_var = malloc(sizeof(int *) * height);
	if (p_var == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		p_var[a] = malloc(sizeof(int) * width);
		if (p_var[a] == NULL)
		{
			for (; a >= 0; a--)
				free(p_var[a]);
			free(p_var);
			return (NULL);
		}
	}

	/*If width or height is 0 or negative, return NULL*/
	if (width <= 0 || height <= 0)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			p_var[a][b] = 0;
	}
	return (p_var);
}
