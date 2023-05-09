#include "main.h"

/**
 * read_textfile - function that reads a text file print to STDOUT.
 * and prints it to the `POSIX` standard output.
 * @fisame: parameter for the text file to be read
 * @letters: the number of letters the function should read and print.
 * Return: 0 when function fails or fisame is NULL.
 */

ssize_t read_textfile(const char *fisame, size_t letters)
{
/*introducing variable parameter*/
	ssize_t b;
	char *var_b;
	ssize_t c;
	ssize_t a;

a = open(fisame, O_RDONLY);
/*conditional statement for the function*/
if (a == -1)
return (0);
var_b = malloc(sizeof(char) * letters);
c = read(a, var_b, letters);
b = write(STDOUT_FILENO, var_b, c);

free(var_b);
close(a);
return (b);
}

