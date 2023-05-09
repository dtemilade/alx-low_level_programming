#include "main.h"

char *create_buffer(char *file);
void close_file(int a);

/**
 * create_buffer - function that Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
char *var_b;

/*conditional statement for the buffer function*/
var_b = malloc(sizeof(char) * 1024);

if (var_b == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}

return (var_b);
}

/**
 * close_file - function that Closes file descriptors.
 * @a: The file descriptor to be closed.
 */
void close_file(int a)
{
	/*introducing variable parameter*/
	int x;

x = close(a);

/*conditional statement for the function*/
if (x == -1)
{
dprintf(STDERR_FILENO,
		"Error: Can't close a %d\n", a);
exit(100);
}
}

/**
 * main - C program that copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
* Return: 0 on success.
* Description: If the argument count is incorrect, exit code 97.
 * If file_from does not exist or cannot be read, exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
int s, d, b, c;
char *var_b;

if (argc != 3)
{
dprintf(STDERR_FILENO,
		"Usage: cp file_from file_to\n");
exit(97);
}

var_b = create_buffer(argv[2]);
s = open(argv[1], O_RDONLY);
b = read(s, var_b, 1024);
d = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (b == -1 || s == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(var_b);
exit(98);
}

c = write(d, var_b, b);
if (c == -1 || d == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(var_b);
exit(99);
}

b = read(s, var_b, 1024);
d = open(argv[2], O_WRONLY | O_APPEND);

} while (b > 0);

free(var_b);
close_file(s);
close_file(d);

return (0);
}

