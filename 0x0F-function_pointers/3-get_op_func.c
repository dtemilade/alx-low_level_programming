#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform operation
 * @s: parameter for the operator
 * Return: a pointer to the function that corresponds to the operator given
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	/*introducing a variable and conditional function*/
	int i;

	/*conditional statement for result*/
	i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}

