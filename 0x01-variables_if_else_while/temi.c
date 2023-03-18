#include <stdio.h>
/**
 * main - entry point
 *
 * return always with (0) success
 */
int main(void)
{
	int age;

	printf("How old are you?");
	scanf("%d", &age);

	printf("You are %d years old\n", age);

	return (0);
}
