#include <stdio.h>
#include <stdlib.h>

/**
* main - function that multiplies two numbers.
* @argc: parameter for argument count
* @argv: parameter for argument values
* Return: Always 0 (Success).
*/
int main(int argc, char **argv)
{
	/*introducing variable parameters*/
	int var1, var2;

	/*print Error for less arguments*/
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	var1 = atoi(argv[1]);
	var2 = atoi(argv[2]);
	printf("%d\n", var1 * var2);
	return (0);
}

