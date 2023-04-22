#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - function that prints the result of simple operations
 * @argc: arguments supplied to the program
 * @argv: pointers to the arguments
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	/*introducing variable parameter and pointer*/
	int b, a;
	char *arr_ptr;

	/*condition for error and its outputs*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	arr_ptr = argv[2];
	b = atoi(argv[3]);
	if (get_op_func(arr_ptr) == NULL || arr_ptr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*arr_ptr == '/' && b == 0) ||
		    (*arr_ptr == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	/*absence of error, then the output*/
	printf("%d\n", get_op_func(arr_ptr)(a, b));
	return (0);
}
