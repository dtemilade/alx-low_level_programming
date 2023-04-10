#include <stdio.h>

/**
* main - function that prints all arguments it receives.
* @argc: parameter for argument count
* @argv: parameter for argument values
* Return: Always 0 (Success).
*/
int main(int argc, char **argv)
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}

