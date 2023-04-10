#include <stdio.h>

/**
* main - function that prints the number of arguments passed into it.
* @argc: parameter for argument count
* @argv: parameter for argument values
* Return: Always 0 (Success).
*/
int main(int argc, char **argv)
{
	(void)argv;

	/*print a number, followed by a new line*/
	printf("%d\n", argc - 1);
	return (0);
}

