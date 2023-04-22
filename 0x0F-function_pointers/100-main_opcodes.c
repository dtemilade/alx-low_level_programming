#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: parameter for number of arguments in the program
 * @argv: parameter for array of arguments in the program
* Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	/*introducing new variables*/
	char *var_ptr;
	int a, b;

	/*incorrect argument print Error, then new line and 1 for exit status*/
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	/* negative number print Error, then new line and 2 for exit status*/
	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/*process to determine the opcodes of main*/
	var_ptr = (char *)main;

	for (a = 0; a < b; a++)
	{
		/*using b minus 1 to compare a*/
		if (a == b - 1)
		{
			/*stop the loop and put new line when the if condition meets*/
			printf("%02hhx\n", var_ptr[a]);
			break;
		}
		/*else give space after each two char long opcode*/
		printf("%02hhx ", var_ptr[a]);
	}
	return (0);
}

