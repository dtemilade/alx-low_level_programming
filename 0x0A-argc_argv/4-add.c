#include <stdio.h>
#include <stdlib.h>

/**
* main - function that adds positive numbers.
* @argc: parameter for argument count
* @argv: parameter for argument values
*
* Return: Always 0 (Success).
*/
int main(int argc, char **argv)
{
	/*introducing variable parameters*/
	int var1, var2, retval = 0;
	char *Erflg;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	var1 = 1;
	while (argv[var1])
		var1++;
	{
		var2 = strtol(argv[var1], &Erflg, 10);
		/*print Error, followed by a new line, and return 1 for non digits*/
		if (*Erflg)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			retval = retval + var2;
		}
	}
	printf("%d\n", retval);
	return (0);
}

