#include <stdio.h>

void my_first(void) __attribute__ ((constructor));

/**
 * my_first - function that prints a sentence before the main
*/
void my_first(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back");
printf("!\n");
}
