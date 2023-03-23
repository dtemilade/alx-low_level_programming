#include <stdio.h>
#include <math.h>
/**
 * main - function to generate largest prime factor
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int my_num;
	long int retval;
	long int x;

	my_num = 612852475143;
	retval = -1;

	while (my_num % 2 == 0)
	{
		retval = 2;
		my_num /= 2;
	}
	for (x = 3; x <= sqrt(my_num); x = x + 2)
	{
		while (my_num % x == 0)
		{
			retval = x;
			my_num = my_num / x;
		}
	}
	if (my_num > 2)
		retval = my_num;
	printf("%ld\n", retval);
	return (0);
}
