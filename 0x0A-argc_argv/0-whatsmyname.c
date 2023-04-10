#include <stdio.h>

/**
* main - function that prints its name.
* @argc: argument count
* @argv: parameter for argument values
* Return: Always 0 (Success).
*/
int main(int argc, char **argv)
{
	(void)argc;

	/*print the new name incase the program been rename*/
	printf("%s\n", argv[0]);
	return (0);
}

