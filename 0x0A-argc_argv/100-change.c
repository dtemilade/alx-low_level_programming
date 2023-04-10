#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - function that prints the min number of coins to make change
* @argc: parameter for argument count
* @argv: parameter for argument values
* Return: Always 0 (Success).
*/
int main(int argc, char **argv)
{
	/*introducing pointers and variable parameters*/
	int sum, retval;
	unsigned int i;
	char *ptr;
	int cents[] = {25, 10, 5, 2};
	/*print Error, followed by a new line, and return 1 for less arguments*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/*converts the string argument str to an integer by strtol fnction*/
	sum = strtol(argv[1], &ptr, 10);
	retval = 0;
	if (!*ptr)
	{
		while (sum > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (sum >= cents[i])
				{
				       retval += sum / cents[i];
				       sum = sum % cents[i];
				}
			}
		}
		if (sum == 1)
			retval++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", retval);
	return (0);
}
