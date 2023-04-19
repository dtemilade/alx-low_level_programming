#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function that returns the sum of a and b
 * @a: parameter for number to add.
 * @b: parameter for number to add.
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that returns the difference between a and b
 * @a: parameter for first number.
 * @b: parameter for the second number.
 * Return: the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that returns the product of a and b.
 * @a: parameter for the first number.
 * @b: parameter for the second number.
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that returns the division of a by b
 * @a: parameter for the first number.
 * @b: parameter for the second number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that returns the remainder of the division of a by b
 * @a: parameter for the first number.
 * @b: parameter for the second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
