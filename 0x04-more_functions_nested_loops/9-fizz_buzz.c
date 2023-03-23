#include "main.h"
#include <stdio.h>

/**
 * main - function to prints the numbers from 1 to 100
 * prints Fizz instead of the number for multiples of three
 * prints Buzz instead of the number for the multiples of five
 * Return: Always 0 (Success)
 */

int main(void)
{
	int retval;

	for (retval = 1; retval <= 100; retval++)
	{
		if (retval % 3 == 0 && retval % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (retval % 5 == 0 && retval % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (retval % 3 == 0 && retval % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (retval == 1)
		{
			printf("%d", retval);
		}
		else
		{
			printf(" %d", retval);
		}
	}
	printf("\n");
	return (0);
}
