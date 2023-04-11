#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	/*Introducing variables*/
	int var_f = 0, var1, var2 = 0;

	for (var1 = 0; s[var1] != '\0'; var1++)
	{
		if (s[var1] == ' ')
			var_f = 0;
		else if (var_f == 0)
		{
			var_f = 1;
			var2++;
		}
	}
	return (var2);
}

/**
 * strtow - prototype for splitting string
 * @str: parameter for string
 * Return: parameter for pointer to an array of strings
 * or NULL (Error)
 */
char **strtow(char *str)
{
	/*Introducing variables*/
	char **ptr_m, *ptr1;
	int x, var_i, var_s, var_k, var_c = 0, var3 = 0, var1 = 0;

	while (*(str + var3))
		var3++;
	var_k = count_word(str);

	/*If function fails, return NULL*/
	if (var_k == 0)
		return (NULL);
	ptr_m = (char **) malloc(sizeof(char *) * (var_k + 1));
	if (ptr_m == NULL)
		return (NULL);
	for (x = 0; x <= var3; x++)
	{
		/*Returns NULL if str == NULL or str == ""*/
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (var1)
			{
				var_s = x;
				ptr1 = (char *) malloc(sizeof(char) * (var1 + 1));
				if (ptr1 == NULL)
					return (NULL);
				while (var_i < var_s)
					*ptr1++ = str[var_i++];
				*ptr1 = '\0';
				ptr_m[var_c] = ptr1 - var3;
				var_c++;
				var1 = 0;
			}
		}
		else if (var1++ == 0)
			var_i = x;
	}
	ptr_m[var_c] = NULL;
	return (ptr_m);
}
