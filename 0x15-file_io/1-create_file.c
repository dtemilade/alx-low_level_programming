#include "main.h"

/**
 * create_file - C function that creates a file.
 * @fisame: A pointer parameter for the name of the file to create.
 * @text_content: A pointer parameter for string
* Return: If the function fails -1 Otherwise 1.
 */
int create_file(const char *fisame, char *text_content)
{
	/*introducing variable parameter*/
	int a, s, b;

s = 0;

/*conditional statement for the function*/
if (fisame == NULL)
return (-1);

if (text_content != NULL)
{
for (s = 0; text_content[s];)
s++;
}

a = open(fisame, O_CREAT | O_RDWR | O_TRUNC, 0600);
b = write(a, text_content, s);

if (b == -1 || a == -1)
return (-1);

close(a);

return (1);
}

